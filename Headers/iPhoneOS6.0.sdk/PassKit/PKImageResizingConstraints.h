/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "PassKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PKImageResizingConstraints : XXUnknownSuperclass {
@private
	int _constraintType;
	float _fixedDimension;
	CGSize _size;
	float _minAspectRatio;
	float _maxAspectRatio;
	BOOL _respectAspectRatioRange;
	float _outputScale;
	float _outputBorderTrim;
	BOOL _outputMirrored;
}
@property(assign, nonatomic) float outputBorderTrim;	// @synthesize=_outputBorderTrim
@property(assign, nonatomic) BOOL outputMirrored;	// @synthesize=_outputMirrored
@property(assign, nonatomic) float outputScale;	// @synthesize=_outputScale
+(id)constraintsWithFixedHeight:(float)fixedHeight minAspectRatio:(float)ratio maxAspectRatio:(float)ratio3;
+(id)constraintsWithFixedLargeDimenstion:(float)fixedLargeDimenstion minAspectRatio:(float)ratio maxAspectRatio:(float)ratio3;
+(id)constraintsWithFixedSize:(CGSize)fixedSize;
+(id)constraintsWithFixedSmallDimenstion:(float)fixedSmallDimenstion minAspectRatio:(float)ratio maxAspectRatio:(float)ratio3;
+(id)constraintsWithFixedWidth:(float)fixedWidth minAspectRatio:(float)ratio maxAspectRatio:(float)ratio3;
+(id)constraintsWithMaxSize:(CGSize)maxSize;
+(id)constraintsWithMaxSize:(CGSize)maxSize minAspectRatio:(float)ratio maxAspectRatio:(float)ratio3;
+(id)constraintsWithMinSize:(CGSize)minSize;
+(id)constraintsWithMinSize:(CGSize)minSize minAspectRatio:(float)ratio maxAspectRatio:(float)ratio3;
-(id)init;
-(id)_flippedConstraints;
-(BOOL)_getPixelCropRect:(CGRect*)rect pixelOutputSize:(CGSize*)size forImageSize:(CGSize)imageSize scale:(float)scale;
-(BOOL)_reasonable;
-(BOOL)getPixelCropRect:(CGRect*)rect pixelOutputSize:(CGSize*)size forImage:(id)image;
// declared property getter: -(float)outputBorderTrim;
// declared property getter: -(BOOL)outputMirrored;
// declared property getter: -(float)outputScale;
-(id)resizedImage:(id)image;
// declared property setter: -(void)setOutputBorderTrim:(float)trim;
// declared property setter: -(void)setOutputMirrored:(BOOL)mirrored;
// declared property setter: -(void)setOutputScale:(float)scale;
@end

