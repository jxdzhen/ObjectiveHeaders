/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>

@class NSMutableOrderedSet, NSMutableArray, NSMutableSet, NSMutableDictionary, NSError, NSString;
@protocol OS_xpc_object, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject {
@private
	NSObject<OS_xpc_object>* _client;
	NSString* _claimID;
	NSString* _purposeIDOrNil;
	BOOL _cameFromSuperarbiter;
	unsigned _blockageCount;
	BOOL _didWait;
	BOOL _isRevoked;
	unsigned _claimerBlockageCount;
	NSError* _claimerError;
	NSMutableOrderedSet* _pendingClaims;
	NSMutableSet* _blockingClaims;
	NSMutableSet* _blockingReactorIDs;
	id _providerCancellationProcedure;
	NSMutableDictionary* _reacquisitionProceduresByPresenterID;
	NSMutableArray* _revocationProcedures;
	id _claimerOrNil;
	NSObject<OS_dispatch_semaphore>* _claimerWaiterOrNull;
	BOOL _didMakePresentersRelinquishToWriter;
	BOOL _revokingIsInexorable;
}
+(BOOL)canReadingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;
+(BOOL)canWritingItemAtLocation:(id)location options:(unsigned)options safelyOverlapWritingItemAtLocation:(id)location3 options:(unsigned)options4;
-(id)initWithClient:(id)client claimID:(id)anId purposeID:(id)anId3;
-(id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;
-(void)addPendingClaim:(id)claim;
-(void)block;
-(void)blockClaimer;
-(BOOL)cameFromSuperarbiter;
-(void)cancelled;
-(id)claimID;
-(id)claimerError;
-(BOOL)claimerInvokingIsBlockedByReactorWithID:(id)anId;
-(id)client;
-(void)dealloc;
-(id)description;
-(id)descriptionWithIndenting:(id)indenting;
-(void)devalueOldClaim:(id)claim;
-(void)devalueSelf;
-(BOOL)didWait;
-(void)evaluateNewClaim:(id)claim;
-(BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;
-(void)finalize;
-(void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;
-(void)granted;
-(void)ifSymbolicLinkAtURL:(id)url withResolutionCount:(int*)resolutionCount thenReevaluateSelf:(id)aSelf elseInvokeClaimer:(id)claimer;
-(void)invokeClaimer;
-(BOOL)isBlockedByClaimWithPurposeID:(id)purposeID;
-(BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;
-(BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;
-(BOOL)isGranted;
-(BOOL)isRevoked;
-(void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;
-(void)makePresentersOfItemAtLocation:(id)location orContainedItem:(BOOL)item relinquishUsingProcedureGetter:(id)getter;
-(void)makeProviderOfItemAtLocation:(id)location provideThenContinue:(id)aContinue;
-(id)newClaimerWaiter;
-(id)pendingClaims;
-(id)purposeID;
-(id)purposeIDOfClaimOnItemAtLocation:(id)location forMessagingPresenter:(id)messagingPresenter;
-(void)removePendingClaims:(id)claims;
-(void)revoked;
-(void)setCameFromSuperarbiter;
-(void)setClaimerError:(id)error;
-(void)unblock;
-(void)unblockClaimer;
-(void)whenRevokedPerformProcedure:(id)procedure;
-(BOOL)willBeRevoked;
@end
