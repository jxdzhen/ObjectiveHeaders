/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityImportOperation.h"

@class NSSet, NSObject, NSString, PFUbiquityLocation;
@protocol PFUbiquityImportScanOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityImportScanOperation : PFUbiquityImportOperation {
@private
	PFUbiquityLocation* _rootLocationToScan;
	NSString* _localPeerID;
	NSSet* _activeStoreNames;
	BOOL _includeLocalPeerLogs;
	BOOL _isFirstImport;
}
@property(readonly, assign, nonatomic) NSSet* activeStoreNames;	// @synthesize=_activeStoreNames
@property(assign) NSObject<PFUbiquityImportScanOperationDelegate>* delegate;
@property(readonly, assign, nonatomic) BOOL includeLocalPeerLogs;	// @synthesize=_includeLocalPeerLogs
@property(assign, nonatomic) BOOL isFirstImport;	// @synthesize=_isFirstImport
@property(readonly, assign, nonatomic) NSString* localPeerID;	// @synthesize=_localPeerID
@property(readonly, assign, nonatomic) PFUbiquityLocation* rootLocationToScan;	// @synthesize=_rootLocationToScan
-(id)init;
-(id)initWithLocalPeerID:(id)localPeerID ubiquityRootLocation:(id)location activeStoreNames:(id)names includingLocalPeerLogs:(BOOL)logs;
// declared property getter: -(id)activeStoreNames;
-(BOOL)batchDownloadTransactionLogsAtLocations:(id)locations error:(id*)error;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)includeLocalPeerLogs;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(BOOL)isFirstImport;
// declared property getter: -(id)localPeerID;
-(void)main;
// declared property getter: -(id)rootLocationToScan;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setIsFirstImport:(BOOL)import;
@end

