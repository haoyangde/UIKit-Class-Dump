//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@interface UIAutoRotatingWindow : UIWindow
{
    int _interfaceOrientation;
    BOOL _unknownOrientation;
}

+ (id)sharedPopoverHostingWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_didRemoveSubview:(id)arg1;
- (void)updateForOrientation:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

