//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIGroupItem : NSObject
{
    NSString *_title;
    float offset;
    int _rowCountBeforeGroup;
    int _childCount;
    unsigned int _isRadioGroup:1;
    unsigned int _isLabelGroup:1;
    unsigned int _reserved:30;
}

- (int)tableRowForRow:(int)arg1;
- (int)rowCountBeforeGroup;
- (id)title;
- (int)childCount;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 childCount:(int)arg2 rowCountBeforeGroup:(int)arg3 isRadioGroup:(BOOL)arg4;

@end
