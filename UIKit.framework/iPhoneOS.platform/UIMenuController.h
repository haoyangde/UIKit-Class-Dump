//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICalloutBarDelegate.h"

@class NSArray;

@interface UIMenuController : NSObject <UICalloutBarDelegate>
{
    struct CGRect _targetRect;
    int _arrowDirection;
}

+ (id)sharedMenuController;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(readonly, nonatomic) struct CGRect menuFrame;
- (void)update;
@property(copy, nonatomic) NSArray *menuItems;
- (void)_setTargetRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_windowWillRotate:(id)arg1;
- (void)setMenuVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_menuHidden;
@property(nonatomic, getter=isMenuVisible) BOOL menuVisible;
- (void)dealloc;
- (id)init;
- (BOOL)_updateAnimated:(BOOL)arg1 checkVisible:(BOOL)arg2;
- (void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2;
- (void)calloutBar:(id)arg1 willStartAnimation:(id)arg2;

@end

