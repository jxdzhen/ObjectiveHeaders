/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITouch;

@interface MPSwipeGestureRecognizer : XXUnknownSuperclass {
@private
	CGPoint _startLocation;
	double _startTime;
	UITouch* _trackingTouch;
	int _swipeDirection;
}
@property(readonly, assign, nonatomic) int swipeDirection;	// @synthesize=_swipeDirection
-(id)initWithTarget:(id)target action:(SEL)action;
-(void)dealloc;
-(void)reset;
// declared property getter: -(int)swipeDirection;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end

