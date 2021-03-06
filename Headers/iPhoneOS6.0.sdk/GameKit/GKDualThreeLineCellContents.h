/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GKTableViewCellContents.h"

@class UIView, GKMultilineCellContentView;

@interface GKDualThreeLineCellContents : XXUnknownSuperclass <GKTableViewCellContents> {
	UIView* _separatorView;
@private
	GKMultilineCellContentView* _topContents;
	GKMultilineCellContentView* _bottomContents;
}
@property(retain, nonatomic) GKMultilineCellContentView* bottomContents;	// @synthesize=_bottomContents
@property(assign, nonatomic) CGRect confirmationButtonRect;
@property(retain, nonatomic) GKMultilineCellContentView* topContents;	// @synthesize=_topContents
-(id)init;
// declared property getter: -(id)bottomContents;
-(void)dealloc;
-(void)layoutSubviews;
-(float)preferredHeightForOrientation:(int)orientation;
-(void)prepareForReuse;
// declared property setter: -(void)setBottomContents:(id)contents;
-(void)setTheme:(id)theme;
// declared property setter: -(void)setTopContents:(id)contents;
-(id)theme;
// declared property getter: -(id)topContents;
@end

