//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, UIView, UIWindow;

@interface UITouch : NSObject
{
    float _movementMagnitudeSquared;
    double _timestamp;
    int _phase;
    int _savedPhase;
    unsigned int _tapCount;
    UIWindow *_window;
    UIView *_view;
    UIView *_gestureView;
    UIView *_warpedIntoView;
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    struct CGPoint _locationInWindow;
    struct CGPoint _previousLocationInWindow;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
    struct {
        unsigned int _firstTouchForView:1;
        unsigned int _isTap:1;
        unsigned int _isDelayed:1;
        unsigned int _sentTouchesEnded:1;
        unsigned int _abandonForwardingRecord:1;
    } _touchFlags;
    BOOL _eaten;
}

+ (id)_createTouchesWithGSEvent:(struct __GSEvent *)arg1 phase:(int)arg2 view:(id)arg3;
@property(nonatomic, getter=_isEaten, setter=_setEaten:) BOOL _eaten; // @synthesize _eaten;
@property(nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius; // @synthesize _pathMajorRadius;
@property(nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity; // @synthesize _pathIdentity;
@property(nonatomic, setter=_setPathIndex:) unsigned char _pathIndex; // @synthesize _pathIndex;
- (void)_loadStateFromTouch:(id)arg1;
- (struct CGPoint)previousLocationInView:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) UIWindow *window;
@property(nonatomic) BOOL sentTouchesEnded;
- (BOOL)isDelayed;
- (void)setIsDelayed:(BOOL)arg1;
@property(nonatomic) BOOL isTap;
@property(readonly, nonatomic) unsigned int tapCount;
- (int)info;
@property(readonly, nonatomic) int phase;
@property(readonly, nonatomic) double timestamp;
- (void)dealloc;
- (BOOL)_isStationaryRelativeToTouches:(id)arg1;
- (void)_updateMovementMagnitudeForLocation:(struct CGPoint)arg1;
@property(retain, nonatomic) UIView *warpedIntoView;
- (id)_forwardingRecord;
- (BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (int)_compareIndex:(id)arg1;
- (struct CGPoint)_previousLocationInWindow:(id)arg1;
- (struct CGPoint)_locationInWindow:(id)arg1;
- (void)_popPhase;
- (void)_pushPhase:(int)arg1;
- (void)_clearGestureRecognizers;
- (id)_gestureRecognizers;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_addGestureRecognizer:(id)arg1;
- (id)description;
- (id)_phaseDescription;
- (void)_setLocationInWindow:(struct CGPoint)arg1 resetPrevious:(BOOL)arg2;
@property(retain, nonatomic) UIView *gestureView;
- (BOOL)_isFirstTouchForView;
- (void)_setIsFirstTouchForView:(BOOL)arg1;
- (float)_distanceFrom:(id)arg1 inView:(id)arg2;

@end

