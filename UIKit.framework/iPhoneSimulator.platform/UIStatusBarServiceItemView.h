//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarServiceItemView : UIStatusBarItemView
{
    NSString *_pathToServiceImages[2];
    NSString *_serviceString;
    NSString *_crossfadeString;
    unsigned int _crossfadeStep;
    float _maxWidth;
    float _serviceWidth;
    float _crossfadeWidth;
    int _contentType;
    BOOL _loopingNecessaryForString;
    char _usingStringForStyle[2];
    BOOL _loopNowIfNecessary;
    float _letterSpacing;
}

- (void)dealloc;
- (void)_setUsingString:(BOOL)arg1 forStyle:(int)arg2;
- (BOOL)_loopingNecessary;
- (void)_crossfadeStepAnimation;
- (BOOL)_crossfaded;
- (void)_loopAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)performPendedActions;
- (float)extraRightPadding;
- (BOOL)animatesFrameChange;
- (BOOL)animatesDataChange;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (id)textColorForStyle:(int)arg1;
- (BOOL)usesSmallerTextFont;
- (id)contentsImageForStyle:(int)arg1;
- (id)_crossfadeContentsImageForStyle:(int)arg1;
- (id)_serviceContentsImageForStyle:(int)arg1;
- (id)_contentsImageFromString:(id)arg1 withWidth:(float)arg2 letterSpacing:(float)arg3 forStyle:(int)arg4;
- (float)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (float)standardPadding;

@end

