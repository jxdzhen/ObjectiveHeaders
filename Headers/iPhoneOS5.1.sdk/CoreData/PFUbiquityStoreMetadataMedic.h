/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityImportScanOperationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSPersistentStore, PFUbiquityLocation, NSString, NSError, NSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreMetadataMedic : XXUnknownSuperclass <PFUbiquityImportScanOperationDelegate> {
@private
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	NSPersistentStore* _store;
	NSSQLiteConnection* _connection;
	NSArray* _scanTransactionLogLocations;
	NSError* _scanOperationError;
	BOOL _scanOperationSuccess;
}
@property(readonly, assign, nonatomic) NSSQLiteConnection* connection;	// @synthesize=_connection
@property(readonly, assign, nonatomic) NSString* localPeerID;	// @synthesize=_localPeerID
@property(retain, nonatomic) NSError* scanOperationError;	// @synthesize=_scanOperationError
@property(assign, nonatomic) BOOL scanOperationSuccess;	// @synthesize=_scanOperationSuccess
@property(retain, nonatomic) NSArray* scanTransactionLogLocations;	// @synthesize=_scanTransactionLogLocations
@property(readonly, assign, nonatomic) NSPersistentStore* store;	// @synthesize=_store
@property(readonly, assign, nonatomic) NSString* storeName;	// @synthesize=_storeName
@property(readonly, assign, nonatomic) PFUbiquityLocation* ubiquityRootLocation;	// @synthesize=_ubiquityRootLocation
-(id)initWithStore:(id)store andLocalPeerID:(id)anId;
// declared property getter: -(id)connection;
-(void)dealloc;
// declared property getter: -(id)localPeerID;
-(BOOL)recoverMetadataWithError:(id*)error;
-(BOOL)recoverPeerRangesWithStack:(id)stack error:(id*)error;
-(BOOL)recoverPeerStatesWithImportContext:(id)importContext error:(id*)error;
-(BOOL)recoverTransactionLogMetadataWithImportContext:(id)importContext error:(id*)error;
-(void)scanOperation:(id)operation discoveredPeerStoreVersionLocations:(id)locations;
-(void)scanOperation:(id)operation failedWithError:(id)error;
// declared property getter: -(id)scanOperationError;
-(void)scanOperationFinished:(id)finished withDiscoveredLogLocation:(id)discoveredLogLocation;
// declared property getter: -(BOOL)scanOperationSuccess;
// declared property getter: -(id)scanTransactionLogLocations;
// declared property setter: -(void)setScanOperationError:(id)error;
// declared property setter: -(void)setScanOperationSuccess:(BOOL)success;
// declared property setter: -(void)setScanTransactionLogLocations:(id)locations;
// declared property getter: -(id)store;
// declared property getter: -(id)storeName;
// declared property getter: -(id)ubiquityRootLocation;
@end

