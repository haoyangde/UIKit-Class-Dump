//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInvocation;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClientRequest : NSObject
{
    NSInvocation *_invocation;
    unsigned long long _errorCount;
}

@property(nonatomic) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
- (id)untargetedInvocationWithInvocation:(id)arg1;
@property(readonly, nonatomic) NSInvocation *invocation;
- (id)initWithInvocation:(id)arg1;
- (void)dealloc;

@end
