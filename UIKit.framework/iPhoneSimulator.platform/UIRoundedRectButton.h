//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIBezierPath, UIColor, UIGroupTableViewCellBackground, UIView;

__attribute__((visibility("hidden")))
@interface UIRoundedRectButton : UIButton
{
    UIBezierPath *_fillPath;
    UIColor *_fillColor;
    UIColor *_tintColor;
    UIGroupTableViewCellBackground *_tableViewStyleBackground;
    UIView *_shadowView;
}

- (id)tintColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTintColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (int)buttonType;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_invalidatePaths;
- (void)_invalidateBackingViews;
- (void)_updateState;
- (id)_backgroundView;
- (id)_setupBackgroundView;
- (BOOL)_wantsTableViewStyleBackground;
- (id)_contentBackgroundColor;
- (BOOL)_canDrawContent;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 fillColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonRoundedRectButtonInit;

@end

