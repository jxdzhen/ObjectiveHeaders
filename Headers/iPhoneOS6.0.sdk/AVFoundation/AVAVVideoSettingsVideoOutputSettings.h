/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVReencodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
@private
	NSDictionary* _adaptedVideoCompressionProperties;
}
@property(readonly, assign, nonatomic) unsigned long videoCodecType;
@property(readonly, assign, nonatomic) NSDictionary* videoCompressionProperties;
@property(readonly, assign, nonatomic) NSDictionary* videoEncoderSpecification;
+(BOOL)_validateVideoCompressionProperties:(id)properties againstSupportedPropertyDictionary:(id)dictionary forCodecType:(id)codecType exceptionReason:(id*)reason;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id*)reason;
+(id)eligibleOutputSettingsDictionaryKeys;
-(id)initWithAVVideoSettingsDictionary:(id)avvideoSettingsDictionary exceptionReason:(id*)reason;
-(id)initWithTrustedAVVideoSettingsDictionary:(id)trustedAVVideoSettingsDictionary;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)reason;
-(void)dealloc;
-(int)height;
-(BOOL)isCodecAvailableOnCurrentSystem;
// declared property getter: -(unsigned long)videoCodecType;
// declared property getter: -(id)videoCompressionProperties;
// declared property getter: -(id)videoEncoderSpecification;
-(int)width;
-(BOOL)willYieldCompressedSamples;
@end

