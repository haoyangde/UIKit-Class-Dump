//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmoji : NSObject
{
    NSString *emojiString;
    unsigned short _glyph;
}

+ (id)emojiWithString:(id)arg1;
@property unsigned short glyph; // @synthesize glyph=_glyph;
@property(retain) NSString *emojiString; // @synthesize emojiString;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *key;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

