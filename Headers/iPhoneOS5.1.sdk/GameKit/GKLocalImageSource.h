/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKImageSource.h"
#import "GameKit-Structs.h"


@interface GKLocalImageSource : GKImageSource {
@private
	CGSize _imageSize;
}
@property(assign, nonatomic) CGSize imageSize;	// @synthesize=_imageSize
// declared property getter: -(CGSize)imageSize;
-(void)loadImageForIdentifier:(id)identifier imageBrush:(id)brush withCompletionHandler:(id)completionHandler;
-(id)renderedImageWithImage:(id)image imageBrush:(id)brush returnContext:(id*)context;
// declared property setter: -(void)setImageSize:(CGSize)size;
@end
