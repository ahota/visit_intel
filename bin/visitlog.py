# Visit 2.8.1 log file
ScriptVersion = "2.8.1"
if ScriptVersion != Version():
    print "This script is for VisIt %s. It may not work with version %s" % (ScriptVersion, Version())
ShowAllWindows()
OpenDatabase("/export/ahota/vol/vtk/dataset2.vtk", 0)
# The UpdateDBPluginInfo RPC is not supported in the VisIt module so it will not be logged.
AddPlot("Volume", "data", 1, 1)
RenderingAtts = RenderingAttributes()
RenderingAtts.antialiasing = 0
RenderingAtts.multiresolutionMode = 0
RenderingAtts.multiresolutionCellSize = 0.002
RenderingAtts.geometryRepresentation = RenderingAtts.Surfaces  # Surfaces, Wireframe, Points
RenderingAtts.displayListMode = RenderingAtts.Auto  # Never, Always, Auto
RenderingAtts.stereoRendering = 0
RenderingAtts.stereoType = RenderingAtts.CrystalEyes  # RedBlue, Interlaced, CrystalEyes, RedGreen
RenderingAtts.notifyForEachRender = 1
RenderingAtts.scalableActivationMode = RenderingAtts.Never  # Never, Always, Auto
RenderingAtts.scalableAutoThreshold = 2000000
RenderingAtts.specularFlag = 0
RenderingAtts.specularCoeff = 0.6
RenderingAtts.specularPower = 10
RenderingAtts.specularColor = (255, 255, 255, 255)
RenderingAtts.doShadowing = 0
RenderingAtts.shadowStrength = 0.25
RenderingAtts.doDepthCueing = 0
RenderingAtts.depthCueingAutomatic = 1
RenderingAtts.startCuePoint = (-10, 0, 0)
RenderingAtts.endCuePoint = (10, 0, 0)
RenderingAtts.compressionActivationMode = RenderingAtts.Never  # Never, Always, Auto
RenderingAtts.colorTexturingFlag = 1
RenderingAtts.compactDomainsActivationMode = RenderingAtts.Never  # Never, Always, Auto
RenderingAtts.compactDomainsAutoThreshold = 256
SetRenderingAttributes(RenderingAtts)
DrawPlots()
# Begin spontaneous state
View3DAtts = View3DAttributes()
View3DAtts.viewNormal = (0.439496, 0.457427, 0.773048)
View3DAtts.focus = (31.5, 31.5, 31.5)
View3DAtts.viewUp = (-0.0725849, 0.875892, -0.477016)
View3DAtts.viewAngle = 30
View3DAtts.parallelScale = 54.5596
View3DAtts.nearPlane = -109.119
View3DAtts.farPlane = 109.119
View3DAtts.imagePan = (0, 0)
View3DAtts.imageZoom = 1
View3DAtts.perspective = 1
View3DAtts.eyeAngle = 2
View3DAtts.centerOfRotationSet = 0
View3DAtts.centerOfRotation = (31.5, 31.5, 31.5)
View3DAtts.axis3DScaleFlag = 0
View3DAtts.axis3DScales = (1, 1, 1)
View3DAtts.shear = (0, 0, 1)
View3DAtts.windowValid = 1
SetView3D(View3DAtts)
# End spontaneous state

# Begin spontaneous state
View3DAtts = View3DAttributes()
View3DAtts.viewNormal = (0.739721, 0.341299, 0.579938)
View3DAtts.focus = (31.5, 31.5, 31.5)
View3DAtts.viewUp = (-0.26615, 0.939947, -0.213689)
View3DAtts.viewAngle = 30
View3DAtts.parallelScale = 54.5596
View3DAtts.nearPlane = -109.119
View3DAtts.farPlane = 109.119
View3DAtts.imagePan = (0, 0)
View3DAtts.imageZoom = 1
View3DAtts.perspective = 1
View3DAtts.eyeAngle = 2
View3DAtts.centerOfRotationSet = 0
View3DAtts.centerOfRotation = (31.5, 31.5, 31.5)
View3DAtts.axis3DScaleFlag = 0
View3DAtts.axis3DScales = (1, 1, 1)
View3DAtts.shear = (0, 0, 1)
View3DAtts.windowValid = 1
SetView3D(View3DAtts)
# End spontaneous state

