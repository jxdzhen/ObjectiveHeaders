/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"
#import "UIView.h"

@class UIScreen, NSMutableSet, CALayer, UIColor, NSMutableArray, UIViewController, NSUndoManager;

@interface UIWindow : UIView {
@private
	id _delegate;
	float _windowLevel;
	float _windowSublevel;
	id _layerContext;
	UIView* _lastMouseDownView;
	UIView* _lastMouseEnteredView;
	UIResponder* _firstResponder;
	id _fingerInfo;
	id _touchData;
	int _viewOrientation;
	UIView* _exclusiveTouchView;
	NSUndoManager* _undoManager;
	UIScreen* _screen;
	CALayer* _transformLayer;
	NSMutableArray* _rotationViewControllers;
	UIViewController* _rootViewController;
	UIColor* _savedBackgroundColor;
	NSMutableSet* _subtreeMonitoringViews;
	struct {
		unsigned delegateWillRotate : 1;
		unsigned delegateDidRotate : 1;
		unsigned delegateWillAnimateFirstHalf : 1;
		unsigned delegateDidAnimationFirstHalf : 1;
		unsigned delegateWillAnimateSecondHalf : 1;
		unsigned autorotatesToPortrait : 1;
		unsigned autorotatesToPortraitUpsideDown : 1;
		unsigned autorotatesToLandscapeLeft : 1;
		unsigned autorotatesToLandscapeRight : 1;
		unsigned dontBecomeKeyOnOrderFront : 1;
		unsigned output : 1;
		unsigned inGesture : 1;
		unsigned cancelScroller : 1;
		unsigned bitsPerComponent : 4;
		unsigned autorotates : 1;
		unsigned isRotating : 1;
		unsigned isUsingOnePartRotationAnimation : 1;
		unsigned isHandlingContentRotation : 1;
		unsigned disableAutorotationCount : 4;
		unsigned needsAutorotationWhenReenabled : 1;
		unsigned forceTwoPartRotationAnimation : 1;
		unsigned orderKeyboardInAfterRotating : 1;
		unsigned roundedCorners : 4;
		unsigned resizesToFullScreen : 1;
		unsigned keepContextInBackground : 1;
		unsigned ignoreSetHidden : 1;
		unsigned forceVisibleOnInit : 1;
		unsigned settingFirstResponder : 1;
	} _windowFlags;
	id _windowController;
}
@property(readonly, assign, nonatomic, getter=isKeyWindow) BOOL keyWindow;
@property(retain, nonatomic) UIViewController* rootViewController;	// @synthesize=_rootViewController
@property(retain, nonatomic) UIScreen* screen;
@property(assign, nonatomic) float windowLevel;
+(void)_clearKeyWindowStack;
+(id)_findWithDisplayPoint:(CGPoint)displayPoint;
+(id)_hitTestToPoint:(CGPoint)point pathIndex:(int)index forEvent:(id)event;
+(unsigned)_keyWindowStackSize;
+(void)_noteStatusBarHeightChanged:(float)changed oldHeight:(float)height;
+(void)_popKeyWindow;
+(void)_prepareWindowsForAppResume;
+(void)_prepareWindowsForAppSuspend;
+(void)_pushKeyWindow:(id)window;
+(void)_setKeyWindowStackEnabled:(BOOL)enabled;
+(void)_synchronizeDrawing;
+(unsigned)_synchronizeDrawingAcrossProcesses;
+(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)port;
+(id)allWindowsIncludingInternalWindows:(BOOL)windows onlyVisibleWindows:(BOOL)windows2;
+(CGRect)constrainFrameToScreen:(CGRect)screen;
+(void*)createIOSurfaceWithContextId:(unsigned)contextId frame:(CGRect)frame;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)contextIds count:(unsigned)count frame:(CGRect)frame;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)contextIds count:(unsigned)count frame:(CGRect)frame outTransform:(CGAffineTransform*)transform;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)contextIds count:(unsigned)count frame:(CGRect)frame usePurpleGfx:(BOOL)gfx outTransform:(CGAffineTransform*)transform;
+(void*)createScreenIOSurface;
+(id)keyWindow;
+(Class)layerClass;
+(void)setAllWindowsKeepContextInBackground:(BOOL)background;
-(id)initWithCoder:(id)coder;
-(id)initWithContentRect:(CGRect)contentRect;
-(id)initWithFrame:(CGRect)frame;
-(void)_addRotationViewController:(id)controller;
-(BOOL)_becomeFirstResponderWhenPossible;
-(void)_beginModalSession;
-(BOOL)_clearMouseView;
-(void)_clearPendingKeyboardChanges;
-(id)_clientsForRotation;
-(void)_commonInit;
-(BOOL)_containedInAbsoluteResponderChain;
-(unsigned)_contextId;
-(CGPoint)_convertOffset:(CGPoint)offset fromWindow:(id)window;
-(CGPoint)_convertOffset:(CGPoint)offset toWindow:(id)window;
-(void)_createContext;
-(int)_degreesToRotateFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;
-(void)_destroyContext;
-(BOOL)_disableGroupOpacity;
-(BOOL)_disableViewScaling;
-(void)_endModalSession;
-(id)_exclusiveTouchView;
-(void)_finishedFirstHalfRotation:(id)rotation finished:(id)finished context:(id)context;
-(void)_finishedFullRotation:(id)rotation finished:(id)finished context:(id)context;
-(id)_firstResponder;
-(void)_forceTwoPartRotationAnimation:(BOOL)animation;
-(void)_handleDeviceOrientationChange:(id)change;
-(void)_handleStatusBarOrientationChange:(id)change;
-(BOOL)_hasContext;
-(BOOL)_ignoresHitTest;
-(BOOL)_isAnyWindowRotating;
-(BOOL)_isClassicControllerWindow;
-(BOOL)_isScrollingEnabledForView:(id)view;
-(BOOL)_isSettingFirstResponder;
-(BOOL)_isStatusBarWindow;
-(BOOL)_isWindowServerHostingManaged;
-(void)_orderFrontWithoutMakingKey;
-(void)_positionHeaderView:(id)view andFooterView:(id)view2 outsideContentViewForInterfaceOrientation:(int)interfaceOrientation;
-(void)_registerChargedView:(id)view;
-(void)_registerScrollToTopView:(id)topView;
-(void)_registerSwipeView:(id)view;
-(void)_registerViewForSubtreeMonitoring:(id)subtreeMonitoring;
-(void)_removeRotationViewController:(id)controller;
-(id)_rotationViewControllers;
-(void)_scrollToTopViewsUnderScreenPointIfNecessary:(CGPoint)topViewsUnderScreenPointIfNecessary;
-(void)_sendGesturesForEvent:(id)event;
-(void)_sendTouchesForEvent:(id)event;
-(void)_setCancelScroller:(BOOL)scroller;
-(void)_setExclusiveTouchView:(id)view;
-(void)_setFirstResponder:(id)responder;
-(void)_setHidden:(BOOL)hidden forced:(BOOL)forced;
-(void)_setIsSettingFirstResponder:(BOOL)responder;
-(void)_setLayerHidden:(BOOL)hidden;
-(void)_setMouseDownView:(id)view withEvent:(GSEventRef)event;
-(void)_setMouseEnteredView:(id)view;
-(void)_setRotatableClient:(id)client toOrientation:(int)orientation duration:(double)duration force:(BOOL)force;
-(void)_setRotatableClient:(id)client toOrientation:(int)orientation updateStatusBar:(BOOL)bar duration:(double)duration force:(BOOL)force;
-(void)_setRotatableClient:(id)client toOrientation:(int)orientation updateStatusBar:(BOOL)bar duration:(double)duration force:(BOOL)force isRotating:(BOOL)rotating;
-(void)_setRotatableViewOrientation:(int)orientation duration:(double)duration;
-(void)_setRotatableViewOrientation:(int)orientation duration:(double)duration force:(BOOL)force;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)_slideFooterFromOrientation:(int)orientation toOrientation:(int)orientation2 startSnapshot:(id)snapshot endSnapshot:(id)snapshot4 duration:(double)duration;
-(void)_slideHeaderView:(id)view andFooterView:(id)view2 offScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;
-(id)_subtreeMonitorsForView:(id)view;
-(void)_tagAsSpringboardPresentationWindow;
-(id)_targetForStolenStatusBarTouchesAtPoint:(CGPoint)point withEvent:(id)event excludingWindow:(id)window;
-(id)_touchData;
-(CGPoint)_transformDisplayToWindowCoordinates:(CGPoint)windowCoordinates;
-(void)_unregisterChargedView:(id)view;
-(void)_unregisterScrollToTopView:(id)topView;
-(void)_unregisterSwipeView:(id)view;
-(void)_unregisterViewForSubtreeMonitoring:(id)subtreeMonitoring;
-(void)_updateInterfaceOrientationFromDeviceOrientation;
-(void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)deviceOrientation;
-(void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)deviceOrientationIfRotationEnabled;
-(void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration fenceID:(int)anId animation:(int)animation;
-(void)_updateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;
-(void)_updateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration force:(BOOL)force;
-(void)_updateTransformLayer;
-(void)_updateTransformLayerForClassicPresentation;
-(void)addRootViewControllerViewIfPossible;
-(BOOL)autorotates;
-(void)awakeFromNib;
-(void)becomeKeyWindow;
-(void)beginDisablingInterfaceAutorotation;
-(int)bitsPerComponent;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(id)contentView;
-(CGPoint)convertDeviceToWindow:(CGPoint)window;
-(CGPoint)convertPoint:(CGPoint)point fromWindow:(id)window;
-(CGPoint)convertPoint:(CGPoint)point toWindow:(id)window;
-(CGRect)convertRect:(CGRect)rect fromWindow:(id)window;
-(CGRect)convertRect:(CGRect)rect toWindow:(id)window;
-(CGPoint)convertWindowToDevice:(CGPoint)device;
-(void*)createIOSurface;
-(void*)createIOSurfaceWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)defaultFirstResponder;
-(id)delegate;
-(void)encodeWithCoder:(id)coder;
-(void)endDisablingInterfaceAutorotation;
-(void)endDisablingInterfaceAutorotationAnimated:(BOOL)animated;
-(id)firstResponder;
-(void)handleStatusBarChangeFromHeight:(float)height toHeight:(float)height2;
-(int)interfaceOrientation;
-(BOOL)isInterfaceAutorotationDisabled;
-(BOOL)isInternalWindow;
// declared property getter: -(BOOL)isKeyWindow;
-(BOOL)isRotating;
-(BOOL)isUsingOnePartRotationAnimation;
-(BOOL)keepContextInBackground;
-(float)level;
-(void)makeKey:(id)key;
-(void)makeKeyAndOrderFront:(id)front;
-(void)makeKeyAndVisible;
-(void)makeKeyWindow;
-(id)nextResponder;
-(void)orderFront:(id)front;
-(void)orderOut:(id)anOut;
-(void)redo:(id)redo;
-(void)removeFromSuperview;
-(id)representation;
-(void)resignKeyWindow;
-(BOOL)resizesToFullScreen;
// declared property getter: -(id)rootViewController;
// declared property getter: -(id)screen;
-(void)sendEvent:(id)event;
-(void)setAutorotates:(BOOL)autorotates;
-(void)setAutorotates:(BOOL)autorotates forceUpdateInterfaceOrientation:(BOOL)orientation;
-(void)setBecomeKeyOnOrderFront:(BOOL)front;
-(void)setContentView:(id)view;
-(void)setDelegate:(id)delegate;
-(void)setHidden:(BOOL)hidden;
-(void)setKeepContextInBackground:(BOOL)background;
-(void)setLevel:(float)level;
-(void)setResizesToFullScreen:(BOOL)fullScreen;
// declared property setter: -(void)setRootViewController:(id)controller;
// declared property setter: -(void)setScreen:(id)screen;
// declared property setter: -(void)setWindowLevel:(float)level;
-(void)synchronizeDrawingWithID:(int)anId;
-(void)synchronizeDrawingWithID:(int)anId count:(unsigned)count;
-(void)undo:(id)undo;
-(id)undoManager;
-(CGPoint)warpPoint:(CGPoint)point;
// declared property getter: -(float)windowLevel;
-(int)windowOutput;
@end

@interface UIWindow (UIResponderAdditions)
-(id)_window;
@end

@interface UIWindow (UITextEffectsWindow)
-(void)matchDeviceOrientation;
-(void)setupForOrientation:(int)orientation;
@end

@interface UIWindow (UITextEffectsWindowAdditions)
-(BOOL)_isTextEffectsWindow;
@end

@interface UIWindow (UnitTestingAdditions)
-(void)_matchDeviceBounds;
@end

@interface UIWindow (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

