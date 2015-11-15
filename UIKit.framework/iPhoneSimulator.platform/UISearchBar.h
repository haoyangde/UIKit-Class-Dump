//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIBarPositioning.h"
#import "UIStatusBarTinting.h"
#import "UITextInputTraits.h"
#import "UITextInputTraits_Private.h"
#import "_UIBarPositioningInternal.h"

@class NSArray, NSString, UIBarButtonItem, UIButton, UIColor, UIImage, UIImageView, UILabel, UISearchBarTextField, UISearchController, UITapGestureRecognizer, UITextInputTraits, _UIBackdropView, _UISearchBarNavigationItem, _UISearchBarScopeBarBackground;

@interface UISearchBar : UIView <UITextInputTraits_Private, UIStatusBarTinting, _UIBarPositioningInternal, UIBarPositioning, UITextInputTraits>
{
    UISearchBarTextField *_searchField;
    UILabel *_promptLabel;
    UIButton *_cancelButton;
    id <UISearchBarDelegate><UISearchBarDelegate_Private> _delegate;
    id _controller;
    UIColor *_barTintColor;
    UIImageView *_separator;
    NSString *_cancelButtonText;
    NSArray *_scopes;
    long long _selectedScope;
    UIView *_background;
    UIView *_scopeBar;
    UIView *_scopeBarContainerView;
    struct UIEdgeInsets _contentInset;
    UIImageView *_shadowView;
    id _appearanceStorage;
    _UISearchBarNavigationItem *_navigationItem;
    _UISearchBarScopeBarBackground *_scopeBarBackgroundView;
    UIBarButtonItem *_animatedAppearanceBarButtonItem;
    _UIBackdropView *_backdrop;
    unsigned long long _backdropStyle;
    UIView *_maskView;
    UITapGestureRecognizer *_tapToActivateGestureRecognizer;
    UIBarButtonItem *_cancelBarButtonItem;
    UITextInputTraits *_textInputTraits;
    UIButton *_leftButton;
    struct {
        unsigned int barStyle:3;
        unsigned int showsBookmarkButton:1;
        unsigned int showsCancelButton:1;
        unsigned int barTranslucence:3;
        unsigned int autoDisableCancelButton:1;
        unsigned int showsScopeBar:1;
        unsigned int hideBackground:1;
        unsigned int combinesLandscapeBars:1;
        unsigned int usesEmbeddedAppearance:1;
        unsigned int showsSearchResultsButton:1;
        unsigned int searchResultsButtonSelected:1;
        unsigned int pretendsIsInBar:1;
        unsigned int disabled:1;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int containedInNavigationPalette:1;
        unsigned int containedInNavigationBar:1;
        unsigned int containedInToolBar:1;
        unsigned int drawsBackgroundInPalette:1;
        unsigned int centerPlaceholder:1;
        unsigned int searchFieldLeftViewMode:2;
        unsigned int cancelButtonWantsLetterpress:1;
    } _searchBarFlags;
    _Bool __forceCenteredPlaceholderLayout;
    _Bool __transplanting;
    UIColor *_statusBarTintColor;
    UIView *_inputAccessoryView;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    UISearchController *__searchController;
    unsigned long long __scopeBarPosition;
}

@property(nonatomic, setter=_setScopeBarPosition:) unsigned long long _scopeBarPosition; // @synthesize _scopeBarPosition=__scopeBarPosition;
@property(nonatomic, setter=_setTransplanting:) _Bool _transplanting; // @synthesize _transplanting=__transplanting;
@property(nonatomic, setter=_setSearchController:) UISearchController *_searchController; // @synthesize _searchController=__searchController;
@property(nonatomic) _Bool _forceCenteredPlaceholderLayout; // @synthesize _forceCenteredPlaceholderLayout=__forceCenteredPlaceholderLayout;
@property(nonatomic) unsigned long long searchBarStyle; // @synthesize searchBarStyle=_searchBarStyle;
@property(readonly, nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor; // @synthesize _statusBarTintColor;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(nonatomic) id <UISearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setCancelButtonWantsLetterpress;
- (id)_alternateTitle;
- (_Bool)_shouldUseNavigationBarHeight;
- (long long)_barMetricsForOrientation:(long long)arg1;
- (void)setSearchFieldLeftViewMode:(long long)arg1;
- (long long)searchFieldLeftViewMode;
- (void)_updateInsetsForTableView:(id)arg1;
- (void)tappedSearchBar:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updatePlaceholderColor;
- (void)_allowCursorToAppear:(_Bool)arg1;
- (id)_textColor;
- (id)_glyphAndTextColor:(_Bool)arg1;
- (_Bool)centerPlaceholder;
- (void)setCenterPlaceholder:(_Bool)arg1;
- (unsigned long long)_backdropStyle;
- (void)_setBackdropStyle:(unsigned long long)arg1;
- (void)_applySearchBarStyle;
- (void)_updateNeedForBackdrop;
- (void)_setBackgroundLayoutNeedsUpdate:(_Bool)arg1;
- (_Bool)_containedInNavigationPalette;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_layoutBackgroundViewConsideringTopBarStatusAndChangedHeight:(_Bool)arg1;
- (_Bool)_isAtTop;
- (id)_animatedAppearanceBarButtonItem;
- (id)_navigationItem;
- (struct UIOffset)positionAdjustmentForSearchBarIcon:(long long)arg1;
- (void)setPositionAdjustment:(struct UIOffset)arg1 forSearchBarIcon:(long long)arg2;
@property(nonatomic) struct UIOffset searchTextPositionAdjustment;
@property(nonatomic) struct UIOffset searchFieldBackgroundPositionAdjustment;
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned long long)arg1;
- (void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (id)scopeBarButtonBackgroundImageForState:(unsigned long long)arg1;
- (void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;
- (id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2;
- (id)_imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 customImage:(_Bool *)arg3;
- (void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setSeparatorImage:(id)arg1;
- (id)_separatorImage;
@property(retain, nonatomic) UIImage *backgroundImage;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)_effectiveBarTintColorDidChange:(_Bool)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)_setBarTintColor:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)_effectiveBarTintColor;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_scopeChanged:(id)arg1;
@property(nonatomic) _Bool showsScopeBar;
- (void)_setShowsScopeBar:(_Bool)arg1 animateOpacity:(_Bool)arg2;
- (void)_setScopeBarHidden:(_Bool)arg1;
@property(nonatomic) long long selectedScopeButtonIndex;
@property(copy, nonatomic) NSArray *scopeButtonTitles;
- (void)_setUpScopeBar;
- (void)_updateScopeBarBackground;
- (struct UIEdgeInsets)_scopeBarInsets;
- (_Bool)_scopeBarIsVisible;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)_makeShadowView;
- (_Bool)_shouldDisplayShadow;
- (void)_setShadowVisibleIfNecessary:(_Bool)arg1;
- (id)_navigationBarForShadow;
- (void)layoutSubviews;
- (double)_scopeBarHeight;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (double)_searchFieldHeight;
- (double)_landscapeScopeBarWidth;
- (double)_landscapeSearchFieldWidth;
- (double)_availableBoundsWidthForSize:(struct CGSize)arg1;
- (double)_availableBoundsWidth;
- (_Bool)_searchFieldWidthShouldBeFlexible;
- (void)_setShowsSeparator:(_Bool)arg1;
- (id)_currentSeparatorImage;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_defaultHeight;
- (double)_barHeightForBarMetrics:(long long)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)textInputTraits;
@property(readonly, retain, nonatomic) UIButton *_leftButton; // @synthesize _leftButton;
- (void)_setupLeftButton;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (_Bool)usesEmbeddedAppearance;
- (void)setUsesEmbeddedAppearance:(_Bool)arg1;
- (_Bool)_wouldCombineLandscapeBarsForSize:(struct CGSize)arg1;
- (_Bool)_shouldCombineLandscapeBarsForOrientation:(long long)arg1;
- (_Bool)_shouldCombineLandscapeBars;
- (_Bool)combinesLandscapeBars;
- (void)setCombinesLandscapeBars:(_Bool)arg1;
- (_Bool)drawsBackgroundInPalette;
- (void)setDrawsBackgroundInPalette:(_Bool)arg1;
- (_Bool)drawsBackground;
- (void)setDrawsBackground:(_Bool)arg1;
- (id)_cancelBarButtonItem;
- (void)_displayNavBarCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setShowsCancelButton:(_Bool)arg1;
@property(nonatomic) _Bool showsCancelButton;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showsBookmarkButton;
@property(nonatomic, getter=isSearchResultsButtonSelected) _Bool searchResultsButtonSelected;
@property(nonatomic) _Bool showsSearchResultsButton;
- (void)_updateRightView;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *prompt;
@property(copy, nonatomic) NSString *text;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
@property(nonatomic) long long barStyle;
- (void)_removeMarginsIfNecessary;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)_identifyBarContainer;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (id)_scopeBar;
@property(readonly, nonatomic, getter=_searchBarTextField) UISearchBarTextField *searchBarTextField;
- (id)searchField;
- (id)controller;
- (void)setController:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_viewForChildViews;
- (void)_setMaskBounds:(struct CGRect)arg1;
- (void)_setMaskActive:(_Bool)arg1;
- (void)_commonInit;
- (id)_scopeBarContainer;
- (long long)_barPosition;
- (void)_setBarPosition:(long long)arg1;
- (void)_updateBackgroundToBackdropStyle:(long long)arg1;
- (id)_scopeBarBackgroundView;
- (id)_backgroundView;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setScopeBarSegmentsEnabled:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (_Bool)_isEnabled;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)reloadInputViews;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldReturnPressed;
- (void)_searchFieldEndEditing;
- (void)_searchFieldBeginEditing;
- (void)_resultsListButtonPressed;
- (void)_bookmarkButtonPressed;
- (void)_cancelButtonPressed;
- (void)_destroyCancelButton;
- (void)_setupCancelButtonWithAppearance:(id)arg1;
- (void)_setupCancelButton;
- (void)_setAutoDisableCancelButton:(_Bool)arg1;
- (void)_setCancelButtonText:(id)arg1;
- (void)_setupPromptLabel;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_updateOpacity;
- (void)_setupSearchField;
- (void)_updateMagnifyingGlassView;
- (void)_updateSearchFieldArt;
- (_Bool)_consideredInBarWithSuperview:(id)arg1;
- (_Bool)_isInBar;
- (void)setPretendsIsInBar:(_Bool)arg1;
- (_Bool)pretendsIsInBar;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (_Bool)_hasCustomAutolayoutNeighborSpacing;

// Remaining properties
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool forceEnableDictation;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;

@end

