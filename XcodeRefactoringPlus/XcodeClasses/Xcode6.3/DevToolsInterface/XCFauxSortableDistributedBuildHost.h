//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCFauxSortableDistributedBuildHost : NSObject
{
    NSString *_name;
}

- (id)compilerVersionStringsAsSingleString;
- (id)statusSortKey;
- (id)OSVersionString;
- (id)hostSpec;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end