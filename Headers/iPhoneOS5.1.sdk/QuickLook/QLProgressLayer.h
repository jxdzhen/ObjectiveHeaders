/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView, UILabel, QLDisplayBundle;

@interface QLProgressLayer : XXUnknownSuperclass {
	QLDisplayBundle* _displayBundle;
	UIActivityIndicatorView* _progressIndicator;
	UILabel* _loadingText;
}
-(id)initWithDisplayBundle:(id)displayBundle;
-(void)dealloc;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
@end
