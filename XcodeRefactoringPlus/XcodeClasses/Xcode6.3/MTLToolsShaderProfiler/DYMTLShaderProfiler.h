//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYMTLShaderProfiler : DYShaderProfiler
{
}

+ (BOOL)isDisassemblerAvailable;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
- (void)_preProcessUSCSampleData:(id)arg1 result:(id)arg2;
- (id)_gatherStaticInformation;
- (id)_constructPayload;
- (id)profileShader:(id)arg1;
- (void)initializeShaderAnalyzer;

@end