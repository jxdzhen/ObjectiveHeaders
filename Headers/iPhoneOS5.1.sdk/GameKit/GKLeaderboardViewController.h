/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKLeaderboardViewControllerPrivate, GKLeaderboardCategoryViewController, NSString;
@protocol GKLeaderboardViewControllerDelegate;

@interface GKLeaderboardViewController : XXUnknownSuperclass {
@private
	GKLeaderboardCategoryViewController* _categoryController;
	GKLeaderboardViewControllerPrivate* _privateViewController;
}
@property(retain, nonatomic) NSString* category;
@property(retain, nonatomic) GKLeaderboardCategoryViewController* categoryController;	// @synthesize=_categoryController
@property(assign, nonatomic) id<GKLeaderboardViewControllerDelegate> leaderboardDelegate;
@property(retain, nonatomic) GKLeaderboardViewControllerPrivate* privateViewController;	// @synthesize=_privateViewController
@property(assign, nonatomic) int timeScope;
-(id)init;
-(void)authenticatedStatusChanged;
// declared property getter: -(id)category;
// declared property getter: -(id)categoryController;
-(void)dealloc;
-(id)game;
// declared property getter: -(id)leaderboardDelegate;
// declared property getter: -(id)privateViewController;
// declared property setter: -(void)setCategory:(id)category;
// declared property setter: -(void)setCategoryController:(id)controller;
-(void)setGame:(id)game;
// declared property setter: -(void)setLeaderboardDelegate:(id)delegate;
// declared property setter: -(void)setPrivateViewController:(id)controller;
// declared property setter: -(void)setTimeScope:(int)scope;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(int)timeScope;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end

