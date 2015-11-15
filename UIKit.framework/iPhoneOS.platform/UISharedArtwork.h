//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface UISharedArtwork : NSObject
{
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } _lock;
    NSMutableDictionary *_images;
    id *_files;
    int _preferredScale;
    int _preferredDevice;
}

- (id)nameAtIndex:(unsigned int)arg1;
- (id)imageAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)imageNamed:(id)arg1 device:(int)arg2;
- (id)imageNamed:(id)arg1 idiom:(int)arg2;
- (id)imageNamed:(id)arg1;
- (void)cacheImage:(id)arg1 name:(id)arg2 index:(unsigned int)arg3;
@property(nonatomic) int preferredIdiom;
@property(nonatomic) float preferredScale;
- (void)dealloc;
- (id)initWithBasePath:(id)arg1;
- (id)initWithName:(id)arg1 inBundle:(id)arg2;
- (void)enumerateImageInfoWithBlock:(CDUnknownBlockType)arg1;
- (id)imageNamed:(id)arg1 scale:(int)arg2 device:(int)arg3;

@end

