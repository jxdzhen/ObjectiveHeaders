/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UIAttributedStringView : UIView {
@private
	NSAttributedString* _string;
}
+(Class)layerClass;
-(id)initWithFrame:(CGRect)frame;
-(void)_updateContentsScale:(id)scale;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)setFrame:(CGRect)frame;
-(void)setString:(id)string;
-(void)setTextRotationAngle:(float)angle;
@end
