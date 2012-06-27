/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"

@class UIFont, UIColor, NSString;

@protocol CalendarLabelTextMetrics
@property(retain, nonatomic) UIFont* font;
@property(assign, nonatomic) int lineBreakMode;
@property(assign, nonatomic) int numberOfLines;
@property(copy, nonatomic) NSString* text;
@property(assign, nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor* textColor;
// declared property getter: -(id)font;
// declared property getter: -(int)lineBreakMode;
// declared property getter: -(int)numberOfLines;
// declared property setter: -(void)setFont:(id)font;
// declared property setter: -(void)setLineBreakMode:(int)mode;
// declared property setter: -(void)setNumberOfLines:(int)lines;
// declared property setter: -(void)setText:(id)text;
// declared property setter: -(void)setTextAlignment:(int)alignment;
// declared property setter: -(void)setTextColor:(id)color;
// declared property getter: -(id)text;
// declared property getter: -(int)textAlignment;
// declared property getter: -(id)textColor;
-(CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(int)lines;
@end
