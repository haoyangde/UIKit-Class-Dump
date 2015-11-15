//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIModalView;

@protocol UIModalViewDelegate <NSObject>

@optional
- (void)modalView:(UIModalView *)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)modalView:(UIModalView *)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)didPresentModalView:(UIModalView *)arg1;
- (void)willPresentModalView:(UIModalView *)arg1;
- (void)modalViewCancel:(UIModalView *)arg1;
- (void)modalView:(UIModalView *)arg1 clickedButtonAtIndex:(int)arg2;
@end

