//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEDMSubViewControllerStateManager : NSObject <DVTInvalidation>
{
    DVTStateToken *_token;
    NSMutableArray *_stateIdentifiers;
    IDEDMEditorController *_parent;
}

+ (void)initialize;
@property(retain) DVTStateToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithToken:(id)arg1 parent:(id)arg2;
- (void)_setupStateToken;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end