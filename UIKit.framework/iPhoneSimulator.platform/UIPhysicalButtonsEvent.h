//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInternalEvent.h>

@class NSMutableSet, _UIPhysicalButton;

__attribute__((visibility("hidden")))
@interface UIPhysicalButtonsEvent : UIInternalEvent
{
    NSMutableSet *_allPhysicalButtons;
    _UIPhysicalButton *_triggeringPhysicalButton;
}

@property(retain, nonatomic) _UIPhysicalButton *_triggeringPhysicalButton; // @synthesize _triggeringPhysicalButton;
- (void)_removePhysicalButton:(id)arg1;
- (void)_addPhysicalButton:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2;
- (id)_physicalButtonsForGestureRecognizer:(id)arg1;
- (id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2;
- (id)_physicalButtonsForResponder:(id)arg1;
- (id)_respondersForWindow:(id)arg1;
- (id)_physicalButtonsForWindow:(id)arg1;
- (id)_allPhysicalButtons;
- (id)_windows;
- (void)dealloc;
- (id)_init;

@end
