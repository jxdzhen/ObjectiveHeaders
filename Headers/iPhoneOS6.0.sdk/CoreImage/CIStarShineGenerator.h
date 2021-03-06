/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIVector, CIColor;

@interface CIStarShineGenerator : CIFilter {
	CIVector* inputCenter;
	CIColor* inputColor;
	NSNumber* inputRadius;
	NSNumber* inputCrossScale;
	NSNumber* inputCrossAngle;
	NSNumber* inputCrossOpacity;
	NSNumber* inputCrossWidth;
	NSNumber* inputEpsilon;
}
@property(retain) CIVector* inputCenter;	// @synthesize
@property(retain) CIColor* inputColor;	// @synthesize
@property(retain) NSNumber* inputCrossAngle;	// @synthesize
@property(retain) NSNumber* inputCrossOpacity;	// @synthesize
@property(retain) NSNumber* inputCrossScale;	// @synthesize
@property(retain) NSNumber* inputCrossWidth;	// @synthesize
@property(retain) NSNumber* inputEpsilon;	// @synthesize
@property(retain) NSNumber* inputRadius;	// @synthesize
+(id)customAttributes;
-(id)_kernel;
// declared property getter: -(id)inputCenter;
// declared property getter: -(id)inputColor;
// declared property getter: -(id)inputCrossAngle;
// declared property getter: -(id)inputCrossOpacity;
// declared property getter: -(id)inputCrossScale;
// declared property getter: -(id)inputCrossWidth;
// declared property getter: -(id)inputEpsilon;
// declared property getter: -(id)inputRadius;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputCenter:(id)center;
// declared property setter: -(void)setInputColor:(id)color;
// declared property setter: -(void)setInputCrossAngle:(id)angle;
// declared property setter: -(void)setInputCrossOpacity:(id)opacity;
// declared property setter: -(void)setInputCrossScale:(id)scale;
// declared property setter: -(void)setInputCrossWidth:(id)width;
// declared property setter: -(void)setInputEpsilon:(id)epsilon;
// declared property setter: -(void)setInputRadius:(id)radius;
@end

