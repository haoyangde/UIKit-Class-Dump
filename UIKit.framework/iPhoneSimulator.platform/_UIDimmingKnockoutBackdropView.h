//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIAlertControllerBackgroundView.h"

@class NSString, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface _UIDimmingKnockoutBackdropView : UIView <UIAlertControllerBackgroundView>
{
    _UIBackdropView *backdropView;
    UIView *dimmingKnockoutView;
}

- (void)dealloc;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property double cornerRadius;
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1;
- (id)_filterForBackdropStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

