//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol DVTFindPatternField <NSObject>
@property id <DVTFindPatternManager> findPatternManager;
- (NSMenu *)menuForFindPatternAttachment:(DVTFindPatternAttachmentCell *)arg1;
- (NSString *)plainTextValue;
- (void)setFindPatternPropertyList:(id)arg1;
- (id)findPatternPropertyList;
- (BOOL)hasFindPattern;
- (NSString *)replacementExpression;
- (NSString *)regularExpression;
- (NSArray *)findPatternArray;
- (void)setFindPatternArray:(NSArray *)arg1;
- (void)insertNewFindPattern:(DVTFindPattern *)arg1;
- (BOOL)removeFindPattern:(DVTFindPattern *)arg1;
@end