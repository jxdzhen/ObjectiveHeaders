/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFComposeHeaderView.h"
#import "MessageUI-Structs.h"
#import "UITextFieldDelegate.h"

@class UITextField;

@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate> {
	UITextField* _textField;
	unsigned _delegateRespondsToTextChange : 1;
}
@property(readonly, assign, nonatomic) UITextField* textField;	// @synthesize=_textField
-(id)initWithFrame:(CGRect)frame;
-(BOOL)_canBecomeFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)dealloc;
-(BOOL)endEditing:(BOOL)editing;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(void)layoutSubviews;
-(void)setDelegate:(id)delegate;
-(void)setText:(id)text;
-(id)text;
-(void)textChanged:(id)changed;
// declared property getter: -(id)textField;
-(void)textFieldDidBecomeFirstResponder:(id)textField;
-(void)textFieldDidResignFirstResponder:(id)textField;
@end

