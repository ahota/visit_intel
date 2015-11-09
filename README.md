VisItOSPRay <a href="https://tacc.github.io/visitOSPRay/">https://tacc.github.io/visitOSPRay/</a>
======
<h2>About</h2>
visitOSPRay is a VisIt plugin which creates a custom view using vtkOSPRay for rendering. The code for VisIt, the plugin, and the base VTK code are all contained in the visitOSPRay code tree.
VisItOSPRay is currently pre-alpha and no master branch version has been released. Intrepid souls who are tolerant to early-release code may clone the current development version from the dev branch.

vtkOSPRay
======

<h2>About</h2>
The base VTK code without ParaView is contained in the VTK directory and makes up vtkOSPRay.  vtkOSPRay is a VTK module which utilizes Intel's OSPRay ray tracing framework (http://ospray.github.io) for rendering.  

<h2>Building</h2>
vtkOSPRay is bundled with visitOSPRay. VTK support is built as part of the visitOSPRay build process.
