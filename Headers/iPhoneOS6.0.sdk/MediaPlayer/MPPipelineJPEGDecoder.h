/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface MPPipelineJPEGDecoder : XXUnknownSuperclass {
@private
	StackItem* stackTopBGRA;
	StackItem* stackTop420;
	StackItem* stackTopJPEG;
	NSObject<OS_dispatch_queue>* stackQueueBGRA;
	NSObject<OS_dispatch_queue>* stackQueue420;
	NSObject<OS_dispatch_queue>* stackQueueJPEG;
	CFDictionaryRef acceleratorOptions;
	CFDictionaryRef surfaceBGRAOptions;
	CGSize imageSize;
	unsigned requestedImageCount;
	int currentBGRASurfaceCount;
	unsigned maxJPEGSize;
}
@property(assign) unsigned maxJPEGSize;	// @synthesize
+(IOSurfaceAcceleratorRef)_createAccelerator;
+(IOSurfaceAcceleratorRef)_popSurfaceAccelerator;
+(void)_pushSurfaceAccelerator:(IOSurfaceAcceleratorRef)accelerator;
+(id)_stackQueueTransferSession;
-(id)initWithSize:(CGSize)size cachedCount:(int)count;
-(IOSurfaceRef)_create420Surface;
-(IOSurfaceRef)_createBGRASurface;
-(IOSurfaceRef)_createJPEGSurface;
-(void)_decodeJPEG:(id)jpeg withInputSurface:(IOSurfaceRef)inputSurface toIOSurface:(IOSurfaceRef)iosurface;
-(id)_newImageFrom420Surface:(IOSurfaceRef)a420Surface;
-(IOSurfaceRef)_pop420Surface;
-(IOSurfaceRef)_popBGRASurface;
-(IOSurfaceRef)_popJPEGSurfaceOfSize:(unsigned)size;
-(void)_push420Surface:(IOSurfaceRef)surface;
-(void)_pushBGRASurface:(IOSurfaceRef)surface;
-(void)_pushJPEGSurface:(IOSurfaceRef)surface;
-(void)_receivedMemoryWarning:(id)warning;
-(BOOL)_removeBGRASurface;
-(void)dealloc;
// declared property getter: -(unsigned)maxJPEGSize;
-(id)newImageFrom420Data:(id)a420Data;
-(id)newImageFromJPEGData:(id)jpegdata;
// declared property setter: -(void)setMaxJPEGSize:(unsigned)size;
@end

