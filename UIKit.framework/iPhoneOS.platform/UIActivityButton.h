//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIActivity;

__attribute__((visibility("hidden")))
@interface UIActivityButton : UIButton
{
    UIActivity *_activity;
}

+ (id)activityButtonForActivity:(id)arg1 activityTitle:(id)arg2;
@property(retain, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
- (void)reloadActivityImage;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (void)dealloc;

@end

