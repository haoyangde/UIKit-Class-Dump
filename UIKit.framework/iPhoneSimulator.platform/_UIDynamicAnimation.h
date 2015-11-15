//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _UIDynamicAnimation : NSObject
{
    CDUnknownBlockType _completion;
    int _state;
    unsigned int _began:1;
    unsigned int _running:1;
    unsigned int _yield:1;
    unsigned int _grouped:1;
    unsigned int _usesNSTimer:1;
}

+ (id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(struct CGPoint)arg5;
+ (void)_updateAnimationsWithTimer:(id)arg1;
+ (void)_updateAnimations:(id)arg1;
+ (void)_updateAnimations:(id)arg1 timer:(id)arg2;
- (id)description;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (BOOL)_isRunning;
- (void)_setGrouped:(BOOL)arg1;
- (BOOL)_isGrouped;
- (void)_setUsesNSTimer:(BOOL)arg1;
- (BOOL)_usesNSTimer;
- (void)_setShouldYield:(BOOL)arg1;
- (BOOL)_shouldYield;
@property(readonly, nonatomic) int state;
- (void)_cancelWithAppliers:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (void)runWithCompletion:(CDUnknownBlockType)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3;
- (void)_callAppliers:(CDUnknownBlockType)arg1 additionalEndAppliers:(CDUnknownBlockType)arg2 done:(BOOL)arg3;
- (BOOL)_animateForInterval:(double)arg1;
- (void)_stopAnimation;
- (void)dealloc;
- (id)init;

@end

