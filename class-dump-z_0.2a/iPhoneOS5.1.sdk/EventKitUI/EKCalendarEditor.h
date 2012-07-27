/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKCalendarEditItemDelegate.h"
#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, EKEventStore, EKSource, EKCalendar, UITableView;
@protocol EKCalendarEditorDelegate, EKStyleProvider;

@interface EKCalendarEditor : XXUnknownSuperclass <EKCalendarEditItemDelegate> {
	UITableView* _tableView;
	NSArray* _editItems;
	EKCalendar* _calendar;
	EKSource* _source;
	EKEventStore* _eventStore;
	int _allowedEntityTypes;
	id<EKCalendarEditorDelegate> _delegate;
	id<EKStyleProvider> _styleProvider;
}
@property(retain, nonatomic) EKCalendar* calendar;	// @synthesize=_calendar
@property(assign, nonatomic) id<EKCalendarEditorDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) EKEventStore* eventStore;
@property(retain, nonatomic) id<EKStyleProvider> styleProvider;	// @synthesize=_styleProvider
-(id)initWithCalendar:(id)calendar eventStore:(id)store allowedEntityTypes:(int)types;
-(id)initWithSource:(id)source eventStore:(id)store allowedEntityTypes:(int)types;
-(void)_deleteCalendar;
-(void)_deleteClicked:(id)clicked;
-(id)_editItems;
-(void)_presentValidationAlert:(id)alert;
-(BOOL)_shouldShowDeleteButton;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
// declared property getter: -(id)calendar;
-(void)calendarChanged:(id)changed;
-(void)calendarItemStartedEditing:(id)editing;
-(void)cancel:(id)cancel;
-(CGSize)contentSizeForViewInPopover;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)done:(id)done;
// declared property getter: -(id)eventStore;
-(void)loadView;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)scrollViewDidScroll:(id)scrollView;
// declared property setter: -(void)setCalendar:(id)calendar;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setEventStore:(id)store;
// declared property setter: -(void)setStyleProvider:(id)provider;
-(void)setupForCalendar;
// declared property getter: -(id)styleProvider;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidUnload;
@end
