/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKit-Structs.h"

@class UIWindow, UIPrintingProgress, UIPrintingMessageView, UINavigationController;

__attribute__((visibility("hidden")))
@interface UIPrintingProgressViewController : UITableViewController {
@private
	UIPrintingProgress* _printingProgress;
	UIPrintingMessageView* _messageView;
	UINavigationController* _navController;
	UIWindow* _window;
	double _rotationDelay;
}
-(id)initWithTitle:(id)title message:(id)message printingProgress:(id)progress;
-(void)cancelProgress;
-(void)cleanupAfterDismiss;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)dismissAnimated:(BOOL)animated;
-(void)doneProgress;
-(double)rotationDelay;
-(void)setDonePrinting:(BOOL)printing;
-(void)setMessage:(id)message;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)show;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)visible;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

