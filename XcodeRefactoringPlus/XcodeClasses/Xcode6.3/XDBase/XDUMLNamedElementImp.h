//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDUMLNamedElementImp : XDUMLElementImp <XDUMLNamedElement>
{
    NSString *_name;
    unsigned long long _visibility;
    NSMutableArray *_containingBuckets;
}

@property(readonly, copy) NSString *description;
- (void)removeContainingBucket:(id)arg1;
- (void)addContainingBucket:(id)arg1;
- (id)separator;
- (void)setVisibility:(unsigned long long)arg1;
- (unsigned long long)visibility;
- (id)namespace;
- (id)qualifiedName;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end