/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKBackgroundView.h"
#import "GameKit-Structs.h"

@class UIImage, NSArray;

@interface GKImageBackgroundView : GKBackgroundView {
@private
	NSArray* _backgroundTiles;
	UIImage* _backgroundImage;
}
@property(retain, nonatomic) UIImage* backgroundImage;	// @synthesize=_backgroundImage
@property(retain, nonatomic) NSArray* backgroundTiles;	// @synthesize=_backgroundTiles
// declared property getter: -(id)backgroundImage;
-(id)backgroundImageForCurrentWidth;
// declared property getter: -(id)backgroundTiles;
-(void)dealloc;
-(void)layoutSubviews;
// declared property setter: -(void)setBackgroundImage:(id)image;
// declared property setter: -(void)setBackgroundTiles:(id)tiles;
@end

