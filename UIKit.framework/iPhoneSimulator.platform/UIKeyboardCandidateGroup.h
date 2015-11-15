//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOrderedSet, NSString;

@interface UIKeyboardCandidateGroup : NSObject
{
    NSString *_title;
    NSOrderedSet *_candidates;
    NSArray *_nonExtensionCandidates;
}

@property(copy) NSOrderedSet *candidates; // @synthesize candidates=_candidates;
@property(copy) NSString *title; // @synthesize title=_title;
@property(retain) NSArray *nonExtensionCandidates; // @synthesize nonExtensionCandidates=_nonExtensionCandidates;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)addCandidate:(id)arg1;
- (BOOL)hasAlternativeText;
- (id)mutableCandidates;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 candidates:(id)arg2;

@end

