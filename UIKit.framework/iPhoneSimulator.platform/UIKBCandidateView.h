//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import "UIKeyboardCandidateList.h"
#import "UIKeyboardCandidateScrollViewControllerDelegate.h"

@class NSArray, NSMutableArray, UIColor, UIImage, UIKeyboardCandidate, UIKeyboardCandidateScrollViewController, UIKeyboardCandidateSortControl, UIView;

__attribute__((visibility("hidden")))
@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateList, UIKeyboardCandidateScrollViewControllerDelegate>
{
    NSArray *m_candidates;
    NSMutableArray *m_buttons;
    id <UIKeyboardCandidateListDelegate> m_delegate;
    UIKeyboardCandidateScrollViewController *m_scrollViewController;
    int m_columns;
    int m_candidatesPerColumn;
    int m_candidatesPerPage;
    int m_current;
    int m_firstShown;
    int m_firstComposition;
    int m_candidateCount;
    struct CGRect m_symbolRect;
    UIColor *m_textColor;
    UIColor *m_highlightColor;
    BOOL m_respondsToSelect;
    BOOL m_respondsToAccept;
    UIView *_clippingView;
    UIView *_topBorder;
    UIImage *m_highlightImage;
    BOOL m_handwritingDictationEnabled_iPhone;
    UIKeyboardCandidate *dictationCandidate;
    UIKeyboardCandidateSortControl *m_scrollViewSortControl;
    UIKeyboardCandidate *m_dictationCandidate;
    unsigned int _selectedSortIndex;
}

@property(nonatomic) unsigned int selectedSortIndex; // @synthesize selectedSortIndex=_selectedSortIndex;
@property(retain, nonatomic) UIKeyboardCandidate *dictationCandidate; // @synthesize dictationCandidate=m_dictationCandidate;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=m_highlightColor;
@property(retain, nonatomic) UIKeyboardCandidateSortControl *scrollViewSortControl; // @synthesize scrollViewSortControl=m_scrollViewSortControl;
@property(retain, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController; // @synthesize scrollViewController=m_scrollViewController;
- (id).cxx_construct;
- (void)updateAppearanceForDictationButton:(id)arg1;
- (void)refreshForDictationAvailablityDidChange;
- (id)indexTitlesForGroupTitles:(id)arg1;
- (id)groupedCandidatesForUnsortedCandidates:(id)arg1;
- (id)groupedCandidatesFromCandidates:(id)arg1 forSortIndex:(unsigned int)arg2;
- (id)sortingMethodTitles;
- (void)sortSelectionBarAction:(id)arg1;
- (void)clearScrollViewController;
- (void)clearButtons;
- (void)updateScrollViewController;
- (void)jumpToCompositions;
- (void)selectCandidate:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)configureKeyboard:(id)arg1;
- (unsigned int)count;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)layout;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)nextCandidatesAction;
- (id)candidateList;
- (void)updateForKeyboard:(id)arg1 key:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;

@end

