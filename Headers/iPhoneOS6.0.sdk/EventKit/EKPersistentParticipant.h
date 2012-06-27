/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKPersistentObject.h"
#import "EventKit-Structs.h"

@class NSURL, NSString;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString* UUID;
@property(copy, nonatomic) NSURL* address;
@property(copy, nonatomic) NSString* emailAddress;
@property(copy, nonatomic) NSString* name;
+(id)defaultPropertiesToLoad;
-(id)init;
// declared property getter: -(id)UUID;
// declared property getter: -(id)address;
-(id)copyWithZone:(NSZone*)zone;
// declared property getter: -(id)emailAddress;
-(unsigned)hash;
// declared property getter: -(id)name;
-(id)owner;
// declared property setter: -(void)setAddress:(id)address;
// declared property setter: -(void)setEmailAddress:(id)address;
// declared property setter: -(void)setName:(id)name;
@end
