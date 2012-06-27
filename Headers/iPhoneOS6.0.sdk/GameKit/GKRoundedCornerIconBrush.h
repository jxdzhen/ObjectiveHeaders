/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import "GKImageBrush.h"


@interface GKRoundedCornerIconBrush : GKImageBrush {
@private
	CGSize _outputSize;
	float _shadowBlur;
	float _rotation;
	float _cornerRadiusProportion;
	CGSize _shadowOffset;
}
@property(assign, nonatomic) float cornerRadiusProportion;	// @synthesize=_cornerRadiusProportion
@property(assign, nonatomic) CGSize outputSize;	// @synthesize=_outputSize
@property(assign, nonatomic) float rotation;	// @synthesize=_rotation
@property(assign, nonatomic) float shadowBlur;	// @synthesize=_shadowBlur
@property(assign, nonatomic) CGSize shadowOffset;	// @synthesize=_shadowOffset
-(id)init;
-(id)clippingPathForRect:(CGRect)rect;
// declared property getter: -(float)cornerRadiusProportion;
-(void)drawInRect:(CGRect)rect withContext:(CGContextRef)context input:(id)input;
// declared property getter: -(CGSize)outputSize;
// declared property getter: -(float)rotation;
-(float)scaleForInput:(id)input;
// declared property setter: -(void)setCornerRadiusProportion:(float)proportion;
// declared property setter: -(void)setOutputSize:(CGSize)size;
// declared property setter: -(void)setRotation:(float)rotation;
// declared property setter: -(void)setShadowBlur:(float)blur;
// declared property setter: -(void)setShadowOffset:(CGSize)offset;
// declared property getter: -(float)shadowBlur;
// declared property getter: -(CGSize)shadowOffset;
-(CGSize)sizeForInput:(id)input;
@end
