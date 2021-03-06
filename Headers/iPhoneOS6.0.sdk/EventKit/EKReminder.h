/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"

@class NSDate, NSDateComponents;

@interface EKReminder : EKCalendarItem {
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;
@property(copy, nonatomic) NSDate* completionDate;
@property(copy, nonatomic) NSDateComponents* dueDateComponents;
@property(assign, nonatomic) int priority;
@property(copy, nonatomic) NSDateComponents* startDateComponents;
+(id)reminderWithEventStore:(id)eventStore;
-(id)initWithPersistentObject:(id)persistentObject;
-(id)_persistentReminder;
-(void)_sendModifiedNote;
-(void)clearParentID;
-(BOOL)commit:(id*)commit;
// declared property getter: -(id)completionDate;
-(void)dealloc;
-(id)description;
-(unsigned)displayOrder;
-(id)dueDate;
// declared property getter: -(id)dueDateComponents;
-(id)externalURI;
// declared property getter: -(BOOL)isCompleted;
-(id)parentID;
// declared property getter: -(int)priority;
-(id)reminderIdentifier;
// declared property setter: -(void)setCompleted:(BOOL)completed;
// declared property setter: -(void)setCompletionDate:(id)date;
-(void)setDisplayOrder:(unsigned)order;
// declared property setter: -(void)setDueDateComponents:(id)components;
// declared property setter: -(void)setPriority:(int)priority;
// declared property setter: -(void)setStartDateComponents:(id)components;
-(void)setTimeZone:(id)zone;
// declared property getter: -(id)startDateComponents;
-(BOOL)validate:(id*)validate;
@end

