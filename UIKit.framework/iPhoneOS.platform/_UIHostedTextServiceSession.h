//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UITextServiceSession.h>

__attribute__((visibility("hidden")))
@interface _UIHostedTextServiceSession : _UITextServiceSession
{
    id <_UIHostedTextServiceSessionDelegate> _delegate;
}

+ (id)showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
@property(nonatomic) id <_UIHostedTextServiceSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)remoteSessionDidDismiss;
- (void)dismissTextServiceAnimated:(BOOL)arg1;

@end

