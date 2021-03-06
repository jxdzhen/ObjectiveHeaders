/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "UIView.h"

@class UIImageView, NSObject, UITextField, UILabel;
@protocol UIDocumentPasswordViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {
@private
	UIImageView* _iconView;
	UITextField* _passwordTextField;
	UILabel* _label;
	UILabel* _errorLabel;
	NSObject<UIDocumentPasswordViewDelegate>* passwordDelegate;
}
@property(assign, nonatomic) NSObject<UIDocumentPasswordViewDelegate>* passwordDelegate;	// @synthesize
@property(readonly, assign, nonatomic) UITextField* passwordField;	// @synthesize=_passwordTextField
-(id)initWithDocumentName:(id)documentName;
-(CGRect)_iconRectForWidth:(float)width;
-(void)_passwordEntered:(id)entered;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(void)layoutSubviews;
// declared property getter: -(id)passwordDelegate;
// declared property getter: -(id)passwordField;
// declared property setter: -(void)setPasswordDelegate:(id)delegate;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
@end

