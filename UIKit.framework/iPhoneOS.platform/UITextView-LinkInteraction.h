//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "UITextLinkInteraction.h"

@interface UITextView (LinkInteraction) <UITextLinkInteraction>
+ (id)_sharedHighlightView;
- (void)_finishHandlingInteraction:(id)arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)willInteractWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)cancelInteractionWithLink;
- (void)_resetLinkInteraction;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)_highlightLinkAtPoint:(struct CGPoint)arg1;
- (struct CGRect)_presentationRectForLinkAtRange:(struct _NSRange)arg1;
- (_Bool)isInteractingWithLink;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (_Bool)mightHaveLinks;
- (id)_interactableItemAtPoint:(struct CGPoint)arg1;
@end
