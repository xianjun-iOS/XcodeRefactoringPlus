//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTHorizontalTilingPainter : NSObject <DVTPainter>
{
    NSImage *_centerActiveImageToTile;
    NSImage *_centerInactiveImageToTile;
}

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1 forView:(id)arg2;
- (id)initWithHorizontalActiveImageTile:(id)arg1 inactiveImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end