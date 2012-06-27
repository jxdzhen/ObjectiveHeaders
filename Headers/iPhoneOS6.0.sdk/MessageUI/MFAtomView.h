/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, NSString, UIView, UIActivityIndicatorView, MFAtomBackgroundView;

@interface MFAtomView : XXUnknownSuperclass {
	UIView* _background;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
	float _scalingFactor;
}
@property(readonly, assign, nonatomic) MFAtomBackgroundView* backgroundView;
@property(assign, nonatomic) BOOL selected;
@property(assign, nonatomic) int style;
@property(copy, nonatomic) NSString* title;
+(float)defaultHeight;
+(float)horizontalPadding;
+(BOOL)showActivityIndicatorForStyle:(int)style;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(float)_leftInset;
-(float)_rightInset;
-(void)_setupActivityIndicator;
// declared property getter: -(id)backgroundView;
-(void)dealloc;
-(void)layoutSubviews;
-(float)preferredWidth;
// declared property getter: -(BOOL)selected;
-(void)setScalingFactor:(float)factor;
// declared property setter: -(void)setSelected:(BOOL)selected;
// declared property setter: -(void)setStyle:(int)style;
// declared property setter: -(void)setTitle:(id)title;
-(void)showBackground:(BOOL)background;
// declared property getter: -(int)style;
// declared property getter: -(id)title;
@end
