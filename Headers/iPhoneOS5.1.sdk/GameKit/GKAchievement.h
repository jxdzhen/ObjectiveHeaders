/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKAchievementInternal, NSString, NSDate;

@interface GKAchievement : XXUnknownSuperclass <NSCoding> {
@private
	GKAchievementInternal* _internal;
	BOOL _showsCompletionBanner;
	BOOL _hidden;
}
@property(readonly, assign, nonatomic, getter=isCompleted) BOOL completed;
@property(assign, nonatomic, getter=isHidden) BOOL hidden;	// @synthesize=_hidden
@property(retain, nonatomic) NSString* identifier;	// @dynamic
@property(retain, nonatomic) GKAchievementInternal* internal;	// @synthesize=_internal
@property(retain, nonatomic) NSDate* lastReportedDate;	// @dynamic
@property(assign, nonatomic) double percentComplete;	// @dynamic
@property(assign, nonatomic) BOOL showsCompletionBanner;	// @synthesize=_showsCompletionBanner
+(id)allAchievementsForDescriptions:(id)descriptions achievements:(id)achievements;
+(void)loadAchievementsForGame:(id)game player:(id)player withCompletionHandler:(id)completionHandler;
+(void)loadAchievementsWithCompletionHandler:(id)completionHandler;
+(id)nonHiddenAchievementsForDescriptions:(id)descriptions achievements:(id)achievements;
+(void)resetAchievementsWithCompletionHandler:(id)completionHandler;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithDescription:(id)description;
-(id)initWithIdentifier:(id)identifier;
-(id)initWithInternalRepresentation:(id)internalRepresentation;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)forwardingTargetForSelector:(SEL)selector;
// declared property getter: -(id)internal;
// declared property getter: -(BOOL)isCompleted;
// declared property getter: -(BOOL)isHidden;
-(void)reportAchievementWithCompletionHandler:(id)completionHandler;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setHidden:(BOOL)hidden;
// declared property setter: -(void)setInternal:(id)internal;
// declared property setter: -(void)setShowsCompletionBanner:(BOOL)banner;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
// declared property getter: -(BOOL)showsCompletionBanner;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end

