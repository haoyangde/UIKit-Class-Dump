//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIBarItem.h>

#import "NSCoding.h"

@class NSSet, NSString, UIColor, UIImage, UIToolbarButton, UIView;

@interface UIBarButtonItem : UIBarItem <NSCoding>
{
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_landscapeImagePhone;
    struct UIEdgeInsets _imageInsets;
    struct UIEdgeInsets _landscapeImagePhoneInsets;
    float _width;
    UIView *_view;
    int _tag;
    id _appearanceStorage;
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int viewIsCustom:1;
        unsigned int isMinibarView:1;
        unsigned int disableAutosizing:1;
        unsigned int selected:1;
        unsigned int imageHasEffects:1;
    } _barButtonItemFlags;
    float _toolbarCharge;
    float _minimumWidth;
    float _maximumWidth;
    NSSet *_possibleSystemItems;
    BOOL _flexible;
}

+ (id)_appearanceProxyViewClasses;
+ (Class)classForNavigationButton;
+ (void)_getSystemItemStyle:(int *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(int)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8 usingSystemItem:(int)arg9 usingItemStyle:(int)arg10;
@property(nonatomic, setter=_setFlexible:) BOOL _flexible; // @synthesize _flexible;
@property(nonatomic, setter=_setMaximumWidth:) float _maximumWidth; // @synthesize _maximumWidth;
@property(nonatomic, setter=_setMinimumWidth:) float _minimumWidth; // @synthesize _minimumWidth;
@property(nonatomic, setter=_setToolbarCharge:) float _toolbarCharge; // @synthesize _toolbarCharge;
- (void)setTag:(int)arg1;
- (int)tag;
@property(nonatomic) id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
- (struct UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (float)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(int)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(int)arg2;
- (float)backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (void)setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (id)backButtonBackgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
@property(retain, nonatomic) UIColor *tintColor;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)backgroundImageForState:(unsigned int)arg1 style:(int)arg2 barMetrics:(int)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (id)_appearanceStorage;
@property(nonatomic) BOOL selected;
@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems; // @synthesize possibleSystemItems=_possibleSystemItems;
- (void)_setSystemItem:(int)arg1;
@property(readonly, nonatomic) int systemItem;
@property(readonly, nonatomic) BOOL isSystemItem;
@property(retain, nonatomic) UIView *customView;
@property(copy, nonatomic) NSSet *possibleTitles;
@property(nonatomic) float width;
- (struct UIEdgeInsets)imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)landscapeImagePhoneInsets;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets)arg1;
- (id)landscapeImagePhone;
- (void)setLandscapeImagePhone:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
@property(nonatomic) int style;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithBarButtonSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(int)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)init;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (float)_width;
- (void)_setWidth:(float)arg1;
- (id)createViewForToolbar:(id)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (BOOL)_shouldBezelSystemButtonImage;
@property(nonatomic, setter=_setImageHasEffects:) BOOL _imageHasEffects;
@property(readonly, nonatomic) UIToolbarButton *_toolbarButton;
@property(nonatomic, getter=_miniImageInsets, setter=_setMiniImageInsets:) struct UIEdgeInsets miniImageInsets;
@property(retain, nonatomic, getter=_miniImage, setter=_setMiniImage:) UIImage *miniImage;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (BOOL)isCustomViewItem;
- (void)setIsMinibarView:(BOOL)arg1;
- (BOOL)isMinibarView;
- (id)view;
- (void)setView:(id)arg1;
- (id)nextResponder;
- (id)window;
- (void)_updateView;
- (void)_getToolbarEdgeInsets:(struct UIEdgeInsets *)arg1 imageInsets:(struct UIEdgeInsets *)arg2 glowInsets:(struct UIEdgeInsets *)arg3 forBarStyle:(int)arg4 landscape:(BOOL)arg5 alwaysBordered:(BOOL)arg6;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize *)arg1 imageInsets:(struct UIEdgeInsets *)arg2 landscape:(BOOL)arg3;
- (void)_getSystemItemStyle:(int *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(int)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8;
- (id)scriptingID;

@end

