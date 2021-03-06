//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBScopedSingletonRegistry : NSObject
{
    NSDictionary *_scopesToIdentifiersToInstances;
    NSDictionary *_classesToInstances;
    NSDictionary *_scopesToInstanceSets;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)allInstancesForScope:(Class)arg1;
- (id)singletonForIdentifier:(id)arg1 scope:(Class)arg2;
- (id)singletonForClass:(Class)arg1;
- (id)init;

@end