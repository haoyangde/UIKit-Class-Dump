//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStatusBarForegroundStyleAttributes.h>

__attribute__((visibility("hidden")))
@interface UIStatusBarWhiteOnBlackEtchForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes
{
}

- (double)bluetoothBatteryExtraLeftPadding;
- (double)airplaneItemExtraMargin;
- (int)legacyStyle;
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg1;
- (double)sizeForMoonMaskVisible:(_Bool)arg1;
- (id)textColorForStyle:(long long)arg1;
- (id)makeTextFontForStyle:(long long)arg1;
- (double)textOffsetForStyle:(long long)arg1;
- (id)expandedNameForImageName:(id)arg1;
- (double)edgePadding;
- (void)drawTextInRect:(struct CGRect)arg1 withColor:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(double)arg2;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg1 capacity:(double)arg2 charging:(_Bool)arg3;

@end
