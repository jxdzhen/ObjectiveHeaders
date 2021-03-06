/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface CIConstantColorGenerator : CIFilter {
@private
	CIColor* inputColor;
}
@property(copy, nonatomic) CIColor* inputColor;	// @synthesize
+(id)customAttributes;
// declared property getter: -(id)inputColor;
-(id)outputImage;
-(void)setDefaults;
// declared property setter: -(void)setInputColor:(id)color;
@end

