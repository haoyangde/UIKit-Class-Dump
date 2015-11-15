//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardCandidateList.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList>
{
    struct CGRect m_originalTypedTextRect;
    NSString *m_typedText;
    NSString *m_correction;
    NSArray *m_usageTrackingTypes;
    NSMutableArray *m_typedTextViews;
    UIView *m_correctionView;
    UIView *m_correctionAnimationView;
    UIView *m_typedTextAnimationView;
    UIView *m_correctionShadowView;
    BOOL m_fits;
    BOOL m_mouseDown;
    id m_delegate;
    int m_index;
    int m_promptTextType;
    float m_originalTypedTextRectCorrectionAmount;
}

@property(retain, nonatomic) NSArray *usageTrackingTypes; // @synthesize usageTrackingTypes=m_usageTrackingTypes;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (BOOL)prepareForAnimation:(struct CGRect)arg1;
- (id)activeCandidateList;
- (void)setSelectedItem:(unsigned int)arg1;
- (unsigned int)numberOfShownItems;
- (unsigned int)index;
- (void)_candidateSelected:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)mouseUp:(struct __GSEvent *)arg1;
- (void)mouseDragged:(struct __GSEvent *)arg1;
- (void)mouseDown:(struct __GSEvent *)arg1;
- (void)dismiss;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)correctionShadowView;
- (id)typedTextAnimationView;
- (id)correctionAnimationView;
- (id)correctionView;
- (id)typedTextView;
- (id)typedText;
- (id)correction;
- (struct CGRect)correctionFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(int)arg2 withExtraGap:(float)arg3;
- (struct CGRect)horizontallySquishedCorrectionFrame:(struct CGRect)arg1;
- (float)maximumCandidateWidth;
- (BOOL)isAcceptableTextEffectsFrame:(struct CGRect)arg1 afterScrollBy:(float)arg2;
- (void)addTypedTextRect:(struct CGRect)arg1;
- (void)setCandidateObject:(id)arg1 type:(int)arg2 typedText:(id)arg3 inRect:(struct CGRect)arg4 maxX:(float)arg5;
- (void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(struct CGRect)arg3 maxX:(float)arg4;
- (id)candidateAtIndex:(unsigned int)arg1;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPageAtIndex:(unsigned int)arg1;
- (id)currentCandidate;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showCandidate:(id)arg1;
- (void)layout;
- (void)configureKeyboard:(id)arg1;
- (unsigned int)count;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (void)candidatesDidChange;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (struct CGRect)shadowFrameForFrame:(struct CGRect)arg1;
- (void)removePromptSubviews;
- (void)dealloc;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelWhenKey;
- (id)initWithFrame:(struct CGRect)arg1;

@end

