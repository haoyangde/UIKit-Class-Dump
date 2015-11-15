//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFilePresenter.h"

@class NSDate, NSDocumentDifferenceSize, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSOperationQueue, NSString, NSTimer, NSURL, NSUndoManager;

@interface UIDocument : NSObject <NSFilePresenter>
{
    NSURL *_fileURL;
    NSString *_fileType;
    NSString *_localizedName;
    NSUndoManager *_undoManager;
    NSDate *_fileModificationDate;
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSObject<OS_dispatch_queue> *_openingQueue;
    NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;
    NSOperationQueue *_filePresenterQueue;
    id _differenceDueToRecentChanges;
    id _differenceSincePreservingPreviousVersion;
    id _differenceSinceSaving;
    NSTimer *_autosavingTimer;
    double _lastSaveTime;
    unsigned int _fileContentsPreservationReason;
    double _lastPreservationTime;
    id _versionWithoutRecentChanges;
    NSMutableArray *_versions;
    void *_conflictObserver;
    NSLock *_documentPropertyLock;
    id _alertPresenter;
    struct __docFlags {
        unsigned int inClose:1;
        unsigned int isOpen:1;
        unsigned int inOpen:1;
        unsigned int isAutosavingBecauseOfTimer:1;
        unsigned int versionWithoutRecentChangesIsNotLastOpened:1;
        unsigned int ignoreUndoAndRedoNotifications:1;
        unsigned int editingDisabled:1;
        unsigned int isRegisteredAsFilePresenter:1;
        unsigned int movingFile:1;
        unsigned int savingError:1;
        unsigned int inConflict:1;
    } _docFlags;
}

+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4;
+ (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4;
+ (id)_typeForContentsOfURL:(id)arg1 error:(id *)arg2;
+ (void)initialize;
+ (id)_fileModificationDateForURL:(id)arg1;
@property(readonly, nonatomic) NSDocumentDifferenceSize *differenceSinceSaving; // @synthesize differenceSinceSaving=_differenceSinceSaving;
@property(readonly, nonatomic) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion; // @synthesize differenceSincePreservingPreviousVersion=_differenceSincePreservingPreviousVersion;
@property(readonly, nonatomic) NSDocumentDifferenceSize *differenceDueToRecentChanges; // @synthesize differenceDueToRecentChanges=_differenceDueToRecentChanges;
- (void)disableEditing;
- (void)enableEditing;
- (void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)_updateConflictState;
- (void)presentedItemDidChange;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
@property(readonly) NSOperationQueue *presentedItemOperationQueue;
@property(readonly) NSURL *presentedItemURL;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(int)arg2;
@property(readonly) NSString *localizedName;
- (void)_updateLocalizedName;
- (void)userInteractionNoLongerPermittedForError:(id)arg1;
- (void)finishedHandlingError:(id)arg1 recovered:(BOOL)arg2;
- (void)handleError:(id)arg1 userInteractionPermitted:(BOOL)arg2;
@property(retain) NSUndoManager *undoManager;
- (void)_releaseUndoManager;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_changeWasDone:(id)arg1;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(int)arg2;
- (id)changeCountTokenForSaveOperation:(int)arg1;
- (void)updateChangeCount:(int)arg1;
- (BOOL)hasUnsavedChanges;
- (BOOL)_hasUnsavedChanges;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)savingFileType;
- (void)autosaveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_autosaveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_saveUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_scheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2;
- (void)_rescheduleAutosaving;
- (void)_autosavingCompletedSuccessfully:(BOOL)arg1;
- (double)_autosavingDelay;
- (void)_finishSavingToURL:(id)arg1 forSaveOperation:(int)arg2 changeCount:(id)arg3;
- (void)saveToURL:(id)arg1 forSaveOperation:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)contentsForType:(id)arg1 error:(id *)arg2;
- (void)_coordinateWritingItemAtURL:(id)arg1 error:(id *)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(int)arg2 error:(id *)arg3;
- (BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(int)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(int)arg4 error:(id *)arg5;
- (id)_presentableFileNameForSaveOperation:(int)arg1 url:(id)arg2;
- (BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 error:(id *)arg2;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_unlockFileAccessQueue;
- (void)_lockFileAccessQueueAndPerformBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned int documentState;
- (void)_sendStateChangedNotification;
- (BOOL)_isInConflict;
- (void)_setInConflict:(BOOL)arg1;
- (BOOL)_hasSavingError;
- (void)_setHasSavingError:(BOOL)arg1;
- (BOOL)_isInOpen;
- (void)_setInOpen:(BOOL)arg1;
- (BOOL)_isOpen;
- (void)_setOpen:(BOOL)arg1;
@property(getter=_isEditingDisabled, setter=_setEditingDisabled:) BOOL editingDisabled;
@property(copy) NSDate *fileModificationDate;
@property(readonly) NSString *fileType;
- (void)setFileType:(id)arg1;
@property(readonly) NSURL *fileURL;
- (void)_setFileURL:(id)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_unregisterAsFilePresenterIfNecessary;
- (void)_registerAsFilePresenterIfNecessary;
- (id)description;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;
- (id)init;
- (void)_performBlockSynchronouslyOnMainThread:(CDUnknownBlockType)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 synchronouslyOnQueue:(id)arg2;
- (id)_fileOpeningQueue;

// Remaining properties
@property(readonly) NSURL *primaryPresentedItemURL;

@end

