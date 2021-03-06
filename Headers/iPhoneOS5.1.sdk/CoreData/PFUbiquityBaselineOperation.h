/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityImportOperation.h"

@class NSPersistentStore, NSManagedObjectModel, PFUbiquityLocation, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
@private
	NSString* _localPeerID;
	NSString* _storeName;
	NSString* _modelVersionHash;
	NSManagedObjectModel* _model;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSPersistentStore* _store;
}
@property(readonly, assign, nonatomic) NSString* localPeerID;	// @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSManagedObjectModel* model;	// @synthesize=_model
@property(readonly, assign, nonatomic) NSString* modelVersionHash;	// @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSPersistentStore* store;	// @synthesize=_store
@property(readonly, assign, nonatomic) NSString* storeName;	// @synthesize=_storeName
@property(readonly, assign, nonatomic) PFUbiquityLocation* ubiquityRootLocation;	// @synthesize=_ubiquityRootLocation
-(id)initWithStore:(id)store andLocalPeerID:(id)anId;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)localPeerID;
// declared property getter: -(id)model;
// declared property getter: -(id)modelVersionHash;
// declared property getter: -(id)store;
// declared property getter: -(id)storeName;
// declared property getter: -(id)ubiquityRootLocation;
@end

