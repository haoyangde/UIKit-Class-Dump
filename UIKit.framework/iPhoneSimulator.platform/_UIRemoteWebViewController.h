//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@class _UIWebViewController;

__attribute__((visibility("hidden")))
@interface _UIRemoteWebViewController : _UIRemoteViewController
{
    _UIWebViewController *_webViewController;
}

@property(nonatomic) _UIWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;

@end

