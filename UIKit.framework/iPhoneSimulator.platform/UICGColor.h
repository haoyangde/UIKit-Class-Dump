//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIColor.h>

__attribute__((visibility("hidden")))
@interface UICGColor : UIColor
{
    struct CGColor *cachedColor;
}

- (BOOL)isPatternColor;
- (float)alphaComponent;
- (struct CGColor *)CGColor;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)colorSpaceName;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (id)colorWithAlphaComponent:(float)arg1;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor *)arg1;

@end
