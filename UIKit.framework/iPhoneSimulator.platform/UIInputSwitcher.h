//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIDelayedAction, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject
{
    UIDelayedAction *m_switcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    NSString *_newMode;
}

+ (id)activeInstance;
+ (id)sharedInstance;
- (BOOL)handleModifiersChangedEvent:(struct __GSEvent *)arg1;
- (BOOL)switchMode:(id)arg1 withDelay:(BOOL)arg2;
- (BOOL)handleSwitchCommand:(BOOL)arg1;
- (BOOL)isVisible;
- (void)clearSwitcherTimer;
- (void)cancelSwitcherTimer;
- (void)touchSwitcherTimer;
- (void)showSwitcher;
- (void)hideSwitcher;
- (void)handleRotate:(id)arg1;
- (void)setNewMode:(id)arg1;
- (id)newMode;
- (void)dealloc;
- (id)init;

@end
