//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIDatePickerMode.h>

@class NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateAndTime : _UIDatePickerMode
{
    BOOL _weekdayLast;
    float _wmdWeekMonthDayWidth;
    float _wmdHourWidth;
    float _wmdMinuteWidth;
    float _wmdAMPMWidth;
    float _wmdWeekdayWidth;
    NSString *_weekdayFormat;
    NSString *_monthDayFormat;
    NSString *_hourFormat;
    NSString *_minuteFormat;
    NSDateFormatter *_relativeFormatter;
    NSDateFormatter *_weekdayFormatter;
}

+ (unsigned int)extractableCalendarUnits;
+ (int)datePickerMode;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (void)updateEnabledStateOfViewForRow:(int)arg1 inComponent:(int)arg2;
- (id)viewForRow:(int)arg1 inComponent:(int)arg2 reusingView:(id)arg3;
- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (BOOL)_shouldEnableWeekMonthDayForRow:(int)arg1;
- (id)_dateForWeekMonthDayRow:(int)arg1;
- (int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4;
- (id)dateForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (id)titleForRow:(int)arg1 inComponent:(int)arg2;
- (BOOL)isWeekdayLast;
- (float)weekdayWidth;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (float)componentWidthForDateTimeCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (id)baseDateComponents;
- (void)_takeBaseDateComponentsFromDate:(id)arg1;
- (void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg1;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 usingSelectionBarValue:(BOOL)arg2;
- (void)loadDate:(id)arg1 animated:(BOOL)arg2;
- (unsigned int *)elements;
- (int)displayedCalendarUnits;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (id)localizedFormatString;
- (id)weekdayFormatter;
- (id)relativeFormatter;
- (void)noteCalendarChanged;
- (void)resetComponentWidths;
- (void)_shouldReset:(id)arg1;
- (void)dealloc;

@end

