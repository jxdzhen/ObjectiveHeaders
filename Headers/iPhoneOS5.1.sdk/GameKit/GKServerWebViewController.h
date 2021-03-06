/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "UIAlertViewDelegate.h"
#import "GameKit-Structs.h"
#import "UIWebViewDelegate.h"
#import "GKViewController.h"

@class GKPhotoPicker, UIAlertView, NSString, GKBackgroundView, NSData, UIWebView, NSURLRequest;

@interface GKServerWebViewController : GKViewController <UIWebViewDelegate, UIAlertViewDelegate> {
	GKBackgroundView* _backgroundView;
	UIWebView* _webView;
	NSString* _okCallback;
	NSString* _cancelCallback;
	NSString* _leftCallback;
	NSString* _rightCallback;
	BOOL _addedSheetFrame;
	NSString* _playerID;
	NSString* _authToken;
	NSURLRequest* _previousRequest;
	int _status;
	NSData* _pushToken;
	id _completionHandler;
@private
	UIEdgeInsets _backgroundInsets;
	UIAlertView* _alert;
	GKPhotoPicker* _photoPicker;
	BOOL _dismissOnAuthenticate;
}
@property(assign, nonatomic) BOOL addedSheetFrame;	// @synthesize=_addedSheetFrame
@property(retain, nonatomic) UIAlertView* alert;	// @synthesize=_alert
@property(retain, nonatomic) NSString* authToken;	// @synthesize=_authToken
@property(assign, nonatomic) UIEdgeInsets backgroundInsets;	// @synthesize=_backgroundInsets
@property(retain, nonatomic) GKBackgroundView* backgroundView;	// @synthesize=_backgroundView
@property(retain, nonatomic) NSString* cancelCallback;	// @synthesize=_cancelCallback
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(assign, nonatomic) BOOL dismissOnAuthenticate;	// @synthesize=_dismissOnAuthenticate
@property(retain, nonatomic) NSString* leftCallback;	// @synthesize=_leftCallback
@property(retain, nonatomic) NSString* okCallback;	// @synthesize=_okCallback
@property(retain, nonatomic) GKPhotoPicker* photoPicker;	// @synthesize=_photoPicker
@property(retain, nonatomic) NSString* playerID;	// @synthesize=_playerID
@property(retain, nonatomic) NSURLRequest* previousRequest;	// @synthesize=_previousRequest
@property(retain, nonatomic) NSData* pushToken;	// @synthesize=_pushToken
@property(retain, nonatomic) NSString* rightCallback;	// @synthesize=_rightCallback
@property(assign, nonatomic) int status;	// @synthesize=_status
@property(retain, nonatomic) UIWebView* webView;	// @synthesize=_webView
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
// declared property getter: -(BOOL)addedSheetFrame;
// declared property getter: -(id)alert;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
// declared property getter: -(id)authToken;
-(void)authenticateAndTryURLRequestAgain:(id)again;
// declared property getter: -(UIEdgeInsets)backgroundInsets;
// declared property getter: -(id)backgroundView;
-(void)cancelAlertWithoutDelegateCallback;
// declared property getter: -(id)cancelCallback;
-(void)changePhoto;
// declared property getter: -(id)completionHandler;
-(void)dealloc;
-(id)decodeDashEncodedString:(id)string;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(BOOL)dismissOnAuthenticate;
-(void)finish;
// declared property getter: -(id)leftCallback;
-(void)leftNavButtonPressed;
-(void)loadURL:(id)url;
-(void)loadView;
// declared property getter: -(id)okCallback;
-(void)parseAlertURLString:(id)string;
-(void)parseNavBarURLString:(id)string;
// declared property getter: -(id)photoPicker;
// declared property getter: -(id)playerID;
// declared property getter: -(id)previousRequest;
-(void)processGameKitURLComponents:(id)components;
// declared property getter: -(id)pushToken;
// declared property getter: -(id)rightCallback;
-(void)rightNavButtonPressed;
// declared property setter: -(void)setAddedSheetFrame:(BOOL)frame;
// declared property setter: -(void)setAlert:(id)alert;
// declared property setter: -(void)setAuthToken:(id)token;
// declared property setter: -(void)setBackgroundInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setBackgroundView:(id)view;
// declared property setter: -(void)setCancelCallback:(id)callback;
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property setter: -(void)setDismissOnAuthenticate:(BOOL)authenticate;
-(void)setHeadersForRequest:(id)request;
// declared property setter: -(void)setLeftCallback:(id)callback;
// declared property setter: -(void)setOkCallback:(id)callback;
// declared property setter: -(void)setPhotoPicker:(id)picker;
// declared property setter: -(void)setPlayerID:(id)anId;
// declared property setter: -(void)setPreviousRequest:(id)request;
// declared property setter: -(void)setPushToken:(id)token;
// declared property setter: -(void)setRightCallback:(id)callback;
// declared property setter: -(void)setStatus:(int)status;
// declared property setter: -(void)setWebView:(id)view;
-(void)showMessageForError:(id)error;
// declared property getter: -(int)status;
-(void)uploadContacts;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
// declared property getter: -(id)webView;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webViewDidStartLoad:(id)webView;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

