//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _UIMappedBitmapImage : UIImage
{
    NSData *_data;
}

+ (void)initialize;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)_initWithOtherImage:(id)arg1;
- (void)_preheatBitmapData;
- (void)dealloc;

@end

