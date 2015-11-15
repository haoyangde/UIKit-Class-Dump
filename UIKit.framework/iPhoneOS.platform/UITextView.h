//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UITextInput.h"
#import "UITextLinkInteraction.h"

@class DOMHTMLElement, NSAttributedString, NSDictionary, NSString, UIColor, UIDelayedAction, UIFont, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, UIWebDocumentView, WebFrame;

@interface UITextView : UIScrollView <UITextLinkInteraction, UITextInput>
{
    WebFrame *m_frame;
    DOMHTMLElement *m_body;
    int m_marginTop;
    UIDelayedAction *m_selectionTimer;
    UIDelayedAction *m_longPressAction;
    BOOL m_editable;
    BOOL m_editing;
    BOOL m_becomesEditableWithGestures;
    BOOL m_reentrancyGuard;
    BOOL m_readyForScroll;
    BOOL m_hasExplicitTextAlignment;
    BOOL m_hasExplicitLineHeight;
    UITextInteractionAssistant *m_interactionAssistant;
    UIWebDocumentView *m_webView;
    UIFont *m_font;
    UIColor *m_textColor;
    int m_textAlignment;
    UIView *m_inputView;
    UIView *m_inputAccessoryView;
    float m_lineHeight;
    BOOL m_skipScrollContainingView;
    BOOL m_allowsEditingTextAttributes;
    BOOL m_usesAttributedText;
    BOOL m_clearsOnInsertion;
}

+ (id)excludedElementsForHTML;
+ (id)_bestInterpretationForDictationResult:(id)arg1;
@property(retain) UIView *inputView; // @synthesize inputView=m_inputView;
- (id)selectionRectsForRange:(id)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (int)selectionGranularity;
- (id)_findWebViewWordBoundaryFromPosition:(id)arg1;
@property(nonatomic) int selectionAffinity;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (id)metadataDictionariesForDictationResults;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (id)_proxyTextInput;
- (void)scrollToMakeCaretVisible:(BOOL)arg1;
- (void)setScrollerIndicatorSubrect:(struct CGRect)arg1;
- (void)setAllowsFourWayRubberBanding:(BOOL)arg1;
- (BOOL)scrollingEnabled;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setAllowsRubberBanding:(BOOL)arg1;
- (struct CGPoint)offset;
- (void)setOffset:(struct CGPoint)arg1;
- (void)displayScrollerIndicators;
- (BOOL)showScrollerIndicators;
- (void)setShowScrollerIndicators:(BOOL)arg1;
- (float)bottomBufferHeight;
- (void)setBottomBufferHeight:(float)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)automaticallySelectedOverlay;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint)arg1;
- (BOOL)isInteractingWithLink;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)cancelInteractionWithLink;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (unsigned int)_allowedLinkTypes;
- (BOOL)mightHaveLinks;
@property(nonatomic) unsigned int dataDetectorTypes;
- (void)resetDataDetectorsResultsWithWebLock;
- (void)startDataDetectorsWithWebLock;
- (void)cancelDataDetectorsWithWebLock;
- (BOOL)shouldStartDataDetectors;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)setLineHeight:(float)arg1;
- (float)lineHeight;
- (id)webView;
- (struct CGRect)visibleTextRect;
- (struct CGRect)visibleRect;
- (void)setMarginTop:(int)arg1;
- (int)marginTop;
@property(retain) UIView *inputAccessoryView;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (BOOL)_requiresKeyboardWhenFirstResponder;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=m_editing;
@property(nonatomic, getter=isEditable) BOOL editable;
@property(nonatomic) struct _NSRange selectedRange;
@property(nonatomic) int textAlignment;
@property(copy, nonatomic) NSString *text;
- (BOOL)hasText;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)_transferTextViewPropertiesFromText:(id)arg1;
- (void)_transferAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
@property(nonatomic) BOOL allowsEditingTextAttributes;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)textInputTraits;
- (id)contentAsHTMLString;
- (void)setContentToHTMLString:(id)arg1;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (struct CGRect)rectForSelection:(struct _NSRange)arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updateForNewSize:(struct CGSize)arg1 withOldSize:(struct CGSize)arg2;
- (void)performBecomeEditableTasks;
- (void)webViewDidChange:(id)arg1;
- (BOOL)shouldScrollEnclosingScrollView;
- (void)scrollRectToVisibleInContainingScrollView;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_define:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)selectAll;
- (id)selectedText;
- (id)interactionAssistant;
- (id)selectionView;
- (void)updateSelection;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGImage *)newSnapshotWithRect:(struct CGRect)arg1;
- (struct CGImage *)createSnapshotWithRect:(struct CGRect)arg1;
@property(copy, nonatomic) NSDictionary *typingAttributes;
- (void)disableClearsOnInsertion;
@property(nonatomic) BOOL clearsOnInsertion;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)ensureSelection;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)_keyboardResponder;
- (void)updateWebViewObjects;
- (void)didMoveToSuperview;
- (void)recalculateStyle;
- (id)styleString;
- (struct CGSize)tileSizeForSize:(struct CGSize)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)keyboardDidShow:(id)arg1;
- (void)delayedUpdateForKeyboardDidShow;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)_dealloc;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2;
- (void)updateContentEditableAttribute:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 webView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_automationValue;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (Class)_printFormatterClass;

// Remaining properties
@property(nonatomic) int autocapitalizationType; // @dynamic autocapitalizationType;
@property(nonatomic) int autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) id <UITextViewDelegate> delegate; // @dynamic delegate;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) int keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) int keyboardType; // @dynamic keyboardType;
@property(nonatomic) int returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property(nonatomic) int spellCheckingType; // @dynamic spellCheckingType;
@property(readonly, nonatomic) UIView *textInputView;

@end

