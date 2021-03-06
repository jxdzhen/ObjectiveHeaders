/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextTapRecognizer.h"

@class UIView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UISelectionTapRecognizer : UITextTapRecognizer {
@private
	UIView<UITextSelectingContainer>* _textView;
}
@property(assign) UIView<UITextSelectingContainer>* textView;	// @synthesize=_textView
-(BOOL)isCloseToSelection;
-(void)setState:(int)state;
// declared property setter: -(void)setTextView:(id)view;
// declared property getter: -(id)textView;
@end

