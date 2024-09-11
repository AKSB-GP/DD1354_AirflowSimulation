#include "setup.hpp"

//Airflow simulation, takes alot of RAM memory
void main_setup() { // Mig-31 icing simulation; requires the following extensions from defines.hpp: FP16S, EQUILIBRIUM_BOUNDARIES, SUBGRID, GRAPHICS
	
	const uint3 lbm_N = resolution(float3(0.8f, 1.0f, 0.5f), 3600u); //  aspect ratio and VRAM occupation in MB inputs,  grid resolution as output

	//Conditions for "normal" flight at sea level
	const float si_u = 0.21f * 1024.0f;
	const float si_length = 4.44f;
	const float si_T = 1.f;
	const float si_nu = 1.48E-5f, si_rho = 1.225f;
	const float lbm_length = 0.56f * (float)lbm_N.y;
	const float lbm_u = 0.1f;
	//Conditions for icing at sea level at minus 10 degrees celsius 
	const float si_nu_iced = 1.846E-5f, si_rho_iced = 1.341f;
	
	units.set_m_kg_s(lbm_length, lbm_u, 1.0f, si_length, si_u, si_rho_iced);
	print_info("Re = "+to_string(to_uint(units.si_Re(si_length, si_u, si_nu_iced))));
	LBM lbm(lbm_N, 1u, 1u, 1u, units.nu(si_nu_iced));
	//used to align mesh properly since the import was done incorrectly in blender. 
	const float3 center = float3(lbm.center().x, 0.62f*lbm_length, lbm.center().z+0.03f*lbm_length);
	const float3x3 rotation = float3x3(float3(1, 0, 0), radians(-10.0f))*float3x3(float3(0, 0, 1), radians(90.0f))*float3x3(float3(1, 0, 0), radians(90.0f));
	//Mesh with and without icing. Remove or add comment for which mesh to use and which to voxelize.
	Mesh* mesh_iced = read_stl(get_exe_path() + "../stl/mig31_landinggear12_redesign_iced_b.stl");
	//
	// mesh without icing
	//Mesh* mesh = read_stl(get_exe_path() + "../stl/mig31_fixed_normal2_b.stl");
	//lbm.voxelize_stl(get_exe_path()+"../stl/mig31_fixed_normal2_b.stl", center, rotation, lbm_length); 
	lbm.voxelize_stl(get_exe_path() + "../stl/mig31_landinggear12_redesign_iced_b.stl", center, rotation, lbm_length);
	//Set the boundaries and check if positions are not of a solid type (for instance ). 
	const uint Nx=lbm.get_Nx(), Ny=lbm.get_Ny(), Nz=lbm.get_Nz(); parallel_for(lbm.get_N(), [&](ulong n) { uint x=0u, y=0u, z=0u; lbm.coordinates(n, x, y, z);
		if(lbm.flags[n]!=TYPE_S) lbm.u.y[n] = lbm_u;
		// check if a position has the equilibrium  boundary. if set the visualisation mode to to flags and Q_criterion
		if(x==0u||x==Nx-1u||y==0u||y==Ny-1u||z==0u||z==Nz-1u) lbm.flags[n] = TYPE_E; 
	}); 	lbm.graphics.visualization_modes = VIS_FLAG_SURFACE|VIS_Q_CRITERION; 
	lbm.run(0u); // start the simulation
	lbm.write_status(); // write information such as timesteps, bandwidth etc to terminal 
	while(lbm.get_t()<=units.t(si_T)) { // simulation loop
#if defined(GRAPHICS) && !defined(INTERACTIVE_GRAPHICS)
		if(lbm.graphics.next_frame(units.t(si_T), 10.0f)) {
			//set the camera and write frames for each step in a named folder
			//Camera positions were taken from the concorde example
			/*
			lbm.graphics.set_camera_free(float3(1.133361f * (float)Nx, 1.407077f * (float)Ny, 1.284411f * (float)Nz), 59.0f, 19.0f, 25.0f);
			lbm.graphics.write_frame(get_exe_path() + "export/back_iced/");
			lbm.graphics.set_camera_centered(0.0f, 0.0f, 25.0f, 1.648722f);
			lbm.graphics.write_frame(get_exe_path()+"export/side_iced/");
			lbm.graphics.set_camera_centered(0.0f, 90.0f, 25.0f, 1.648722f);
			lbm.graphics.write_frame(get_exe_path()+"export/top_iced/");
			lbm.graphics.set_camera_free(float3(0.269361f * (float)Nx, -0.179720f * (float)Ny, 0.304988f * (float)Nz), -56.0f, 31.6f, 100.0f);
			lbm.graphics.write_frame(get_exe_path() + "export/wing_iced/");
			
			lbm.graphics.set_camera_free(float3(1.133361f * (float)Nx, 1.407077f * (float)Ny, 1.284411f * (float)Nz), 59.0f, 19.0f, 25.0f);
			lbm.graphics.write_frame(get_exe_path()+"export/back_normal/");
			lbm.graphics.set_camera_centered(0.0f, 0.0f, 25.0f, 1.648722f);
			lbm.graphics.write_frame(get_exe_path()+"export/side_normal/");
			lbm.graphics.set_camera_centered(0.0f, 90.0f, 25.0f, 1.648722f);
			lbm.graphics.write_frame(get_exe_path()+"export/top_normal/");
			lbm.graphics.set_camera_free(float3(0.269361f * (float)Nx, -0.179720f * (float)Ny, 0.304988f * (float)Nz), -56.0f, 31.6f, 100.0f);
			lbm.graphics.write_frame(get_exe_path() + "export/wing_normal/");
			*/
			//write data as vtk files, warning takes alot of harddrive space (GB scale)
			lbm.u.write_device_to_vtk();
			//lbm.rho.write_device_to_vtk();
			//lbm.write_mesh_to_vtk(mesh);

		}
#endif // GRAPHICS && !INTERACTIVE_GRAPHICS
		lbm.run(1u); 
	}
	lbm.write_status();
} /**/
