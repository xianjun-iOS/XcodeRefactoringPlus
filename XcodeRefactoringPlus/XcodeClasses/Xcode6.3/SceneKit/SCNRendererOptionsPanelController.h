//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNRendererOptionsPanelController : NSObject
{
    SCNView *_3dView;
    SCNRendererOptionsPanel *_panel;
    NSPopUpButton *antialiasingLevels;
    NSTextField *benchResult;
    NSSlider *seekSlider;
    NSStepper *seekStepper;
    NSButton *isolate;
    BOOL _viewLocked;
    unsigned int _currentSeekStep;
}

- (void)isolate:(id)arg1;
- (void)close:(id)arg1;
- (void)setSeekStep:(unsigned long long)arg1;
- (unsigned long long)seekStep;
- (void)updateSeek;
- (void)capture:(id)arg1;
- (void)runBench:(id)arg1;
- (void)setAntialiasingLevel:(id)arg1;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (void)selectCamera:(id)arg1;
- (void)showBoundingSpheresToggled:(id)arg1;
- (void)disablePassesToggle:(id)arg1;
- (void)SSAOToggled:(id)arg1;
- (void)hideSpriteKitOverlaysToggled:(id)arg1;
- (void)showLightingLayerToggled:(id)arg1;
- (void)showPhysicsLayerToggled:(id)arg1;
- (void)showBoundingBoxesToggled:(id)arg1;
- (void)enableVBL:(id)arg1;
- (void)GLOWToggled:(id)arg1;
- (void)recompilePasses;
@property(retain) SCNView *view;
- (id)panel;
-     // Error parsing type: ^{__C3DRendererContext={__CFRuntimeBase=Q[4C]I}iI(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})(C3DVector2=[2f]{?=ff}{?=ff}{?=ff})IIIfI[3(C3DMatrix4x4=[16f][4])]^{__C3DTexture}^{__C3DStack}^vBBBBBI^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DRendererContextStats=IIIIIIIIIIIIIIIIIIIIIIIIddddddddddddddIIIIIIIIIIIIIIddd[60d]Idd}{Cache=[16I]Ii^{__C3DBlendStates}^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^viii}{?=[5I][5i][7{?=iII}][7I]^?^?^?^?^?^?^?^?^?^?}^{__C3DArray}II^{__CFArray}^{__C3DArray}I}16@0:8, name: rendererContext
- (struct __C3DEngineContext *)context;
- (void)sceneDidChange;
- (void)dealloc;
- (id)init;

@end