/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, PFUbiquityPeer, NSDictionary, PFUbiquityStoreMetadata, NSMutableDictionary, _PFUbiquityStack, PFUbiquityStoreSaveSnapshot, PFUbiquityKnowledgeVector, PFUbiquityTransactionLog, PFUbiquitySwitchboardCacheWrapper;

__attribute__((visibility("hidden")))
@interface PFUbiquityImportContext : XXUnknownSuperclass {
@private
	_PFUbiquityStack* _stack;
	PFUbiquityStoreMetadata* _storeMetadata;
	PFUbiquityPeer* _actingPeer;
	PFUbiquityKnowledgeVector* _kv;
	PFUbiquityKnowledgeVector* _currentKnowledgeVector;
	NSString* _exportingPeerID;
	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquityStoreSaveSnapshot* _storeSaveSnapshot;
	NSDictionary* _globalIDToLocalIDURICache;
	NSMutableDictionary* _globalIDToFetchedObject;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;
}
@property(readonly, assign, nonatomic) PFUbiquityPeer* actingPeer;	// @synthesize=_actingPeer
@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper* cacheWrapper;	// @synthesize=_cacheWrapper
@property(retain, nonatomic) PFUbiquityKnowledgeVector* currentKnowledgeVector;	// @synthesize=_currentKnowledgeVector
@property(retain, nonatomic) NSString* exportingPeerID;	// @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSMutableDictionary* globalIDToFetchedObject;	// @synthesize=_globalIDToFetchedObject
@property(retain, nonatomic) NSDictionary* globalIDToLocalIDURICache;	// @synthesize=_globalIDToLocalIDURICache
@property(retain, nonatomic) PFUbiquityKnowledgeVector* knowledgeVector;	// @synthesize=_kv
@property(readonly, assign, nonatomic) _PFUbiquityStack* stack;	// @synthesize=_stack
@property(readonly, assign, nonatomic) PFUbiquityStoreMetadata* storeMetadata;	// @synthesize=_storeMetadata
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot* storeSaveSnapshot;	// @synthesize=_storeSaveSnapshot
@property(retain, nonatomic) PFUbiquityTransactionLog* transactionLog;	// @synthesize=_transactionLog
-(id)init;
-(id)initWithStack:(id)stack andStoreMetadata:(id)metadata;
-(id)initWithStoreName:(id)storeName andUbiquityRootLocation:(id)location withLocalPeerID:(id)localPeerID;
// declared property getter: -(id)actingPeer;
// declared property getter: -(id)cacheWrapper;
// declared property getter: -(id)currentKnowledgeVector;
-(void)dealloc;
// declared property getter: -(id)exportingPeerID;
// declared property getter: -(id)globalIDToFetchedObject;
// declared property getter: -(id)globalIDToLocalIDURICache;
// declared property getter: -(id)knowledgeVector;
-(BOOL)prefetchManagedObjectsInContext:(id)context error:(id*)error;
-(void)setActingPeer:(id)peer;
// declared property setter: -(void)setCacheWrapper:(id)wrapper;
// declared property setter: -(void)setCurrentKnowledgeVector:(id)vector;
// declared property setter: -(void)setExportingPeerID:(id)anId;
// declared property setter: -(void)setGlobalIDToLocalIDURICache:(id)localIDURICache;
// declared property setter: -(void)setKnowledgeVector:(id)vector;
// declared property setter: -(void)setStoreSaveSnapshot:(id)snapshot;
// declared property setter: -(void)setTransactionLog:(id)log;
// declared property getter: -(id)stack;
// declared property getter: -(id)storeMetadata;
// declared property getter: -(id)storeSaveSnapshot;
// declared property getter: -(id)transactionLog;
@end

