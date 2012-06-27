/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UITouch, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer {
@private
	NSMutableArray* _endPoints;
	UITouch* candidateEndpoint;
}
@property(retain, nonatomic) UITouch* candidateEndpoint;	// @synthesize
-(id)initWithTarget:(id)target action:(SEL)action;
// declared property getter: -(id)candidateEndpoint;
-(void)dealloc;
-(void)reset;
-(BOOL)segmentsLookLikeAWipe:(id)wipe;
// declared property setter: -(void)setCandidateEndpoint:(id)endpoint;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end
