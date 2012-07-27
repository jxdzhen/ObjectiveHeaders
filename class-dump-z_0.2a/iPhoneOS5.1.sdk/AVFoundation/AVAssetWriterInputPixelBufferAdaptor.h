/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVAssetWriterInput, NSDictionary, AVAssetWriterInputPixelBufferAdaptorInternal;

@interface AVAssetWriterInputPixelBufferAdaptor : XXUnknownSuperclass {
@private
	AVAssetWriterInputPixelBufferAdaptorInternal* _internal;
}
@property(readonly, assign, nonatomic) AVAssetWriterInput* assetWriterInput;
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;
@property(readonly, assign, nonatomic) NSDictionary* sourcePixelBufferAttributes;
+(id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)assetWriterInput sourcePixelBufferAttributes:(id)attributes;
+(id)keyPathsForValuesAffectingPixelBufferPool;
-(id)init;
-(id)initWithAssetWriterInput:(id)assetWriterInput sourcePixelBufferAttributes:(id)attributes;
-(BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;
// declared property getter: -(id)assetWriterInput;
-(void)dealloc;
-(id)description;
-(void)finalize;
// declared property getter: -(CVPixelBufferPoolRef)pixelBufferPool;
// declared property getter: -(id)sourcePixelBufferAttributes;
@end
