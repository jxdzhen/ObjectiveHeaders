/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKICSPreviewModel, EKEventViewController, EKEventStore, UIViewController;
@protocol EKICSPreviewControllerDelegate;

@interface EKICSPreviewController : XXUnknownSuperclass {
@private
	EKICSPreviewModel* _model;
	BOOL _allowsImport;
	BOOL _allowsEditing;
	BOOL _allowsSubitems;
	EKEventStore* _eventStore;
	EKEventViewController* _currentImport;
	UIViewController* _contentViewController;
	id<EKICSPreviewControllerDelegate> _previewDelegate;
	BOOL _importing;
	BOOL _allowsToDos;
	BOOL _allowsInvalidProperties;
}
@property(assign, nonatomic) BOOL allowsEditing;	// @synthesize=_allowsEditing
@property(assign, nonatomic) BOOL allowsImport;	// @synthesize=_allowsImport
@property(assign, nonatomic) BOOL allowsInvalidProperties;	// @synthesize=_allowsInvalidProperties
@property(assign, nonatomic) BOOL allowsSubitems;	// @synthesize=_allowsSubitems
@property(assign, nonatomic) BOOL allowsToDos;	// @synthesize=_allowsToDos
@property(readonly, assign, nonatomic) BOOL isImporting;
@property(assign, nonatomic) id<EKICSPreviewControllerDelegate> previewDelegate;	// @synthesize=_previewDelegate
@property(readonly, assign, nonatomic) int totalEventCount;
@property(readonly, assign, nonatomic) int unimportedEventCount;
-(id)initWithData:(id)data eventStore:(id)store;
-(id)initWithData:(id)data eventStore:(id)store options:(unsigned)options;
-(id)initWithURL:(id)url eventStore:(id)store;
-(id)initWithURL:(id)url eventStore:(id)store options:(unsigned)options;
-(void)_databaseChanged:(id)changed;
// declared property getter: -(BOOL)allowsEditing;
// declared property getter: -(BOOL)allowsImport;
// declared property getter: -(BOOL)allowsInvalidProperties;
// declared property getter: -(BOOL)allowsSubitems;
// declared property getter: -(BOOL)allowsToDos;
-(void)calendarChooserDidCancel:(id)calendarChooser;
-(void)calendarChooserDidFinish:(id)calendarChooser;
-(void)dealloc;
-(id)detailViewForEvent:(id)event eventInRealStore:(BOOL)realStore;
-(void)eventViewControllerDidRequestAddToCalendar:(id)eventViewController;
-(void)icsPreviewListController:(id)controller didSelectEvent:(id)event;
-(void)icsPreviewListControllerDidRequestImportAll:(id)icsPreviewListController;
-(void)importAllIntoCalendar:(id)calendar;
-(void)importAllRequested:(id)requested;
-(void)importEventFromController:(id)controller intoCalendar:(id)calendar;
// declared property getter: -(BOOL)isImporting;
-(id)popoverContentController;
-(void)presentCalendarChooserForController:(id)controller;
// declared property getter: -(id)previewDelegate;
// declared property setter: -(void)setAllowsEditing:(BOOL)editing;
// declared property setter: -(void)setAllowsImport:(BOOL)import;
// declared property setter: -(void)setAllowsInvalidProperties:(BOOL)properties;
// declared property setter: -(void)setAllowsSubitems:(BOOL)subitems;
// declared property setter: -(void)setAllowsToDos:(BOOL)dos;
// declared property setter: -(void)setPreviewDelegate:(id)delegate;
// declared property getter: -(int)totalEventCount;
// declared property getter: -(int)unimportedEventCount;
-(id)viewController;
@end

