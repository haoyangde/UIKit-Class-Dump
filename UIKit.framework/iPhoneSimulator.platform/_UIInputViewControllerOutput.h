//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, TIKeyboardOutput;

__attribute__((visibility("hidden")))
@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldDismiss;
    _Bool _shouldAdvanceInputMode;
    TIKeyboardOutput *_keyboardOutput;
    long long _positionOffset;
    NSString *_primaryLanguage;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(nonatomic) _Bool shouldAdvanceInputMode; // @synthesize shouldAdvanceInputMode=_shouldAdvanceInputMode;
@property(nonatomic) _Bool shouldDismiss; // @synthesize shouldDismiss=_shouldDismiss;
@property(nonatomic) long long positionOffset; // @synthesize positionOffset=_positionOffset;
@property(retain, nonatomic) TIKeyboardOutput *keyboardOutput; // @synthesize keyboardOutput=_keyboardOutput;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createKeyboardOutputIfNecessary;
- (void)dealloc;

@end
