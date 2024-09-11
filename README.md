# Instructions on how to run the project.


This project is using FluidX3D create by Dr. Moritz Lehmann. 

Link to FluidX3d: https://github.com/ProjectPhysX/FluidX3D 

This repo contains the changes I made to the FluidX3D and the models used.

## To run the project.

1. Install FluidX3D. How you do this is shown in the Documentation.md. 
2. Replace the content inside of define.hpp and setup.cpp from the cloned repository with the content of define.hpp and setup.cpp from this repository. In other words replace the define and setup file with my define and setup file. 
3. Download the meshes and place them inside a new folder called stl. The stl folder must be placed in root folder, i.e FluidX3d/stl.
4. You are done! You should now be able to test and run the project!


# Final Visualization:

## Because of the massive file sizes the video renders (Both FluidX3d and Paraview) are available at the following drive link: 
[https://drive.google.com/file/d/1i81p5UttyUZTijS6Riyh0wChqgkUseRY/view?usp=sharing](https://drive.google.com/drive/folders/1s8VXbM4JFGkmlSuB-Tks4HRP-uCCIG0x?usp=sharing)

## Below is a couple of frames from each video at the same frame:


## BackView:

With icing: 
![image-000001131](https://gits-15.sys.kth.se/storage/user/19577/files/8dcda55f-562f-4d51-91e2-8ba1cd400519)

Without Icing
![image-000001131](https://gits-15.sys.kth.se/storage/user/19577/files/904183e6-49ff-4146-850b-aeec29bd56b8)

## FrontView

With icing:
![image-000001131](https://gits-15.sys.kth.se/storage/user/19577/files/eb107c14-6c6f-44e1-8c58-27329591211b)

Without icing: 
![image-000001131](https://gits-15.sys.kth.se/storage/user/19577/files/1aeeb452-7cf7-4fea-9e2f-7cb4431a5ab3)

## TopView:

With icing:
![image-000001383](https://gits-15.sys.kth.se/storage/user/19577/files/b512757e-ad0f-4156-9f4f-6925a86fac5f)

Without icing: 
![image-000001383](https://gits-15.sys.kth.se/storage/user/19577/files/0e40c0fe-4626-48cc-9559-a43a0c543ecd)


## SideView:

With icing:
![image-000001383](https://gits-15.sys.kth.se/storage/user/19577/files/e5501265-a21e-4640-a694-0cfbb8aa3d4d)

Without icing: 
![image-000001383](https://gits-15.sys.kth.se/storage/user/19577/files/534628c0-06b2-4162-b7ee-903abc83ddfa)


Icing on aircraft:
![image](https://gits-15.sys.kth.se/storage/user/19577/files/c778d30d-b7ef-4e8c-9079-7105d74ca92f)


Aircraft without icing: 
![image](https://gits-15.sys.kth.se/storage/user/19577/files/5623b091-fdbb-4a87-b4a8-f1fe5a40af78)



![siderender](https://gits-15.sys.kth.se/storage/user/19577/files/c8d39aaf-cc2e-4d78-8640-26184fc517ab)
![toprender](https://gits-15.sys.kth.se/storage/user/19577/files/74ea2fbb-1c3e-41e2-8d18-87fd8dfbcd8e)
![Backrender](https://gits-15.sys.kth.se/storage/user/19577/files/8d878ffc-2ff8-4f58-a86b-7e43c66996ce)


 References and resources: 


[1]
Yihua Cao, Zhenlong Wu, Yuan Su, and Zhongda Xu. 2015. Aircraft flight characteristics in icing conditions. Progress in Aerospace Sciences 74, (April 2015), 62–80. https://doi.org/10.1016/j.paerosci.2014.12.001
[2]
X. Chi, Bin Zhu, Tom Shih, H. Addy, and Yung Choo. 2004. CFD Analysis of the Aerodynamics of a Business-Jet Airfoil with Leading-Edge Ice Accretion. In 42nd AIAA Aerospace Sciences Meeting and Exhibit, January 05, 2004, Reno, Nevada. American Institute of Aeronautics and Astronautics, Reno, Nevada. . https://doi.org/10.2514/6.2004-560
[3]
Nick Czernkovich. Understanding In-Flight Icing. https://www.aerosafety.ca/sources/aicraft_icing_paper.pdf 
[4]
TeZhuan Du, XiangQun Li, XiaLing Zhang, and YiWei Wang. 2010. Lattice Boltzmann Method used for the aircraft characteristics computation at high angle of attack. Sci. China Technol. Sci. 53, 8 (August 2010), 2068–2073. https://doi.org/10.1007/s11431-010-3222-2
[5]
H. Y. Gu, W. M. Sang, and Y. Cai. 2019. Numerical Simulation of Flow Field Around an Iced Airfoil Using Lattice Boltzmann Method. In The Proceedings of the 2018 Asia-Pacific International Symposium on Aerospace Technology (APISAT 2018), Xinguo Zhang (ed.). Springer Singapore, Singapore, 534–547. https://doi.org/10.1007/978-981-13-3305-7_44
[6]
Holly Gurbacki and Michael Bragg. 2004. Unsteady Flowfield About an Iced Airfoil. In 42nd AIAA Aerospace Sciences Meeting and Exhibit, January 05, 2004, Reno, Nevada. American Institute of Aeronautics and Astronautics, Reno, Nevada. . https://doi.org/10.2514/6.2004-562
[7]
Taro Imamura, Kojiro Suzuki, Takashi Nakamura, and Masahiro Yoshida. 2005. Flow Simulation Around an Airfoil by Lattice Boltzmann Method on Generalized Coordinates. AIAA Journal 43, 9 (September 2005), 1968–1973. https://doi.org/10.2514/1.7554
[8]
Moritz Lehmann. 2022. Combined scientific CFD simulation and interactive raytracing with OpenCL. In International Workshop on OpenCL, May 10, 2022, Bristol, United Kingdom United Kingdom. ACM, Bristol, United Kingdom United Kingdom, 1–2. . https://doi.org/10.1145/3529538.3529542
[9]
Moritz Lehmann, Mathias J. Krause, Giorgio Amati, Marcello Sega, Jens Harting, and Stephan Gekle. 2022. Accuracy and performance of the lattice Boltzmann method with 64-bit, 32-bit, and customized 16-bit number formats. Phys. Rev. E 106, 1 (July 2022), 015308. https://doi.org/10.1103/PhysRevE.106.015308
[10]
Yanbing Li, Richard Shock, Raoyang Zhang, Hudong Chen, and Tom I-P Shih. 2005. Simulation of Flow over an Iced Airfoil by Using a Lattice-Boltzmann Method. In 43rd AIAA Aerospace Sciences Meeting and Exhibit, January 10, 2005, Reno, Nevada. American Institute of Aeronautics and Astronautics, Reno, Nevada. . https://doi.org/10.2514/6.2005-1103
[11]
Ilker Oruc. Coupled Flight Dynamics and CFD simulations of Rotorcraft / Terrain Interactions. https://www.researchgate.net/publication/301544036_Coupled_Flight_Dynamics_and_CFD_Simulations_of_Rotorcraft_Terrain_Interactions 
[12]
Mikhail Plekhanov, Vladislav Ivashchenko, Andrey Karpenko, and Rustam Mullyadzhanov. 2023. Numerical simulation of a turbulent pipe flow: FluidX3D LBM validation. E3S Web Conf. 459, (2023), 03010. https://doi.org/10.1051/e3sconf/202345903010

[14]
Rajani Satti, Yanbing Li, Richard Shock, and Swen Noelting. 2008. Simulation of Flow Over a 3-Element Airfoil Using a Lattice-Boltzmann Method. In 46th AIAA Aerospace Sciences Meeting and Exhibit, January 07, 2008, Reno, Nevada. American Institute of Aeronautics and Astronautics, Reno, Nevada. . https://doi.org/10.2514/6.2008-549
[15]
Hao Zhang, Lijun Qi, Yalei Wu, Elizabeth M. Musiu, Zhenzhen Cheng, and Pei Wang. 2020. Numerical simulation of airflow field from a six–rotor plant protection drone using lattice Boltzmann method. Biosystems Engineering 197, (September 2020), 336–351. https://doi.org/10.1016/j.biosystemseng.2020.07.018

[16]

National Weather Service. "Icing". Retrieved from https://www.weather.gov/source/zhu/ZHU_Training_Page/icing_stuff/icing/icing.htm 

												[17]
Smith, J., & Johnson, A. (Year). Lattice Boltzmann method for fluid flows. Annual Review of Fluid Mechanics, Volume(Number), Pages. https://doi.org/10.1146/annurev.fluid.30.1.329 

[18]
Fabian Hausl. MPI-based multi-GPU extension of the Lattice Boltzmann Method.
https://epub.uni-bayreuth.de/id/eprint/5689/1/BA_Haeusl.pdf 
[19]

  Business Insider. "Why airplane takeoff and landing are dangerous moments during a flight." Business Insider, 2019. [Online]. Available: https://www.businessinsider.com/why-airplane-takeoff-landing-are-dangerous-flight-2019-12 

[20]
  Open3D. "Voxelization." Open3D Documentation. https://www.open3d.org/docs/0.12.0/tutorial/geometry/voxelization.html 
[21]
Finite Element Method. https://www.repo.uni-hannover.de/handle/123456789/9301

[22]
Lattice Boltzmann Method. https://personal.ems.psu.edu/~fkd/courses/EGEE520/2017Deliverables/LBM_2017.pdf



