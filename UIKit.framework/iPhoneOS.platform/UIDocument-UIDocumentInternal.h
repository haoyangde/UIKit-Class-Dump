//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIDocument.h>

@interface UIDocument (UIDocumentInternal)
+ (id)_fileModificationDateForURL:(id)arg1;
- (void)_performBlockSynchronouslyOnMainThread:(CDUnknownBlockType)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 synchronouslyOnQueue:(id)arg2;
- (id)_fileOpeningQueue;

// Remaining properties
@property(getter=_isEditingDisabled, setter=_setEditingDisabled:) _Bool editingDisabled;
@end
