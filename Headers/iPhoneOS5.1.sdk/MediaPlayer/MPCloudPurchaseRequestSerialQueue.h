/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface MPCloudPurchaseRequestSerialQueue : XXUnknownSuperclass {
	NSMutableArray* _requestsToRun;
	dispatch_queue_s* _requestsQueue;
	dispatch_queue_s* _serviceQueue;
}
+(id)mainQueue;
-(id)init;
-(void)dealloc;
-(void)dequeueRequests:(id)requests;
-(void)enqueueRequests:(id)requests runBlock:(id)block;
-(void)prioritizeRequests:(id)requests beforeRequest:(id)request;
-(void)serviceOne;
@end

