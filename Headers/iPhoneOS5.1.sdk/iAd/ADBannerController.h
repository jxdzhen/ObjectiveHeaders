/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iAd-Structs.h"

@class UIView, NSString, ADHostWindowController;
@protocol ADBannerControllerDelegate;

@interface ADBannerController : XXUnknownSuperclass {
@private
	UIView<ADBannerControllerDelegate>* _delegate;
	ADHostWindowController* _hostWindowController;
	BOOL _isOpen;
	BOOL _bannerWillLeaveApplication;
	NSString* _identifier;
	double _createdAt;
	id _remoteSession;
	id _remoteBannerController;
	BOOL _storyboardSupportsPortrait;
	BOOL _storyboardSupportsPortraitUpsideDown;
	BOOL _storyboardSupportsLandscapeLeft;
	BOOL _storyboardSupportsLandscapeRight;
}
@property(readonly, assign, nonatomic) BOOL bannerWillLeaveApplication;	// @synthesize=_bannerWillLeaveApplication
@property(assign) double createdAt;	// @synthesize=_createdAt
@property(assign, nonatomic) UIView<ADBannerControllerDelegate>* delegate;	// @synthesize=_delegate
@property(retain, nonatomic) ADHostWindowController* hostWindowController;	// @synthesize=_hostWindowController
@property(readonly, assign, nonatomic) NSString* identifier;	// @synthesize=_identifier
@property(readonly, assign, nonatomic) BOOL isOpen;	// @synthesize=_isOpen
@property(retain, nonatomic) id remoteBannerController;	// @synthesize=_remoteBannerController
@property(retain, nonatomic) id remoteSession;	// @synthesize=_remoteSession
@property(assign) BOOL storyboardSupportsLandscapeLeft;	// @synthesize=_storyboardSupportsLandscapeLeft
@property(assign) BOOL storyboardSupportsLandscapeRight;	// @synthesize=_storyboardSupportsLandscapeRight
@property(assign) BOOL storyboardSupportsPortrait;	// @synthesize=_storyboardSupportsPortrait
@property(assign) BOOL storyboardSupportsPortraitUpsideDown;	// @synthesize=_storyboardSupportsPortraitUpsideDown
-(id)init;
-(void)_adSheetConnectionLost;
-(void)_close;
-(void)_closeAndReportError:(id)error;
-(void)_remote_bannerControllerDidOpen:(id)_remote_bannerController;
-(void)_remote_bannerViewDidFail:(id)_remote_bannerView;
-(void)_remote_bannerViewDidLoadAd:(id)_remote_bannerView;
-(void)_remote_bannerViewWillLoadAd:(id)_remote_bannerView;
-(void)_remote_interstitialViewExpiredAndWasUnloaded:(id)unloaded;
-(void)_remote_openURL:(id)url;
-(void)_remote_storyboardDidChangeSupportedOrientations:(id)_remote_storyboard;
-(void)_remote_storyboardDidFinishFirstSignificantDraw:(id)_remote_storyboard;
-(void)_remote_storyboardDidTransitionIn:(id)_remote_storyboard;
-(void)_remote_storyboardDidTransitionOut:(id)_remote_storyboard;
-(void)_remote_storyboardWillTransitionIn:(id)_remote_storyboard;
-(void)_remote_storyboardWillTransitionOut:(id)_remote_storyboard;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationDidResignActive:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)bannerFrameDidChange:(CGRect)bannerFrame viewControllerOrientation:(int)orientation;
-(void)bannerKeysDidChange:(id)bannerKeys;
// declared property getter: -(BOOL)bannerWillLeaveApplication;
-(void)cancelBannerViewAction;
-(void)checkForSessionOpenTimeout;
-(void)close;
-(void)controllerKeysDidChange:(id)controllerKeys;
// declared property getter: -(double)createdAt;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(id)description;
-(void)dismissHostWindowController;
-(void)executeBannerViewActionFrom:(CGRect)from withClickLocation:(CGPoint)clickLocation;
-(void)handleBannerVisibilityHeartbeatNotification:(id)notification;
// declared property getter: -(id)hostWindowController;
// declared property getter: -(id)identifier;
-(void)interstitialPresentedInView:(BOOL)view;
-(void)interstitialTouchedDismissAreaWithControlEvent:(unsigned)controlEvent;
-(void)interstitialWasRemovedFromSuperview:(id)superview;
// declared property getter: -(BOOL)isOpen;
-(id)keysDidChangeMessageDictionary:(id)keys;
-(void)loadDebuggerFromPath:(id)path portName:(id)name;
-(void)loadLocalAd:(id)ad;
-(void)open;
-(void)refuseBannerViewAction;
// declared property getter: -(id)remoteBannerController;
// declared property getter: -(id)remoteSession;
-(void)setAuthenticationUserName:(id)name;
// declared property setter: -(void)setCreatedAt:(double)at;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setHostWindowController:(id)controller;
// declared property setter: -(void)setRemoteBannerController:(id)controller;
// declared property setter: -(void)setRemoteSession:(id)session;
// declared property setter: -(void)setStoryboardSupportsLandscapeLeft:(BOOL)left;
// declared property setter: -(void)setStoryboardSupportsLandscapeRight:(BOOL)right;
// declared property setter: -(void)setStoryboardSupportsPortrait:(BOOL)portrait;
// declared property setter: -(void)setStoryboardSupportsPortraitUpsideDown:(BOOL)down;
// declared property getter: -(BOOL)storyboardSupportsLandscapeLeft;
// declared property getter: -(BOOL)storyboardSupportsLandscapeRight;
// declared property getter: -(BOOL)storyboardSupportsPortrait;
// declared property getter: -(BOOL)storyboardSupportsPortraitUpsideDown;
-(void)unloadAndClose;
-(void)updateSpecification;
@end

