/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSManagedObjectContext, PFUbiquityLocation, PFUbiquityMetadataFactoryEntry;

__attribute__((visibility("hidden")))
@interface _PFUbiquityStack : XXUnknownSuperclass {
@private
	NSManagedObjectContext* _metadataMOC;
	PFUbiquityMetadataFactoryEntry* _metadataEntry;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootURL;
	PFUbiquityLocation* _metadataStoreFileLocation;
}
@property(readonly, assign, nonatomic) NSString* localPeerID;	// @synthesize=_localPeerID
@property(readonly, assign, nonatomic) PFUbiquityMetadataFactoryEntry* metadataEntry;	// @synthesize=_metadataEntry
@property(readonly, assign, nonatomic) NSManagedObjectContext* metadataMOC;	// @synthesize=_metadataMOC
@property(readonly, assign, nonatomic) PFUbiquityLocation* metadataStoreFileLocation;	// @synthesize=_metadataStoreFileLocation
@property(readonly, assign, nonatomic) PFUbiquityLocation* ubiquityRootURL;	// @synthesize=_ubiquityRootURL
+(id)defaultUbiquityLocationForBundleIdentifier:(id)bundleIdentifier createIfMissing:(BOOL)missing;
+(id)defaultUbiquityLocationForPeerID:(id)peerID andBundleIdentifier:(id)identifier createIfMissing:(BOOL)missing;
+(id)defaultUbiquityRootLocation;
+(BOOL)shouldRecoverStackMetadataForStore:(id)store withLocalPeerID:(id)localPeerID;
-(id)init;
-(id)initWithMetadataEntry:(id)metadataEntry;
-(id)allPeers;
-(void)dealloc;
-(id)description;
-(id)importStateForStoreName:(id)storeName andPeerID:(id)anId;
-(id)importStatesMatchingStoreName:(id)name;
// declared property getter: -(id)localPeerID;
// declared property getter: -(id)metadataEntry;
// declared property getter: -(id)metadataMOC;
// declared property getter: -(id)metadataStoreFileLocation;
-(id)peerForPeerID:(id)peerID createIfMissing:(BOOL)missing;
-(BOOL)purgeAndInitializeMetadataStoreFileWithError:(id*)error;
-(BOOL)purgeMetadataForStoreMetadata:(id)storeMetadata withError:(id*)error;
// declared property getter: -(id)ubiquityRootURL;
@end
