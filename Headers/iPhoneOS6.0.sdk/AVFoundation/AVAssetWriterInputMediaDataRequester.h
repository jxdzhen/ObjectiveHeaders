/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, AVAssetWriterInputWritingHelper;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputMediaDataRequester : XXUnknownSuperclass {
@private
	AVAssetWriterInputWritingHelper* _writingHelper;
	NSObject<OS_dispatch_queue>* _requestQueue;
	id _requestBlock;
}
@property(readonly, assign, nonatomic) id requestBlock;	// @synthesize=_requestBlock
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* requestQueue;	// @synthesize=_requestQueue
-(id)init;
-(id)initWithAssetWriterInputWritingHelper:(id)assetWriterInputWritingHelper requestQueue:(id)queue requestBlock:(id)block;
-(void)_requestMediaDataIfReady;
-(void)dealloc;
-(void)finalize;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
// declared property getter: -(id)requestBlock;
// declared property getter: -(id)requestQueue;
-(void)startRequestingMediaData;
@end

