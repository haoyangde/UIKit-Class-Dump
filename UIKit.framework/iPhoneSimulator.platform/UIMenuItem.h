//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UIMenuItem : NSObject
{
    NSString *_title;
    SEL _action;
    BOOL _dontDismiss;
}

@property(nonatomic) BOOL dontDismiss; // @synthesize dontDismiss=_dontDismiss;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;

@end

