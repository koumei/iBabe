//
//  IBCalendarViewController.h
//  iBabe
//
//  Created by David Liang on 19/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TKCalendarMonthView.h"
#import <EventKit/EventKit.h>
#import "IBDateHelper.h"
#import "IBEditEventViewController.h"
#import "IBEventDetailsViewController.h"
#import "IBEKCalendarHelper.h"

@interface IBCalendarViewController : UIViewController<TKCalendarMonthViewDelegate,TKCalendarMonthViewDataSource, UITableViewDataSource,UITableViewDelegate, MBProgressHUDDelegate>
{
	TKCalendarMonthView *calendar;	
	UITableView* eventTable;
	NSMutableArray* eventsForCurrentMonth;
	NSMutableArray* eventsForCurrentDate;
	NSDate* selectedDate;
	EKEvent* selectedEvent;
	
}


- (void) toggleCalendar;



@end
