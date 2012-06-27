/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "UIActionSheetDelegate.h"
#import "GKFriendPickerViewControllerDelegate.h"
#import "GKMatchDelegate.h"
#import "GKMultiplayerViewController.h"

@class AVAudioPlayer, GKInvite, GKMatchmakerViewController, GKMatch;
@protocol GKMatchmakerViewControllerDelegate;

@interface GKMatchmakerViewControllerPrivate : GKMultiplayerViewController <UIActionSheetDelegate, GKFriendPickerViewControllerDelegate, GKMatchDelegate> {
@private
	id<GKMatchmakerViewControllerDelegate> _delegateWeak;
	GKInvite* _acceptedInvite;
	BOOL _reachable;
	GKMatch* _match;
	BOOL _sentAccept;
	BOOL _geniusMatching;
	BOOL _loadingExistingPlayers;
	int _automatchActivity;
	AVAudioPlayer* _audioPlayer;
}
@property(retain, nonatomic) GKInvite* acceptedInvite;	// @synthesize=_acceptedInvite
@property(retain, nonatomic) AVAudioPlayer* audioPlayer;	// @synthesize=_audioPlayer
@property(assign, nonatomic) int automatchActivity;	// @synthesize=_automatchActivity
@property(assign, nonatomic) id<GKMatchmakerViewControllerDelegate> delegate;	// @synthesize=_delegateWeak
@property(assign, nonatomic) BOOL geniusMatching;	// @synthesize=_geniusMatching
@property(assign, nonatomic) BOOL loadingExistingPlayers;	// @synthesize=_loadingExistingPlayers
@property(retain, nonatomic) GKMatch* match;	// @synthesize=_match
@property(readonly, assign, nonatomic) GKMatchmakerViewController* matchmakerViewController;	// @dynamic
@property(assign, nonatomic) BOOL reachable;	// @synthesize=_reachable
@property(assign, nonatomic) BOOL sentAccept;	// @synthesize=_sentAccept
-(id)init;
-(id)initWithInvite:(id)invite;
-(id)initWithMatchRequest:(id)matchRequest;
-(void)acceptInvite;
// declared property getter: -(id)acceptedInvite;
-(void)addPlayerIDsIfNeededWithCompletionHandler:(id)completionHandler;
-(void)addPlayersToMatch:(id)match;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
// declared property getter: -(id)audioPlayer;
-(void)authenticatedStatusChanged:(id)changed;
// declared property getter: -(int)automatchActivity;
-(void)cancel;
-(void)cancelAlertWithoutDelegateCallback;
-(void)cancelButtonPressed;
-(void)cancelGeniusMatchmaking;
-(void)cleanupStateForCancelOrError;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)failedToAcceptInviteWithError:(id)error;
-(void)failedToInvitePlayers:(id)invitePlayers;
-(void)findPlayersIfNeeded;
-(void)finishWithError:(id)error;
-(void)finishWithMatch:(id)match;
-(void)finishWithPlayers:(id)players;
// declared property getter: -(BOOL)geniusMatching;
-(BOOL)havePendingParticipants;
-(void)inviteMessagePlayerStatusFromBytes:(const char*)bytes withLength:(unsigned)length;
-(void)invitedPlayer:(id)player responded:(int)responded;
-(void)inviterCancelledNotification:(id)notification;
-(void)loadView;
// declared property getter: -(BOOL)loadingExistingPlayers;
-(void)localPlayerAcceptedGameInvite:(id)invite;
// declared property getter: -(id)match;
-(void)match:(id)match connectionWithPlayerFailed:(id)playerFailed withError:(id)error;
-(void)match:(id)match didFailWithError:(id)error;
-(void)match:(id)match didReceiveData:(id)data fromPlayer:(id)player;
-(void)match:(id)match player:(id)player didChangeState:(int)state;
// declared property getter: -(id)matchmakerViewController;
-(void)matchmakingDidCancel;
-(void)participantCanceled:(id)canceled;
-(void)participantConnected:(id)connected;
-(void)participantDisconnected:(id)disconnected;
-(void)playNow;
-(id)playerInfoForParticipant:(id)participant;
-(void)playersToInvite:(id)invite;
-(void)queryGroupActivity;
// declared property getter: -(BOOL)reachable;
-(void)sendStatusUpdate;
// declared property getter: -(BOOL)sentAccept;
// declared property setter: -(void)setAcceptedInvite:(id)invite;
// declared property setter: -(void)setAudioPlayer:(id)player;
// declared property setter: -(void)setAutomatchActivity:(int)activity;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setGeniusMatching:(BOOL)matching;
-(void)setHosted:(BOOL)hosted;
-(void)setHostedPlayer:(id)player connected:(BOOL)connected;
// declared property setter: -(void)setLoadingExistingPlayers:(BOOL)players;
// declared property setter: -(void)setMatch:(id)match;
// declared property setter: -(void)setReachable:(BOOL)reachable;
// declared property setter: -(void)setSentAccept:(BOOL)accept;
-(void)setupForGeniusMatchmaking;
-(BOOL)shouldFindMorePlayers;
-(void)showAlertForTag:(int)tag;
-(BOOL)showAlertIfPendingInvites;
-(void)startGameNotifyOthers:(BOOL)others;
-(BOOL)supportsNearbyPlayers;
-(void)updateParticipantsUsingStatusInfo:(id)info andLoadedPlayers:(id)players;
-(void)updateUIAndReload:(BOOL)reload;
-(void)updateWaitTime;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
@end
