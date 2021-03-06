/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVCaptureDeviceFormatInternal, NSString, NSArray;

@interface AVCaptureDeviceFormat : XXUnknownSuperclass {
	AVCaptureDeviceFormatInternal* _internal;
}
@property(readonly, assign, nonatomic) opaqueCMFormatDescription* formatDescription;
@property(readonly, assign, nonatomic) NSString* mediaType;
@property(readonly, assign, nonatomic) NSArray* videoSupportedFrameRateRanges;
+(id)_stringForFormatDescription:(opaqueCMFormatDescription*)formatDescription frameRateRanges:(id)ranges;
+(id)deviceFormatWithDictionary:(id)dictionary mediaType:(id)type mediaSubType:(int)type3;
+(void)initialize;
-(id)initWithDictionary:(id)dictionary mediaType:(id)type mediaSubType:(int)type3;
-(void)dealloc;
-(id)description;
// declared property getter: -(opaqueCMFormatDescription*)formatDescription;
-(BOOL)hasBinned;
-(BOOL)isBinned;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)mediaType;
-(int)supportedStabilizationMethod;
-(BOOL)supportsLowLightBoost;
// declared property getter: -(id)videoSupportedFrameRateRanges;
@end

