//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBDumbIconViewDataSource : NSObject
{
    NSArray *images;
    NSArray *titles;
    NSArray *labelDefinitions;
}

- (id)labelDefintionForObjectAtIndex:(long long)arg1 inIconView:(id)arg2;
- (long long)numberOfObjectsInIconView:(id)arg1;
- (id)imageForObjectAtIndex:(long long)arg1 inIconView:(id)arg2;
- (id)titleForObjectAtIndex:(long long)arg1 inIconView:(id)arg2;
- (id)toolTipForObjectAtIndex:(long long)arg1 inIconView:(id)arg2;
- (void)setTitle:(id)arg1 forIconAtIndex:(long long)arg2 inIconView:(id)arg3;
- (void)dealloc;
- (id)initWithTitles:(id)arg1 images:(id)arg2 andLabelDefinitions:(id)arg3;

@end