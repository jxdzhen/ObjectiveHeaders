/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol EKEditItemViewControllerDelegate <NSObject>
-(void)editItemViewController:(id)controller didCompleteWithAction:(int)action;
@optional
-(BOOL)editItemViewControllerCommit:(id)commit;
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)pinned;
@end
