/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRemoveControlTextButton : UIControl {
@private
	NSString* _label;
}
-(id)initWithRemoveControl:(id)removeControl withTarget:(id)target withLabel:(id)label;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(void)_controlMouseDown:(GSEventRef)down;
-(void)_controlMouseDragged:(GSEventRef)dragged;
-(void)_controlMouseUp:(GSEventRef)up;
-(void)_controlTouchBegan:(id)began withEvent:(id)event;
-(void)_controlTouchEnded:(id)ended withEvent:(id)event;
-(void)_controlTouchMoved:(id)moved withEvent:(id)event;
-(id)_scriptingInfo;
-(float)buttonWidth;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)sizeToFit;
@end

