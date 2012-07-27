/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKComposeHeaderView.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKit-Structs.h"

@class GKHeaderLabelView, GKUITheme, NSString;

@interface GKComposeHeaderView : XXUnknownSuperclass {
	NSString* _label;
	NSString* _navTitle;
	GKHeaderLabelView* _labelView;
}
@property(retain, nonatomic) GKUITheme* theme;
+(float)defaultHeight;
-(BOOL)_canBecomeFirstResponder;
-(void)dealloc;
-(void)handleTouchesEnded;
-(id)labelView;
-(void)layoutSubviews;
-(float)maxLabelX;
-(void)mouseUp:(GSEventRef)up;
-(id)navTitle;
-(void)setLabel:(id)label;
-(void)setLabelHighlighted:(BOOL)highlighted;
-(void)setNavTitle:(id)title;
// declared property setter: -(void)setTheme:(id)theme;
// declared property getter: -(id)theme;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end

@interface GKComposeHeaderView (SyntheticEvents)
-(id)_automationID;
@end
