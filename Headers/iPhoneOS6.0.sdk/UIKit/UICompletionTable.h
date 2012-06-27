/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UIView.h"

@class UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {
	UICompletionTablePrivate* _private;
}
@property(assign, nonatomic) UIEdgeInsets contentInset;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;
+(id)_cellFont;
+(id)_shadowImage;
-(id)initWithFrame:(CGRect)frame;
-(id)_completionForRow:(int)row;
// declared property getter: -(UIEdgeInsets)contentInset;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(id)dequeueReusableCellWithIdentifier:(id)identifier;
-(void)layoutSubviews;
-(void)reloadData;
// declared property getter: -(UIEdgeInsets)scrollIndicatorInsets;
// declared property setter: -(void)setContentInset:(UIEdgeInsets)inset;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setScrollIndicatorInsets:(UIEdgeInsets)insets;
-(void)setTopStrokeColor:(id)color;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
@end
