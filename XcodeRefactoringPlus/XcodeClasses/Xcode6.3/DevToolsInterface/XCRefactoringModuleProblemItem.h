//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRefactoringModuleProblemItem : NSObject <XCRefactoringModuleItem>
{
    XCRefactoringProblem *_problem;
    NSAttributedString *_cachedAttributedName;
}

- (BOOL)shouldHaveCheckbox;
- (BOOL)isGroupRow;
- (void)drawBackgroundInRect:(struct CGRect)arg1 rowRect:(struct CGRect)arg2;
- (id)details;
- (id)attributedName;
- (id)name;
- (id)icon;
- (id)childAtIndex:(long long)arg1;
- (unsigned long long)numberOfChildren;
- (BOOL)isExpandable;
- (void)dealloc;
- (id)problem;
- (id)initWithProblem:(id)arg1;

@end