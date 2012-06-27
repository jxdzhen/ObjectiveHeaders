/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, UIWindow, UIView, NSMutableArray;

@interface UITouch : XXUnknownSuperclass {
	double _timestamp;
	int _phase;
	int _savedPhase;
	unsigned _tapCount;
	UIWindow* _window;
	UIView* _view;
	UIView* _gestureView;
	UIView* _warpedIntoView;
	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	CGPoint _locationInWindow;
	CGPoint _previousLocationInWindow;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	float _pathMajorRadius;
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _touchFlags;
@private
	BOOL _eaten;
}
@property(assign, nonatomic, getter=_isEaten, setter=_setEaten:) BOOL _eaten;	// @synthesize
@property(assign, nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;	// @synthesize
@property(assign, nonatomic, setter=_setPathIndex:) unsigned char _pathIndex;	// @synthesize
@property(assign, nonatomic, setter=_setPathMajorRadius:) float _pathMajorRadius;	// @synthesize
@property(readonly, assign, nonatomic) NSArray* gestureRecognizers;
@property(retain, nonatomic) UIView* gestureView;
@property(assign, nonatomic) BOOL isTap;
@property(assign, nonatomic) int phase;
@property(readonly, assign, nonatomic) int phase;
@property(assign, nonatomic) BOOL sentTouchesEnded;
@property(readonly, assign, nonatomic) unsigned tapCount;
@property(assign, nonatomic) unsigned tapCount;
@property(assign, nonatomic) double timestamp;
@property(readonly, assign, nonatomic) double timestamp;
@property(retain, nonatomic) UIView* view;
@property(readonly, assign, nonatomic) UIView* view;
@property(retain, nonatomic) UIView* warpedIntoView;
@property(retain, nonatomic) UIWindow* window;
@property(readonly, assign, nonatomic) UIWindow* window;
+(id)_createTouchesWithGSEvent:(GSEventRef)gsevent phase:(int)phase view:(id)view;
-(void)_addGestureRecognizer:(id)recognizer;
-(void)_clearGestureRecognizers;
-(int)_compareIndex:(id)index;
-(float)_distanceFrom:(id)from inView:(id)view;
-(id)_forwardingRecord;
-(id)_gestureRecognizers;
// declared property getter: -(BOOL)_isEaten;
-(BOOL)_isFirstTouchForView;
-(void)_loadStateFromTouch:(id)touch;
-(CGPoint)_locationInWindow:(id)window;
// declared property getter: -(unsigned char)_pathIdentity;
// declared property getter: -(unsigned char)_pathIndex;
// declared property getter: -(float)_pathMajorRadius;
-(id)_phaseDescription;
-(void)_popPhase;
-(CGPoint)_previousLocationInWindow:(id)window;
-(void)_pushPhase:(int)phase;
-(void)_removeGestureRecognizer:(id)recognizer;
// declared property setter: -(void)_setEaten:(BOOL)eaten;
-(void)_setIsFirstTouchForView:(BOOL)view;
-(void)_setLocationInWindow:(CGPoint)window resetPrevious:(BOOL)previous;
// declared property setter: -(void)_setPathIdentity:(unsigned char)identity;
// declared property setter: -(void)_setPathIndex:(unsigned char)index;
// declared property setter: -(void)_setPathMajorRadius:(float)radius;
-(BOOL)_wantsForwardingFromResponder:(id)responder toNextResponder:(id)nextResponder withEvent:(id)event;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)gestureRecognizers;
// declared property getter: -(id)gestureView;
-(int)info;
-(BOOL)isDelayed;
// declared property getter: -(BOOL)isTap;
-(CGPoint)locationInView:(id)view;
// declared property getter: -(int)phase;
-(CGPoint)previousLocationInView:(id)view;
// declared property getter: -(BOOL)sentTouchesEnded;
// declared property setter: -(void)setGestureView:(id)view;
-(void)setIsDelayed:(BOOL)delayed;
// declared property setter: -(void)setIsTap:(BOOL)tap;
// declared property setter: -(void)setPhase:(int)phase;
// declared property setter: -(void)setSentTouchesEnded:(BOOL)ended;
// declared property setter: -(void)setTapCount:(unsigned)count;
// declared property setter: -(void)setTimestamp:(double)timestamp;
// declared property setter: -(void)setView:(id)view;
// declared property setter: -(void)setWarpedIntoView:(id)view;
// declared property setter: -(void)setWindow:(id)window;
// declared property getter: -(unsigned)tapCount;
// declared property getter: -(double)timestamp;
// declared property getter: -(id)view;
// declared property getter: -(id)warpedIntoView;
// declared property getter: -(id)window;
@end
