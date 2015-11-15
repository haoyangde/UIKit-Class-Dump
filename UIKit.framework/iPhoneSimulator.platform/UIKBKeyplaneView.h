//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKBCacheableView.h"

@class NSMutableDictionary, NSTimer, UIKBKeyView, UIKBTree, UIKeyboardLayoutStar;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView : UIView <UIKBCacheableView>
{
    UIKBTree *_keyboard;
    UIKBTree *_keyplane;
    UIKeyboardLayoutStar *_layout;
    UIView *_splitRight;
    UIKBKeyView *_candidateGapView;
    NSMutableDictionary *_states;
    NSMutableDictionary *_subviewIndex;
    NSMutableDictionary *_activeViewIndex;
    NSMutableDictionary *_renderedKeyViews;
    NSMutableDictionary *_delayedDeactivationKeys;
    NSTimer *_activatedTimer;
    BOOL _performingDeactivation;
    BOOL _shouldDrawRect;
}

@property(nonatomic) UIKeyboardLayoutStar *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
- (void)purgeSubviews;
- (void)purgeKeyViews;
- (void)activateKeys;
- (void)deactivateKeys;
- (void)deactivateKey:(id)arg1;
- (void)updateDecorationViewsIfNeeded;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (id)viewForKey:(id)arg1;
- (int)stateForKey:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (Class)classForKey:(id)arg1;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2;
- (int)cornerMaskForKey:(id)arg1 recursive:(BOOL)arg2;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)cacheIdentifierForKey:(id)arg1;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (void)performDelayedDeactivation:(id)arg1;
- (void)scheduleDelayedDeactivation;
- (void)cancelDelayedDeactivation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_shouldDrawLowResBackground;
@property(readonly, nonatomic) float cachedWidth;
@property(readonly, nonatomic) BOOL cacheDeferable;
- (void)displayLayer:(id)arg1;
- (id)cacheKey;
- (BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (void)dealloc;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1 keyboard:(id)arg2 keyplane:(id)arg3;

@end

