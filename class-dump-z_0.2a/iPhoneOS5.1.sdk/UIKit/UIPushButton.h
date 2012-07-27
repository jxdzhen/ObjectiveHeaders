/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPushButton.h"
#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIFont, NSString;

@interface UIPushButton : UIControl {
	NSString* _title;
	UIFont* _font;
	CGSize _shadowOffset;
	CGSize _imageOffset;
	CGSize _titlePadding;
	CFDictionaryRef _info;
	float _minimumFontPointSize;
	docFlags _pushButtonFlags;
}
+(id)defaultFont;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithImage:(id)image;
-(id)initWithTitle:(id)title;
-(id)initWithTitle:(id)title autosizesToFit:(BOOL)fit;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(XXStruct_UUz0SD)_backgroundSlices:(CGSize)slices;
-(void)_drawBezelPartInRect:(CGRect)rect;
-(void)_drawImageAndTextPartInRect:(CGRect)rect;
-(void)_setAlwaysHandleScrollerMouseEvent:(BOOL)event;
-(BOOL)autosizesToFit;
-(id)backgroundForState:(unsigned)state;
-(id)currentBackground;
-(id)currentImage;
-(id)currentShadowColor;
-(id)currentTitleColor;
-(void)dealloc;
-(void)drawButtonPart:(int)part inRect:(CGRect)rect;
-(BOOL)drawContentsCentered;
-(void)drawImageAtPoint:(CGPoint)point fraction:(float)fraction;
-(void)drawRect:(CGRect)rect;
-(void)drawTitleAtPoint:(CGPoint)point width:(float)width;
-(BOOL)drawsShadow;
-(id)imageForState:(unsigned)state;
-(CGSize)imageOffset;
-(BOOL)isPressed;
-(BOOL)isSelected;
-(float)minimumFontSize;
-(CGPoint)pressFeedbackPosition;
-(void)setAutosizesToFit:(BOOL)fit;
-(void)setBackground:(id)background forState:(unsigned)state;
-(void)setDisabledDimsImage:(BOOL)image;
-(void)setDrawContentsCentered:(BOOL)centered;
-(void)setDrawContentsCenteredHorizontally:(BOOL)horizontally;
-(void)setDrawsImageOnRight:(BOOL)right;
-(void)setDrawsShadow:(BOOL)shadow;
-(void)setEnabled:(BOOL)enabled;
-(void)setFrame:(CGRect)frame;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setImage:(id)image forState:(unsigned)state;
-(void)setImageOffset:(CGSize)offset;
-(void)setMinimumFontSize:(float)size;
-(void)setNeedsDisplay;
-(void)setReverseShadowDirectionWhenHighlighted:(BOOL)highlighted;
-(void)setSelected:(BOOL)selected;
-(void)setShadowColor:(id)color forState:(unsigned)state;
-(void)setShadowOffset:(float)offset;
-(void)setShowPressFeedback:(BOOL)feedback;
-(void)setStretchBackground:(BOOL)background;
-(void)setTitle:(id)title;
-(void)setTitleColor:(id)color forState:(unsigned)state;
-(void)setTitleFont:(id)font;
-(void)setTitlePadding:(CGSize)padding;
-(void)setTracking:(BOOL)tracking;
-(id)shadowColorForState:(unsigned)state;
-(CGSize)shadowOffset;
-(void)sizeToFit;
-(unsigned)state;
-(id)title;
-(id)titleColorForState:(unsigned)state;
-(id)titleFont;
@end

@interface UIPushButton (Static)
-(XXStruct_Xx1ZfA)_currentButtonStateInfo;
-(void)_removePressFeedback:(id)feedback finished:(id)finished;
-(void)_setNeedsDisplay:(XXStruct_Xx1ZfA)display;
@end

@interface UIPushButton (Original)
-(id)image;
-(void)setHighlightedTitleColor:(id)color;
-(void)setImage:(id)image;
-(void)setPressedImage:(id)image;
-(void)setShadowColor:(id)color;
-(void)setTitleColor:(id)color;
-(id)titleColor;
@end

@interface UIPushButton (SyntheticEvents)
-(id)_scriptingInfo;
@end
