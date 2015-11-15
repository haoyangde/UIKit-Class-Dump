//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, UIBezierPath, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingQuadCurvePointFIFO, UIKBHandwritingStrokePointFIFO, UIKBHandwritingStrokeView;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate>
{
    UIKBHandwritingStrokeView *_strokeView;
    double _inkWidth;
    struct CGColor *_inkColor;
    struct CGImage *_inkMask;
    NSMutableArray *_interpolatedPaths;
    UIBezierPath *_currentPath;
    UIKBHandwritingStrokePointFIFO *_strokeFIFO;
    UIKBHandwritingBoxcarFilterPointFIFO *_smoothingFIFO;
    UIKBHandwritingQuadCurvePointFIFO *_interpolatingFIFO;
}

@property(retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) UIKBHandwritingBoxcarFilterPointFIFO *smoothingFIFO; // @synthesize smoothingFIFO=_smoothingFIFO;
@property(retain, nonatomic) UIKBHandwritingStrokePointFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property(retain, nonatomic) UIBezierPath *currentPath; // @synthesize currentPath=_currentPath;
@property(retain, nonatomic) NSMutableArray *interpolatedPaths; // @synthesize interpolatedPaths=_interpolatedPaths;
@property(nonatomic) struct CGImage *inkMask; // @synthesize inkMask=_inkMask;
@property(nonatomic) struct CGColor *inkColor; // @synthesize inkColor=_inkColor;
@property(nonatomic) double inkWidth; // @synthesize inkWidth=_inkWidth;
@property(retain, nonatomic) UIKBHandwritingStrokeView *strokeView; // @synthesize strokeView=_strokeView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)cancelTouchTracking;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addInkPoint:(struct CGPoint)arg1;
- (void)send;
- (void)deleteStrokesAtIndexes:(id)arg1;
- (void)clearAndNotify:(_Bool)arg1;
- (void)updateInkColor;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)setRenderConfig:(id)arg1;
- (_Bool)shouldCache;
- (void)log;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

