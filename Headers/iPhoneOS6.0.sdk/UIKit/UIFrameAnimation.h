/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAnimation.h"
#import "UIKit-Structs.h"


@interface UIFrameAnimation : UIAnimation {
	CGRect _startFrame;
	CGRect _endFrame;
	int _fieldsToChange;
}
-(id)initWithTarget:(id)target;
-(CGRect)endFrame;
-(void)setEndFrame:(CGRect)frame;
-(void)setProgress:(float)progress;
-(void)setSignificantRectFields:(int)fields;
-(void)setStartFrame:(CGRect)frame;
@end
