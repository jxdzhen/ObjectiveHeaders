/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivity.h"

@class MFMailComposeViewController;

@interface UIMailActivity : UIActivity {
@private
	MFMailComposeViewController* _mailComposeViewController;
}
@property(retain, nonatomic) MFMailComposeViewController* mailComposeViewController;	// @synthesize=_mailComposeViewController
-(id)_activityImage;
-(void)_cleanup;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(BOOL)canPerformWithActivityItems:(id)activityItems;
-(void)dealloc;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
// declared property getter: -(id)mailComposeViewController;
-(void)prepareWithActivityItems:(id)activityItems;
// declared property setter: -(void)setMailComposeViewController:(id)controller;
-(void)setSubject:(id)subject;
@end

