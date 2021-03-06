/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITableViewController.h"
#import "UIKit-Structs.h"

@class UIButton, PKJob, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface UIPrintStatusTableViewController : UITableViewController {
@private
	PKJob* _printJob;
	UIButton* _cancelButton;
	NSDateFormatter* _sentFormatter;
}
-(id)initWithJob:(id)job;
-(void)cancelPrinting;
-(void)dealloc;
-(void)loadView;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)popToJobsView;
-(void)setupCancelButton;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)updateCancelButton;
-(void)updateJobInfo;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

