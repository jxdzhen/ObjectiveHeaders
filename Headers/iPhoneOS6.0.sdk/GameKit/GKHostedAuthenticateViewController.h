/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKHostedViewController.h"

@class UIAlertView, NSError;

@interface GKHostedAuthenticateViewController : GKHostedViewController {
@private
	id _completionHandler;
	BOOL _disablesSignIn;
	UIAlertView* _alert;
	NSError* _error;
}
@property(retain, nonatomic) UIAlertView* alert;	// @synthesize=_alert
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(assign, nonatomic) BOOL disablesSignIn;	// @synthesize=_disablesSignIn
@property(retain, nonatomic) NSError* error;	// @synthesize=_error
// declared property getter: -(id)alert;
// declared property getter: -(id)completionHandler;
-(void)dealloc;
// declared property getter: -(BOOL)disablesSignIn;
-(void)dismissViewControllerAnimated:(BOOL)animated completion:(id)completion;
// declared property getter: -(id)error;
-(void)finishAuthenticationWithError:(id)error;
-(id)hostSideViewControllerClassName;
-(void)saveActiveTextField;
-(id)serviceSideViewControllerClassName;
// declared property setter: -(void)setAlert:(id)alert;
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property setter: -(void)setDisablesSignIn:(BOOL)anIn;
// declared property setter: -(void)setError:(id)error;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
@end

