/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKDayOccurrenceView, EKCalendarDate;

@interface EKDayViewContentItem : XXUnknownSuperclass {
@private
	unsigned _eventIndex;
	EKDayOccurrenceView* _view;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
}
@property(copy, nonatomic) EKCalendarDate* endDate;	// @synthesize=_endDate
@property(readonly, assign, nonatomic) unsigned eventIndex;	// @synthesize=_eventIndex
@property(copy, nonatomic) EKCalendarDate* startDate;	// @synthesize=_startDate
@property(retain, nonatomic) EKDayOccurrenceView* view;	// @synthesize=_view
-(id)initWithEventIndex:(unsigned)eventIndex;
-(void)dealloc;
// declared property getter: -(id)endDate;
// declared property getter: -(unsigned)eventIndex;
-(BOOL)isEqual:(id)equal;
// declared property setter: -(void)setEndDate:(id)date;
// declared property setter: -(void)setStartDate:(id)date;
// declared property setter: -(void)setView:(id)view;
// declared property getter: -(id)startDate;
// declared property getter: -(id)view;
@end

