//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UITextInteractionAssistant, UITextRangeView, UITextSelection;

__attribute__((visibility("hidden")))
@interface UITextSelectionView : UIView
{
    UITextInteractionAssistant *m_interactionAssistant;
    UITextSelection *m_selection;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UITextRangeView *m_rangeView;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    BOOL m_visible;
    BOOL m_activated;
    BOOL m_wasShowingCommands;
    BOOL m_delayShowingCommands;
    BOOL m_dictationReplacementsMode;
    int m_showingCommandsCounter;
    NSArray *m_replacements;
    BOOL m_deferSelectionCommands;
    struct __CFRunLoopObserver *m_observer;
}

@property(retain, nonatomic) NSArray *replacements; // @synthesize replacements=m_replacements;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant; // @synthesize interactionAssistant=m_interactionAssistant;
- (struct CGRect)clippedTargetRect:(struct CGRect)arg1;
- (id)scrollView;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (void)doneMagnifying;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;
- (void)prepareForMagnification;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (struct CGRect)selectionBoundingBox;
@property(readonly, nonatomic) UITextSelection *selection;
@property(readonly, nonatomic) UITextRangeView *rangeView;
@property(readonly, nonatomic) UIView *caretView; // @synthesize caretView=m_caretView;
- (void)startCaretBlinkIfNeeded;
- (void)touchCaretBlinkTimer;
- (void)clearCaretBlinkTimer;
- (void)caretBlinkTimerFired:(id)arg1;
- (void)showCaret:(int)arg1;
- (void)hideCaret:(int)arg1;
- (void)clearCaret;
- (void)configureForReplacementMode;
- (void)configureForHighlightMode;
- (void)configureForSelectionMode;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) BOOL selectionCommandsShowing;
- (void)hideSelectionCommands;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (void)showReplacementsWithGenerator:(CDUnknownBlockType)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3;
- (void)calculateAndShowReplacements:(CDUnknownBlockType)arg1;
- (void)showSelectionCommands;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (void)cancelDelayedCommandRequests;
- (void)updateSelectionCommands;
- (void)showCommandsWithReplacements:(id)arg1;
- (BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
@property(nonatomic) BOOL caretBlinks; // @synthesize caretBlinks=m_caretBlinks;
@property(nonatomic) BOOL visible; // @synthesize visible=m_visible;
- (void)appearOrFadeIfNecessary;
- (BOOL)shouldBeVisible;
- (void)updateSelectionDots;
- (void)updateSelectionRectsIfNeeded;
- (void)deferredUpdateSelectionCommands;
- (void)deferredUpdateSelectionRects;
- (void)updateSelectionRects;
- (void)selectionChanged;
- (void)installIfNecessary;
- (void)clearRange;
- (void)removeFromSuperview;
- (void)textSelectionViewActivated:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewWillAnimate;
- (void)inputViewDidMove;
- (void)inputViewWillMove;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (BOOL)affectedByScrollerNotification:(id)arg1;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)viewAnimate:(id)arg1;
- (void)windowDidResignOrBecomeKey;
- (void)deactivate;
- (void)activate;
- (void)detach;
- (void)dealloc;
- (void)invalidate;
- (id)initWithInteractionAssistant:(id)arg1;

@end

