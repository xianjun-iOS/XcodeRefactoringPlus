//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SCNNode (SceneKit_SKEAdditions)
+ (id)keyPathsForValuesAffectingIde_displayName;
+ (id)ske_displayNameForUndoKVOKeypath:(id)arg1;
- (BOOL)ide_canBenefitFromFlattening;
- (BOOL)ide_hasNodeAttributes;
- (BOOL)hasPotentialPointOfView;
- (BOOL)isPotentialPointOfView;
- (id)statusInfo;
- (unsigned long long)ide_attributesInfo;
@property(readonly) BOOL ide_shouldAppearInSceneGraph;
@property(readonly) BOOL ide_shouldBeRemovedFromSceneGraphUponSave;
@property double ide_rotationAngle;
@property struct SCNVector3 ide_rotationAxis;
@property(readonly) NSImage *ide_icon;
@property(retain) NSString *ide_visualizedParticleSystemFileName;
@property(retain) SCNParticleSystem *ide_visualizedParticleSystem;
@property(retain) SCNParticleSystem *ide_firstParticleSystem;
- (long long)polygonCount;
@property(readonly) NSString *ide_displayName;
- (id)ske_undoKVOKeypaths;
- (long long)ide_renderingOrder;
- (void)setIde_renderingOrder:(long long)arg1;
@end