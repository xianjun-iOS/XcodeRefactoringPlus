//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDETestBundleDeviceRecord : NSObject
{
    NSString *_platformIdentifier;
    NSString *_modelCode;
    NSString *_cpuKind;
    NSNumber *_cpuCount;
    NSNumber *_cpuSpeedInMHz;
    NSNumber *_busSpeedInMHz;
    NSNumber *_physicalCPUCoresPerPackage;
    NSNumber *_logicalCPUCoresPerPackage;
}

@property(copy) NSNumber *logicalCPUCoresPerPackage; // @synthesize logicalCPUCoresPerPackage=_logicalCPUCoresPerPackage;
@property(copy) NSNumber *physicalCPUCoresPerPackage; // @synthesize physicalCPUCoresPerPackage=_physicalCPUCoresPerPackage;
@property(copy) NSNumber *busSpeedInMHz; // @synthesize busSpeedInMHz=_busSpeedInMHz;
@property(copy) NSNumber *cpuSpeedInMHz; // @synthesize cpuSpeedInMHz=_cpuSpeedInMHz;
@property(copy) NSNumber *cpuCount; // @synthesize cpuCount=_cpuCount;
@property(copy) NSString *cpuKind; // @synthesize cpuKind=_cpuKind;
@property(copy) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property(copy) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDeviceRecord:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithPlatformIdentifier:(id)arg1 modelCode:(id)arg2 cpuKind:(id)arg3 cpuCount:(id)arg4 cpuSpeedInMHz:(id)arg5 busSpeedInMHz:(id)arg6 physicalCPUCoresPerPackage:(id)arg7 logicalCPUCoresPerPackage:(id)arg8;

@end