/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKScoreInternal, NSString, NSDate;

@interface GKScore : XXUnknownSuperclass <NSCoding> {
@private
	GKScoreInternal* _internal;
	BOOL _shouldSetDefaultLeaderboard;
}
@property(retain, nonatomic) NSString* category;	// @dynamic
@property(assign, nonatomic) unsigned long long context;	// @dynamic
@property(readonly, assign, nonatomic) NSDate* date;	// @dynamic
@property(retain, nonatomic) NSString* formattedValue;	// @dynamic
@property(retain, nonatomic) GKScoreInternal* internal;	// @synthesize=_internal
@property(retain, nonatomic) NSString* playerID;	// @dynamic
@property(assign, nonatomic) int rank;	// @dynamic
@property(assign, nonatomic) BOOL shouldSetDefaultLeaderboard;	// @synthesize=_shouldSetDefaultLeaderboard
@property(assign, nonatomic) long long value;	// @dynamic
-(id)init;
-(id)initWithCategory:(id)category;
-(id)initWithCoder:(id)coder;
-(id)initWithInternalRepresentation:(id)internalRepresentation;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)forwardingTargetForSelector:(SEL)selector;
// declared property getter: -(id)internal;
-(void)reportScoreWithCompletionHandler:(id)completionHandler;
-(BOOL)respondsToSelector:(SEL)selector;
// declared property setter: -(void)setInternal:(id)internal;
// declared property setter: -(void)setShouldSetDefaultLeaderboard:(BOOL)setDefaultLeaderboard;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
// declared property getter: -(BOOL)shouldSetDefaultLeaderboard;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end

