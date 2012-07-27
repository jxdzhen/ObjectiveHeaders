/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIEvent.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface UIEvent : XXUnknownSuperclass {
@private
	double _timestamp;
}
@property(readonly, assign, nonatomic) int subtype;
@property(readonly, assign, nonatomic) double timestamp;
@property(readonly, assign, nonatomic) int type;
-(id)allTouches;
// declared property getter: -(int)subtype;
// declared property getter: -(double)timestamp;
-(id)touchesForGestureRecognizer:(id)gestureRecognizer;
-(id)touchesForView:(id)view;
-(id)touchesForWindow:(id)window;
// declared property getter: -(int)type;
@end

@interface UIEvent (UIEventPrivate)
-(GSEventRef)_gsEvent;
-(id)_initWithEvent:(GSEventRef)event touches:(id)touches;
-(int)_shakeState;
-(id)_touchesForGestureRecognizer:(id)gestureRecognizer;
@end

@interface UIEvent (UIEventInternal)
-(id)_init;
-(void)_setTimestamp:(double)timestamp;
@end
