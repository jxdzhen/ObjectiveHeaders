/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TwoPartTextLabel, UIColor;
@protocol EKCellShortener;

@interface PreferencesTwoPartValueCell : XXUnknownSuperclass {
	TwoPartTextLabel* _twoPartLabel;
	unsigned _notifiedShort;
	id<EKCellShortener> _shortener;
}
@property(assign, nonatomic) id<EKCellShortener> shortener;	// @synthesize=_shortener
@property(readonly, assign, nonatomic) TwoPartTextLabel* twoPartTextLabel;
@property(readonly, assign, nonatomic) UIColor* valueColor;
-(void)_layoutSubviewsCore;
-(void)checkValueWidths;
-(void)dealloc;
-(void)layoutSubviews;
-(void)layoutText:(id)text andValue:(id)value;
// declared property setter: -(void)setShortener:(id)shortener;
-(void)shorten;
// declared property getter: -(id)shortener;
// declared property getter: -(id)twoPartTextLabel;
// declared property getter: -(id)valueColor;
@end

