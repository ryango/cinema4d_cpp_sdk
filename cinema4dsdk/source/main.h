#ifndef MAIN_H__
#define MAIN_H__

#include "c4d_basedocument.h"
#include "painting/advanced/registeradvancedpaint.h"

Bool RegisterSN();
Bool RegisterGradient(void);
Bool RegisterBitmap(void);
Bool RegisterMandelbrot(void);
Bool RegisterSimpleMaterial(void);
Bool RegisterParticleVolume(void);
Bool RegisterMenuTest(void);
Bool RegisterAsyncTest(void);
Bool RegisterActiveObjectDlg();
Bool RegisterPGPTest();
Bool RegisterListView(void);
Bool RegisterSubDialog(void);
Bool RegisterSpherify(void);
Bool RegisterRoundedTube(void);
Bool RegisterTriangulate(void);
Bool RegisterVPTest(void);
Bool RegisterVPInvertImage(void);
Bool RegisterBlinker(void);
Bool RegisterAtomObject(void);
Bool RegisterCircle(void);
Bool RegisterGLTestObject(void);
Bool RegisterGLTestMaterial(void);
void FreeGLTestObject();
Bool RegisterSTL(void);
Bool RegisterBFF(void);
Bool RegisterLookAtCamera(void);
Bool RegisterGravitation(void);
Bool RegisterThreshold(void);
Bool RegisterSampleMatrix(void);
Bool RegisterPrimitiveTool(void);
Bool RegisterMorphMixer(void);
Bool RegisterVPVisualizeNormals(void);
Bool RegisterVPVisualizeChannel(void);
Bool RegisterVPReconstruct(void);
Bool RegisterExampleDataType(void);
Bool RegisterMemoryStat(void);
Bool RegisterEdgeCutTool();
Bool RegisterPickObjectTool();
Bool RegisterReverseNormals();
Bool RegisterLayerShaderBrowser();
Bool RegisterPainterSaveTest();
Bool RegisterRandomFalloff();
Bool RegisterNoiseEffector();
Bool RegisterDropEffector();
Bool RegisterDeformerObject();
Bool RegisterForceObject();
Bool RegisterCollisionObject();
Bool RegisterConstraintObject();
Bool RegisterGrassObject();
Bool RegisterShader();
Bool RegisterVideopost();
Bool RegisterStylingTag();
Bool RegisterRenderingTag();
Bool RegisterGeneratorObject();
Bool RegisterExampleSNHook();
void FreeExampleSNHook();
Bool RegisterStereoVideoPost();
void MiscTest();
void MaxonArrayTest();
void MoveCopyConstructorSample();
Bool RegisterSculptingTool();
Bool RegisterSculpt();
Bool RegisterSculptPullBrush();
Bool RegisterSculptCubesBrush();
Bool RegisterSculptDrawPolyTool();
Bool RegisterSculptSelectionBrush();
Bool RegisterSculptGrabBrush();
Bool RegisterSculptDrawPolyBrush();
Bool AddUndo(BaseDocument* doc, AtomArray* arr, UNDOTYPE type);
Bool RegisterSnapTool();
Bool RegisterSculptDeformer();
Bool RegisterSculptModifiers();
Bool RegisterSculptBrushTwist();
Bool RegisterSculptBrushMultiStamp();
Bool RegisterSnapDataNullSnap();
Bool RegisterCustomGUIString();
Bool RegisterCustomDatatypeCustomGUI();
Bool RegisterExampleDialogCommand();
Bool RegisterObjectDynamicDescription();
Bool RegisterSculptBrushSpline();
Bool RegisterGetSetDParameterExample();
Bool RegisterTakeTestCommmands();
Bool RegisterPolygonReductionTest();
Bool RegisterPlaneByPolygons();
Bool RegisterGreekTemple();
Bool RegisterHeartShape();
Bool RegisterLatticePlane();
Bool RegisterLoftedMesh();
Bool RegisterPorcupine();
Bool RegisterRevolvedMesh();
Bool RegisterRuledMesh();
Bool RegisterParticlesShuffling();
Bool RegisterVertexHandle();
Bool RegisterObjectHyperFileExample();

void CommandLineRendering(C4DPL_CommandLineArgs* args);

#endif // MAIN_H__
