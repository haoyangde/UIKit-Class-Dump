//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardCandidateList.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateScrollViewControllerDelegate.h"

@class NSArray, NSMutableDictionary, NSString, UIImageView, UIKeyboardCandidateGridHeader, UIKeyboardCandidateScrollViewController, UIKeyboardCandidateSortControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate>
{
    UIImageView *_backgroundView;
    UIView *_topBarShadow;
    UIView *_bottomBarShadow;
    UIKeyboardCandidateSortControl *_sortBar;
    UIKeyboardCandidateGridHeader *_gridHeader;
    BOOL _drawTopShadow;
    BOOL _drawBottomShadow;
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    NSArray *_candidates;
    unsigned int _selectedCandidateIndex;
    NSArray *_sorts;
    NSMutableDictionary *_scrollViewControllers;
    UIKeyboardCandidateScrollViewController *_scrollViewController;
    unsigned int _numberOfColumns;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    int _visualStyle;
    NSString *_inlineText;
    NSArray *_sortedCandidates;
}

@property(retain, nonatomic) NSArray *sortedCandidates; // @synthesize sortedCandidates=_sortedCandidates;
@property(retain, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property(nonatomic) int visualStyle; // @synthesize visualStyle=_visualStyle;
@property(nonatomic) id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) unsigned int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) UIKeyboardCandidateGridHeader *gridHeader; // @synthesize gridHeader=_gridHeader;
@property(nonatomic) UIKeyboardCandidateSortControl *sortBar; // @synthesize sortBar=_sortBar;
@property(retain, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(retain, nonatomic) NSArray *sorts; // @synthesize sorts=_sorts;
@property(retain, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
@property(nonatomic) BOOL drawBottomShadow; // @synthesize drawBottomShadow=_drawBottomShadow;
@property(nonatomic) BOOL drawTopShadow; // @synthesize drawTopShadow=_drawTopShadow;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (BOOL)padInlineFloatingViewIsExpanded:(id)arg1;
- (id)indexTitlesForGroupTitles:(id)arg1;
- (void)sortSelectionBarAction:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *scrollViewControllers; // @synthesize scrollViewControllers=_scrollViewControllers;
- (BOOL)candidatesForSortIndexShowAlternativeText:(int)arg1;
- (id)candidateGroupsForSortIndex:(int)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (void)configureKeyboard:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)candidatesDidChange;
- (unsigned int)count;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (BOOL)hasNextPage;
- (BOOL)hasPreviousPage;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPageAtIndex:(unsigned int)arg1;
@property(nonatomic) unsigned int selectedCandidateIndex; // @synthesize selectedCandidateIndex=_selectedCandidateIndex;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showArrowButton:(BOOL)arg1;
- (void)selectCandidate:(id)arg1;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)layout;
- (void)layoutSubviews;
- (void)clearViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

