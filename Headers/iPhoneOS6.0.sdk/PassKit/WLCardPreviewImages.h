/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "WLCardImages.h"

@class WLImage;

@interface WLCardPreviewImages : WLCardImages {
@private
	WLImage* _iconImage;
}
@property(retain, nonatomic) WLImage* iconImage;	// @synthesize=_iconImage
+(id)archiveName;
+(int)imageSet;
-(id)initWithCardURL:(id)cardURL displayProfile:(id)profile;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)iconImage;
-(void)preheatImages;
// declared property setter: -(void)setIconImage:(id)image;
@end
