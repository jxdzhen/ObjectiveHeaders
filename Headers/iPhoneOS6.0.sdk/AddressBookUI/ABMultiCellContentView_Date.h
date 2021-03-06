/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABMultiCellContentView.h"
#import "AddressBookUI-Structs.h"
#import "ABDateFieldDelegate.h"

@class ABDateField, NSDate;

@interface ABMultiCellContentView_Date : ABMultiCellContentView <ABDateFieldDelegate> {
@private
	ABDateField* _dateField;
}
@property(readonly, assign, nonatomic) NSDate* date;
+(CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;
// declared property getter: -(id)date;
-(void)dateFieldDateDidChange:(id)dateFieldDate;
-(void)dateFieldDidBeginEditing:(id)dateField;
-(void)dateFieldDidEndEditing:(id)dateField;
-(BOOL)dateFieldShouldBeginEditing:(id)dateField;
-(BOOL)dateFieldShouldClear:(id)dateField;
-(BOOL)dateFieldShouldEndEditing:(id)dateField;
-(BOOL)dateFieldShouldReturn:(id)dateField;
-(void)dealloc;
-(id)hitTestForTouches:(id)touches withEvent:(id)event;
-(void)reload;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)style;
-(void)setUpdateDelegate:(id)delegate;
-(void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;
-(id)viewForFirstResponder;
@end

