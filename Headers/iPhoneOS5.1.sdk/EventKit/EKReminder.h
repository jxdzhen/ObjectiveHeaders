/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"

@class NSDate;

@interface EKReminder : EKCalendarItem {
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;
@property(copy, nonatomic) NSDate* completionDate;
@property(readonly, assign, nonatomic) NSDate* dueDate;
+(id)reminderWithEventStore:(id)eventStore;
-(id)initWithPersistentObject:(id)persistentObject;
-(id)_persistentReminder;
-(void)_sendModifiedNote;
-(void)clearParentUUID;
-(BOOL)commit:(id*)commit;
-(int)compareDueDateWithReminder:(id)reminder;
// declared property getter: -(id)completionDate;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)dueDate;
-(id)dueDateComponents;
-(id)externalURI;
// declared property getter: -(BOOL)isCompleted;
-(id)parentUUID;
// declared property setter: -(void)setCompleted:(BOOL)completed;
// declared property setter: -(void)setCompletionDate:(id)date;
-(void)setDueDateComponents:(id)components;
-(void)setStartDateComponents:(id)components;
-(id)startDateComponents;
-(BOOL)validate:(id*)validate;
@end

