/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSObject;
@protocol OS_dispatch_queue, AVCaptureMetadataOutputObjectsDelegate;

@interface AVCaptureMetadataOutputInternal : XXUnknownSuperclass {
	id<AVCaptureMetadataOutputObjectsDelegate> delegate;
	NSObject<OS_dispatch_queue>* clientQueue;
	NSArray* metadataObjectTypes;
}
-(void)dealloc;
@end
