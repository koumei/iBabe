//
//  SMDateConvertUtil.h
//  iBabe
//
//  Created by David Liang on 25/06/12.
//  Copyright (c) 2012 Sigmapps Application Development. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMDateConvertUtil : NSObject



typedef enum
{
    
    ddMMyyyy,
    ddMMyyyhhmmssa,
    ddMMMyyyy,
    ddMMMyyyyhhmmssa,
    hhmmssa
}dateFormatStringTypes;


+(NSString*) getMonthFromNSDate: (NSDate*) rawDate;
+(NSString*) getDateFromNSDate: (NSDate*) rawDate;
+(NSString*) getDayFromNSDate: (NSDate*) rawDate;
+(NSString*) getYearFromNSDate: (NSDate*) rawDate;
+(NSString*) getTimeFromNSDate: (NSDate*) rawDate;
+(NSString*) getDDMMYYYYFromNSDate: (NSDate*) rawDate;
+(NSString*) getDDMMYYYYhhmmssaFromNSDate:(NSDate*) rawDate;
+(NSString*) getSystemStdFormatFromNSDate: (NSDate*) rawDate;
+(NSString*) getFormatedDateStringForCalendarControllerFromNSDate: (NSDate*) rawDate;

+(NSString*) getNSDateInfoFromNSDate: (NSDate*)rawDate forInfoTypeOf: (NSInteger) infoType;

+(NSDate *)convertString2Date:(NSString *)strDateTime withFormatterStyle: (dateFormatStringTypes) formatStyle;


+(NSArray*) getBeginAndEndOfADate: (NSDate*) rawDate;




@end
