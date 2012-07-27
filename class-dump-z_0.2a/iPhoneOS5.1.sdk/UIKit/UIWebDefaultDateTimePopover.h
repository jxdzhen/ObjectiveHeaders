/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebRotatingPopover.h"
#import "UIWebFormControl.h"

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover : UIWebRotatingPopover <UIWebFormControl> {
@private
	UIWebDateTimePopoverViewController* _webDateTimeViewController;
}
@property(retain, nonatomic) UIWebDateTimePopoverViewController* _webDateTimeViewController;	// @synthesize
-(id)initWithDOMHTMLInputElement:(id)domhtmlinputElement datePickerMode:(int)mode;
// declared property getter: -(id)_webDateTimeViewController;
-(void)clear:(id)clear;
-(void)controlBeginEditing;
-(id)controlView;
-(void)dealloc;
// declared property setter: -(void)set_webDateTimeViewController:(id)controller;
@end
