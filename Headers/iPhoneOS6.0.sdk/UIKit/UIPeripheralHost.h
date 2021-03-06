/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardSplitTransitionDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, UIView, UIKeyboard, UIPeripheralHostState, UIInputViewPostPinningReloadState, NSMutableSet, UIPanGestureRecognizer, UIInputViewSet, UIPeripheralHostView, UIInputViewTransition, UIKeyboardAutomatic, UIKeyboardRotationState, UIResponder, CADisplayLink;

@interface UIPeripheralHost : XXUnknownSuperclass <UIKeyboardSplitTransitionDelegate, UIGestureRecognizerDelegate> {
	UIPeripheralHostView* _hostView;
	UIKeyboardAutomatic* _automaticKeyboard;
	BOOL _automaticAppearanceEnabled;
	BOOL _automaticAppearanceEnabledInternal;
	BOOL _automaticKeyboardAnimatingIn;
	BOOL _automaticKeyboardAnimatingOut;
	int _automaticKeyboardState;
	int _ignoringReloadInputViews;
	BOOL _suppresingNotifications;
	BOOL _useHideNotificationsWhenNotVisible;
	BOOL _reloadInputViewsForcedIsAllowed;
	int _nextAutomaticOrderInDirection;
	int _targetRotatedOrientation;
	BOOL _isTranslating;
	BOOL _isSplitting;
	BOOL _isUndocked;
	BOOL _splitLockState;
	UIPanGestureRecognizer* _translateRecognizer;
	CADisplayLink* _displayLink;
	double _lastBounceTime;
	double _lastTranslationNotificationTime;
	CGAffineTransform _targetTransform;
	CGAffineTransform _initialTransform;
	CGPoint _velocity;
	NSMutableArray* _dropShadowViews;
	int _shadowStyle;
	BOOL _wasBackgroundSplit;
	CGRect _previousShadowFrameLeft;
	CGRect _previousShadowFrameRight;
	id _bounceCompletionBlock;
	float m_keyboardAttachedViewHeight;
	CGRect _lastKnownIVFrame;
	CGRect _lastKnownIAVFrame;
	NSMutableArray* _animationStyleStack;
	BOOL _hasCustomAnimationProperties;
	double _nextAutomaticOrderInDuration;
	double _lastAutomaticKeyboardDuration;
	int _disableAnimationsCount;
	NSMutableArray* _targetStateStack;
	UIInputViewSet* _inputViewSet;
	UIResponder* _responder;
	NSMutableSet* _pinningResponders;
	BOOL _ignoresPinning;
	UIInputViewPostPinningReloadState* _postPinningReloadState;
	BOOL _animationFencingEnabled;
	BOOL _interfaceAutorotationDisabled;
	UIKeyboardRotationState* _rotationState;
	UIInputViewTransition* _currentTransition;
	UIResponder* _selfHostingTrigger;
	BOOL _didFadeInputViews;
	BOOL _blockedReloadInputViewsForDictation;
	BOOL _animateCornerRefresh;
	BOOL _showCorners;
@private
	UIInputViewSet* _transientInputViewSet;
}
@property(retain, nonatomic) UIInputViewSet* _inputViews;	// @synthesize=_inputViewSet
@property(assign, nonatomic) UIInputViewSet* _transientInputViews;	// @synthesize=_transientInputViewSet
@property(assign, nonatomic) BOOL animationFencingEnabled;	// @dynamic
@property(assign, nonatomic) BOOL animationFencingEnabled;	// @synthesize=_animationFencingEnabled
@property(readonly, assign, nonatomic) BOOL animationsEnabled;
@property(assign, nonatomic) BOOL automaticAppearanceEnabled;	// @synthesize=_automaticAppearanceEnabled
@property(assign, nonatomic) BOOL automaticAppearanceInternalEnabled;
@property(readonly, assign, nonatomic) BOOL automaticAppearanceReallyEnabled;
@property(readonly, assign, nonatomic) UIKeyboardAutomatic* automaticKeyboard;
@property(readonly, assign, nonatomic) UIKeyboard* automaticKeyboard;
@property(assign, nonatomic) int currentState;	// @synthesize=_automaticKeyboardState
@property(retain, nonatomic) UIInputViewTransition* currentTransition;	// @synthesize=_currentTransition
@property(readonly, assign, nonatomic) NSMutableArray* dropShadowViews;
@property(assign, nonatomic) BOOL ignoresPinning;
@property(readonly, assign, nonatomic, getter=_isIgnoringReloadInputViews) BOOL ignoringReloadInputViews;
@property(retain, nonatomic) UIInputViewSet* inputViews;
@property(readonly, assign, nonatomic) BOOL keyClicksEnabled;
@property(retain, nonatomic) UIInputViewPostPinningReloadState* postPinningReloadState;	// @synthesize=_postPinningReloadState
@property(retain, nonatomic) UIResponder* responder;	// @synthesize=_responder
@property(readonly, assign, nonatomic) UIResponder* responder;	// @dynamic
@property(retain, nonatomic) UIKeyboardRotationState* rotationState;	// @synthesize=_rotationState
@property(retain, nonatomic) UIResponder* selfHostingTrigger;	// @synthesize=_selfHostingTrigger
@property(retain, nonatomic) UIPeripheralHostState* targetState;
@property(readonly, assign, nonatomic) UIView* view;
+(void)_releaseSharedInstance;
+(float)gridViewRubberBandValueForValue:(float)value target:(float)target timeInterval:(float)interval velocity:(float*)velocity;
+(CGRect)screenBoundsInAppOrientation;
+(id)sharedInstance;
+(CGRect)visiblePeripheralFrame;
-(id)init;
-(void)_beginDisablingAnimations;
-(void)_beginIgnoringReloadInputViews;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)responder;
-(CGRect)_centerStretchRectForWidth:(float)width;
-(void)_clearPinningResponders;
-(int)_clipCornersOfView:(id)view;
-(id)_currentInputView;
-(void)_endDisablingAnimations;
-(void)_endIgnoringReloadInputViews;
-(BOOL)_hasPostPinningReloadState;
-(BOOL)_hostFirstResponder:(id)responder onBehalfOfResponder:(id)responder2;
-(CGRect)_inputViewRectToAvoid;
// declared property getter: -(id)_inputViews;
-(id)_inputViewsForResponder:(id)responder;
// declared property getter: -(BOOL)_isIgnoringReloadInputViews;
-(BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)responder;
-(BOOL)_isSelfHosting;
-(BOOL)_isSuppressedByManualKeyboard;
-(BOOL)_isTrackingResponder:(id)responder;
-(void)_performRefreshCorners;
-(void)_reloadInputViewsForResponder:(id)responder;
-(void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)responder;
-(void)_setIgnoresPinning:(BOOL)pinning allowImmediateReload:(BOOL)reload;
-(void)_setReloadInputViewsForcedIsAllowed:(BOOL)allowed;
-(BOOL)_somePartOfKeyboardIsOnScreen:(id)keyboardIsOnScreen;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)responder;
// declared property getter: -(id)_transientInputViews;
-(void)_updateBounceAnimation:(id)animation;
-(void)adjustAccessoryViewForSubsumedTransition:(id)subsumedTransition;
-(void)adjustHostViewForTransitionCompletion:(id)transitionCompletion;
-(void)adjustHostViewForTransitionEndFrame:(id)transitionEndFrame;
-(void)adjustHostViewForTransitionStartFrame:(id)transitionStartFrame;
-(CGPoint)adjustedPersistentOffset;
// declared property getter: -(BOOL)animationFencingEnabled;
// declared property getter: -(BOOL)animationsEnabled;
// declared property getter: -(BOOL)automaticAppearanceEnabled;
// declared property getter: -(BOOL)automaticAppearanceInternalEnabled;
// declared property getter: -(BOOL)automaticAppearanceReallyEnabled;
// declared property getter: -(id)automaticKeyboard;
-(void)bounceAnimationDidFinish;
-(UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(int)orientation outDirection:(int)direction forTransition:(int)transition;
-(void)candidateBarWillChangeHeight:(float)candidateBar withDuration:(float)duration;
-(void)completeCurrentTransitionIfNeeded;
-(id)computeTransitionForInputViews:(id)inputViews fromOrientation:(int)orientation toOrientation:(int)orientation3;
-(id)computeTransitionFromInputViews:(id)inputViews toInputViews:(id)inputViews2 animationStyle:(id)style;
-(id)containerWindow;
-(void)createAutomaticKeyboardIfNeeded;
-(void)createHostViewIfNeeded;
// declared property getter: -(int)currentState;
// declared property getter: -(id)currentTransition;
-(void)dealloc;
-(void)disableInterfaceAutorotation:(BOOL)autorotation;
-(CGRect)displayRectForViewSet:(id)viewSet orientation:(int)orientation position:(int)position fromRotation:(BOOL)rotation;
-(void)dock;
// declared property getter: -(id)dropShadowViews;
-(void)executeTransition:(id)transition;
-(void)fadeInInputViews:(BOOL)inputViews;
-(void)fadeInputViewsIfNeeded;
-(void)finishRotation;
-(void)finishRotationOfKeyboard:(id)keyboard;
-(void)finishSplitTransition:(id)transition;
-(void)forceOrderInAutomatic;
-(void)forceOrderInAutomaticAnimated:(BOOL)automaticAnimated;
-(void)forceOrderInAutomaticFromDirection:(int)direction withDuration:(double)duration;
-(void)forceOrderOutAutomatic;
-(void)forceOrderOutAutomaticAnimated:(BOOL)animated;
-(void)forceOrderOutAutomaticToDirection:(int)direction withDuration:(double)duration;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(double)getLastAutomaticDuration;
-(float)getVerticalOverlapForView:(id)view usingKeyboardInfo:(id)info;
-(void)handleTranslateDetectedFinished:(id)finished;
-(BOOL)hasCustomInputView;
-(BOOL)hasDictationKeyboard;
// declared property getter: -(BOOL)ignoresPinning;
-(void)implBoundsHeightChangeDoneForGeometry:(UIPeripheralAnimationGeometry)geometry;
-(void)initializeTranslateGestureRecognizer;
// declared property getter: -(id)inputViews;
-(void)invalidateDisplayLink;
-(BOOL)isHostingActiveImpl;
-(BOOL)isOffScreen;
-(BOOL)isOnScreen;
-(BOOL)isSplitting;
-(BOOL)isTranslating;
-(BOOL)isUndocked;
// declared property getter: -(BOOL)keyClicksEnabled;
-(float)keyboardAttachedViewHeight;
-(void)layoutIfNeeded;
-(void)layoutInputViews;
-(void)layoutInputViewsForGeometry:(UIPeripheralAnimationGeometry)geometry;
-(CGRect)localDisplayRectForViewSet:(id)viewSet;
-(CGRect)localDisplayRectForViewSet:(id)viewSet position:(int)position;
-(void)logGeometryDescriptionFromUserInfo:(id)userInfo;
-(void)manualKeyboardWasOrderedIn:(id)anIn;
-(void)manualKeyboardWasOrderedOut:(id)anOut;
-(void)manualKeyboardWillBeOrderedIn:(id)manualKeyboard;
-(void)manualKeyboardWillBeOrderedOut:(id)manualKeyboard;
-(BOOL)maximize;
-(BOOL)maximizeWithAnimation:(BOOL)animation;
-(BOOL)minimize;
-(float)minimumOffsetForBuffer:(float)buffer;
-(void)moveToPersistentOffset;
-(id)nextAnimationStyle;
-(id)nextAnimationStyle:(BOOL)style;
-(CGPoint)offHostPointForPoint:(CGPoint)point;
-(void)orderInAutomatic;
-(void)orderInAutomaticFromDirection:(int)direction withDuration:(double)duration;
-(void)orderInAutomaticSkippingAnimation;
-(void)orderInWithAnimationStyle:(id)animationStyle;
-(void)orderOutAutomatic;
-(void)orderOutAutomaticSkippingAnimation;
-(void)orderOutAutomaticToDirection:(int)direction withDuration:(double)duration;
-(void)orderOutWithAnimation:(BOOL)animation toDirection:(int)direction duration:(double)duration;
-(void)orderOutWithAnimationStyle:(id)animationStyle;
-(void)peripheralHostDidEnterBackground:(id)peripheralHost;
-(void)peripheralHostWillResume:(id)peripheralHost;
-(void)peripheralViewMinMaximized:(id)maximized finished:(id)finished context:(id)context;
-(BOOL)pinningPreventsInputViews:(id)views;
-(void)popAnimationStyle;
-(void)postDidHideNotification;
-(void)postDidHideNotificationForGeometry:(UIPeripheralAnimationGeometry)post;
-(void)postDidShowNotification;
-(void)postDidShowNotificationForGeometry:(UIPeripheralAnimationGeometry)post;
-(void)postDockingNotification;
-(void)postKeyboardFrameChangeNotification:(id)notification withInfo:(id)info;
// declared property getter: -(id)postPinningReloadState;
-(void)postUndockingNotification;
-(void)postWillHideNotificationForGeometry:(UIPeripheralAnimationGeometry)post duration:(double)duration;
-(void)postWillShowNotificationForGeometry:(UIPeripheralAnimationGeometry)post duration:(double)duration;
-(void)prepareForPinning;
-(void)prepareForRotationOfKeyboard:(id)keyboard toOrientation:(int)orientation;
-(void)prepareForRotationToOrientation:(int)orientation;
-(void)prepareForSplitTransition;
-(void)pushAnimationStyle:(id)style;
-(void)refreshCorners;
-(void)resetCurrentOrderOutAnimationDuration:(double)duration;
-(void)resetNextAutomaticOrderInDirectionAndDuration;
// declared property getter: -(id)responder;
-(id)retain;
-(void)rotateKeyboard:(id)keyboard toOrientation:(int)orientation;
-(void)rotateToOrientation:(int)orientation;
// declared property getter: -(id)rotationState;
-(CGRect)screenRectFromBounds:(CGRect)bounds atCenter:(CGPoint)center applyingSourceHeightDelta:(float)delta;
// declared property getter: -(id)selfHostingTrigger;
-(void)setAccessoryViewVisible:(BOOL)visible delay:(float)delay;
// declared property setter: -(void)setAnimationFencingEnabled:(BOOL)enabled;
// declared property setter: -(void)setAutomaticAppearanceEnabled:(BOOL)enabled;
// declared property setter: -(void)setAutomaticAppearanceInternalEnabled:(BOOL)enabled;
// declared property setter: -(void)setCurrentState:(int)state;
// declared property setter: -(void)setCurrentTransition:(id)transition;
// declared property setter: -(void)setIgnoresPinning:(BOOL)pinning;
// declared property setter: -(void)setInputViews:(id)views;
-(void)setInputViews:(id)views animated:(BOOL)animated;
-(void)setInputViews:(id)views animationStyle:(id)style;
-(void)setKeyboardOnScreenNotifyKey:(BOOL)key;
-(void)setListeningToSpringBoardKeyboardNotifications:(BOOL)springBoardKeyboardNotifications;
-(void)setNextAutomaticOrderInDirection:(int)direction duration:(double)duration;
-(void)setPeripheralFrameForHostBounds:(CGRect)hostBounds;
-(void)setPeripheralToolbarFrameForHostWidth:(float)hostWidth;
// declared property setter: -(void)setPostPinningReloadState:(id)state;
// declared property setter: -(void)setResponder:(id)responder;
// declared property setter: -(void)setRotationState:(id)state;
// declared property setter: -(void)setSelfHostingTrigger:(id)trigger;
// declared property setter: -(void)setTargetState:(id)state;
-(void)setUndockedWithOffset:(CGPoint)offset animated:(BOOL)animated;
// declared property setter: -(void)set_inputViews:(id)views;
// declared property setter: -(void)set_transientInputViews:(id)views;
-(void)setkeyboardAttachedViewHeight:(float)height;
-(BOOL)shouldUseHideNotificationForGeometry:(UIPeripheralAnimationGeometry)geometry;
-(void)showCorners:(BOOL)corners withDuration:(float)duration;
-(void)showDropShadows:(BOOL)shadows;
-(void)showInputViewsIfNeeded;
-(CGSize)sizeOfInputViewForInputViewSet:(id)inputViewSet withInterfaceOrientation:(int)interfaceOrientation;
-(void)syncToExistingAnimations;
// declared property getter: -(id)targetState;
-(CGSize)totalPeripheralSizeForOrientation:(int)orientation;
-(void)transitionDidFinish;
-(void)translateDetected:(id)detected;
-(void)undock;
-(id)undockedInfoFromDefaultInfo:(id)defaultInfo forNotification:(id)notification;
-(void)updateDropShadow;
-(void)updateFrame:(CGRect)frame withDuration:(float)duration splitHeightDelta:(float)delta;
-(void)updateFrame:(CGRect)frame withProgress:(float)progress withDuration:(float)duration;
-(void)updateFrame:(CGRect)frame withProgress:(float)progress withDuration:(float)duration splitHeightDelta:(float)delta;
-(void)updateInputAccessoryViewVisibility:(BOOL)visibility withDuration:(float)duration;
-(BOOL)userInfoContainsActualGeometryChange:(id)change;
-(id)userInfoFromGeometry:(UIPeripheralAnimationGeometry)geometry duration:(double)duration forWill:(BOOL)aFor forShow:(BOOL)show;
// declared property getter: -(id)view;
-(CGRect)visiblePeripheralFrame:(BOOL)frame;
@end

