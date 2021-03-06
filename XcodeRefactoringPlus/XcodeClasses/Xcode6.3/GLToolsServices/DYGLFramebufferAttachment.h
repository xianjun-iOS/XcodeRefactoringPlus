//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYGLFramebufferAttachment : NSObject <DYFrameBufferAttachment>
{
    unsigned int _location;
    unsigned int _objectType;
    unsigned int _objectID;
    unsigned int _internalID;
    unsigned int _textureLevel;
    unsigned int _textureLayer;
    unsigned int _cubemapFace;
}

@property(readonly, nonatomic) unsigned int cubemapFace; // @synthesize cubemapFace=_cubemapFace;
@property(readonly, nonatomic) unsigned int textureLayer; // @synthesize textureLayer=_textureLayer;
@property(readonly, nonatomic) unsigned int textureLevel; // @synthesize textureLevel=_textureLevel;
@property(readonly, nonatomic) unsigned int internalID; // @synthesize internalID=_internalID;
@property(readonly, nonatomic) unsigned int objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) unsigned int objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic) unsigned int location; // @synthesize location=_location;
- (id)initWithLocation:(unsigned int)arg1 objectType:(unsigned int)arg2 objectID:(unsigned int)arg3 internalID:(unsigned int)arg4 textureLevel:(unsigned int)arg5 textureLayer:(unsigned int)arg6 cubemapFace:(unsigned int)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end