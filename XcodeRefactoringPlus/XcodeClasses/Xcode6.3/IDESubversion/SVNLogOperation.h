//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SVNLogOperation : SVNOperation
{
    NSDateFormatter *_formatter;
}

- (void).cxx_destruct;
- (void)parseData;
- (unsigned long long)statusValueForRepositoryShortStringValue:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end