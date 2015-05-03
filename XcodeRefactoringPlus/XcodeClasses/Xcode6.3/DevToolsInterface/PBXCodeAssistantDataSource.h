//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXCodeAssistantDataSource : NSObject
{
    NSTextView *_textView;
    NSMutableArray *_strategies;
    NSArray *_items;
    NSMutableString *_infoString;
    struct _NSRange _lastParseRange;
}

+ (id)smallModeledMethodImage;
+ (id)smallModeledPropertyImage;
+ (id)smallModeledClassImage;
+ (id)smallFunctionImage;
+ (id)smallConstImage;
+ (id)smallTypeImage;
+ (id)smallEnumTagImage;
+ (id)smallEnumImage;
+ (id)smallMacroImage;
+ (id)smallVariableImage;
+ (id)smallGlobalImage;
+ (id)smallLocalImage;
+ (id)smallUnionImage;
+ (id)smallStructImage;
+ (id)smallPropertyImage;
+ (id)smallMethodImage;
+ (id)smallFieldImage;
+ (id)smallProtocolImage;
+ (id)smallClassExtensionImage;
+ (id)smallClassImage;
+ (id)_smallImageNamed:(id)arg1;
+ (id)modeledMethodImage;
+ (id)modeledPropertyImage;
+ (id)modeledClassImage;
+ (id)functionImage;
+ (id)constImage;
+ (id)typeImage;
+ (id)enumTagImage;
+ (id)enumImage;
+ (id)macroImage;
+ (id)variableImage;
+ (id)globalImage;
+ (id)localImage;
+ (id)unionImage;
+ (id)structImage;
+ (id)propertyImage;
+ (id)methodImage;
+ (id)fieldImage;
+ (id)protocolImage;
+ (id)classExtensionImage;
+ (id)classImage;
- (BOOL)isPopupTrigger:(unsigned short)arg1;
- (id)infoString;
- (id)items;
- (long long)count;
- (void)updateList;
- (BOOL)shouldUpdateList;
- (void)purgeList;
- (void)dealloc;
- (id)initWithTextView:(id)arg1;

@end