//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMElement, DOMHTMLInputElement, NSMutableDictionary, NSString;

@interface UIWebFormCompletionController : NSObject
{
    DOMHTMLInputElement *_element;
    NSString *_fieldName;
    DOMElement *_form;
    BOOL _isLoginForm;
    NSMutableDictionary *_items;
}

+ (void)clearAutoFillStateForFrame:(id)arg1;
+ (BOOL)credentialIsNeverSaveMarker:(id)arg1;
+ (void)preFillInWebFrame:(id)arg1;
+ (id)preFillForm:(id)arg1 inFrame:(id)arg2;
+ (void)autoFillInWebView:(id)arg1;
+ (BOOL)_autoFillPasswordInFrame:(id)arg1 autoFiller:(id)arg2;
+ (id)currentOrFirstFrameAndForm:(id *)arg1 inWebView:(id)arg2;
+ (id)firstFormInFrame:(id)arg1;
+ (id)currentFormInFrame:(id)arg1;
+ (id)_matchesForString:(id)arg1 frame:(id)arg2 fieldName:(id)arg3 control:(id)arg4 forPerson:(void *)arg5;
+ (id)_credentialMatchesForString:(id)arg1 frame:(id)arg2;
+ (void)_addPreviousDataMatchesToArray:(id)arg1 forString:(id)arg2 frame:(id)arg3 fieldName:(id)arg4;
+ (void)_addABMatchesToArray:(id)arg1 forString:(id)arg2 atABPointer:(id)arg3 forPerson:(void *)arg4;
+ (id)_abValuesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 forPerson:(void *)arg4;
+ (id)_abValuesForPerson:(void *)arg1 property:(id)arg2 propertyID:(int)arg3 key:(id)arg4 label:(id)arg5;
+ (id)_abMultiValuesForPerson:(void *)arg1 property:(id)arg2 property:(int)arg3 key:(id)arg4 label:(id)arg5;
+ (unsigned int)_indexOfMarkerInMatches:(id)arg1 matchingABMatch:(id)arg2;
+ (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
+ (void)_frame:(id)arg1 sourceFrame:(id)arg2 willSubmitRegularForm:(id)arg3 withValues:(id)arg4;
+ (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
+ (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
+ (void)alertPrompt:(id)arg1 clickedButtonAtIndex:(int)arg2;
+ (BOOL)_frame:(id)arg1 sourceFrame:(id)arg2 willSubmitLoginForm:(id)arg3 withValues:(id)arg4 autoFiller:(id)arg5 submissionListener:(id)arg6;
+ (void)clearPreviousDataDatabase;
+ (void)clearPreviousDataForDomain:(id)arg1;
+ (id)domainsWithPreviousData;
+ (void)_appWillTerminate:(id)arg1;
+ (void)_saveCompletionDBSoon;
+ (void)_saveCompletionDB:(id)arg1;
+ (void)_reapABMarker:(id)arg1 forFrame:(id)arg2 fieldName:(id)arg3;
+ (void)_pruneCompletionDB;
+ (void)_loadCompletionDB;
+ (id)_cryptData:(id)arg1 encode:(BOOL)arg2;
+ (BOOL)shouldSaveUsernamesAndPasswords;
+ (BOOL)passwordCompletionEnabled;
+ (BOOL)addressBookCompletionEnabled;
+ (BOOL)shouldSaveFormData;
+ (BOOL)previousDataCompletionEnabled;
- (void)autoFillWithElementValue;
- (void)acceptedAutoFillWord:(id)arg1;
- (BOOL)hasCurrentSuggestions;
- (CDStruct_421913e2)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (BOOL)currentTextChangeIsProgrammatic;
- (void)abortCompletion;
- (void)sourceFieldTextDidEndEditing;
- (BOOL)showsListForSingleListItem;
- (BOOL)returnPerformsActionWhenShowingList;
- (BOOL)leavingFieldReflectsSelectedListItem;
- (id)reflectedStringForActivatedListItem:(id)arg1;
- (id)reflectedStringForHighlightedListItem:(id)arg1;
- (void)reflectFinalSelectedListItem:(id)arg1;
- (void)reflectSelectedListItem:(id)arg1;
- (BOOL)shouldSuppressAutocomplete;
- (BOOL)doSourceFieldCommandBySelector:(SEL)arg1;
- (void)autoFillCommand:(id)arg1;
- (id)selectedListItem:(id)arg1;
- (void)sourceFieldTextDidChange;
- (id)webFrame;
- (void)dealloc;
- (id)initWithDOMElement:(id)arg1 webFrame:(id)arg2;
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned int *)arg1 withQueryString:(id)arg2;
- (id)unsortedListItemsWithQueryString:(id)arg1;
- (id)queryString;

@end

