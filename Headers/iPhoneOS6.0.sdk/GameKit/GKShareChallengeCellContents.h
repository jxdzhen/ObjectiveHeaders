/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKPlayerCellContentView.h"
#import "GameKit-Structs.h"

@class UIImageView;

@interface GKShareChallengeCellContents : GKPlayerCellContentView {
@private
	UIImageView* _separatorView;
}
@property(retain, nonatomic) UIImageView* separatorView;	// @synthesize=_separatorView
+(float)columnWidth;
-(id)initWithNumberOfLines:(unsigned)lines;
-(void)dealloc;
-(void)layoutSubviews;
// declared property getter: -(id)separatorView;
// declared property setter: -(void)setSeparatorView:(id)view;
@end

