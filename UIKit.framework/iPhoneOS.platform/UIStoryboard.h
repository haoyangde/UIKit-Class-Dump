//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSDictionary, NSMutableDictionary, NSString;

@interface UIStoryboard : NSObject
{
    NSBundle *bundle;
    NSString *storyboardFileName;
    NSDictionary *identifierToNibNameMap;
    NSString *designatedEntryPointIdentifier;
    NSMutableDictionary *identifierToUINibMap;
}

+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *identifierToUINibMap; // @synthesize identifierToUINibMap;
@property(readonly, nonatomic) NSString *designatedEntryPointIdentifier; // @synthesize designatedEntryPointIdentifier;
@property(readonly, nonatomic) NSDictionary *identifierToNibNameMap; // @synthesize identifierToNibNameMap;
@property(readonly, nonatomic) NSString *storyboardFileName; // @synthesize storyboardFileName;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle;
- (id)instantiateInitialViewController;
- (id)instantiateViewControllerWithIdentifier:(id)arg1;
- (id)nibForViewControllerWithIdentifier:(id)arg1;
- (id)nibForStoryboardNibNamed:(id)arg1;
- (id)identifierForStringsFile;
- (BOOL)containsNibNamed:(id)arg1;
@property(readonly) NSString *name;
- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4;
- (void)dealloc;

@end

