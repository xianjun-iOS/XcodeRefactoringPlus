//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESharedTestPerfMetricIterationsGraphView : NSView
{
    NSPopover *_iterationPopover;
    NSTrackingArea *_mouseEnteredTrackingArea;
    double _firstBarOrigin;
    double _averageYOrigin;
    NSAttributedString *_detailViewValueAttributedString;
    struct CGRect _detailView_valueLabelFrame;
    IDESharedTestGraphDetailDividerView *_dividerView;
    struct CGRect _graphViewBounds;
    id <IDESharedTests_PerfMetric> _testPerfMetric;
}

+ (void)barHeightsForIterations:(id)arg1 compareToAverage:(double)arg2 maxBarHeight:(double)arg3 graphViewBounds:(struct CGRect)arg4 graphView:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (double)percentChangedBetweenIterationValueAndAverage:(double)arg1 average:(double)arg2;
@property(retain, nonatomic) id <IDESharedTests_PerfMetric> testPerfMetric; // @synthesize testPerfMetric=_testPerfMetric;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)showPopoverForBarView:(id)arg1;
- (void)layoutViews;
- (void)updateDetailViewWithIterationNumber:(unsigned long long)arg1;
- (id)detailViewBackgroundColor;
- (void)pointDividerViewTo:(id)arg1;
- (void)addDividerView;
- (void)addBars;
- (void)addIterationNumbersView;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;

@end