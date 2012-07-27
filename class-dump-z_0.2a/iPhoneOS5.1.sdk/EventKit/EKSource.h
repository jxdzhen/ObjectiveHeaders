/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSSet, NSString;

@interface EKSource : EKObject {
}
@property(readonly, assign, nonatomic) NSSet* calendars;
@property(readonly, assign, nonatomic) NSString* sourceIdentifier;
@property(readonly, assign, nonatomic) int sourceType;
@property(readonly, assign, nonatomic) NSString* title;
-(id)init;
-(id)_persistentItem;
-(id)allCalendars;
// declared property getter: -(id)calendars;
-(BOOL)commit:(id*)commit;
-(id)constraints;
-(id)defaultAlarmOffset;
-(id)description;
-(id)externalID;
-(BOOL)isEnabled;
-(BOOL)remove:(id*)remove;
-(void)setDefaultAlarmOffset:(id)offset;
// declared property getter: -(id)sourceIdentifier;
// declared property getter: -(int)sourceType;
// declared property getter: -(id)title;
@end
