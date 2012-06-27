/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol GKTurnBasedEventHandlerDelegate;

@interface GKTurnBasedEventHandler : XXUnknownSuperclass {
@private
	NSObject<GKTurnBasedEventHandlerDelegate>* _delegateWeak;
	BOOL _didBecomeActive;
}
@property(assign, nonatomic) NSObject<GKTurnBasedEventHandlerDelegate>* delegate;	// @synthesize=_delegateWeak
@property(assign, nonatomic) BOOL didBecomeActive;	// @synthesize=_didBecomeActive
+(id)sharedTurnBasedEventHandler;
-(id)init;
-(void)applicationDidEnterBackgroundNotification:(id)application;
-(void)callTurnEventForMatch:(id)match;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)didBecomeActive;
-(void)lookForEvent;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDidBecomeActive:(BOOL)becomeActive;
@end
