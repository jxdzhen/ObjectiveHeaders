/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class NSSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface EKObjectToManyRelation : EKObjectRelation {
@private
	NSMutableSet* _loadedItems;
	NSMutableSet* _effectiveItems;
	NSMutableSet* _addedItems;
	NSMutableSet* _removedItems;
}
@property(retain, nonatomic) NSMutableSet* addedItems;	// @synthesize=_addedItems
@property(readonly, assign, nonatomic) int count;
@property(retain, nonatomic) NSMutableSet* effectiveItems;	// @synthesize=_effectiveItems
@property(copy, nonatomic) NSSet* items;
@property(readonly, assign, nonatomic) BOOL itemsWereAdded;
@property(readonly, assign, nonatomic) BOOL itemsWereRemoved;
@property(retain, nonatomic) NSMutableSet* loadedItems;	// @synthesize=_loadedItems
@property(retain, nonatomic) NSMutableSet* removedItems;	// @synthesize=_removedItems
-(void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;
-(id)_effectiveItems;
-(void)_forgetRelatedObject:(id)object;
-(id)_loadedItems;
-(void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;
-(void)addItem:(id)item;
// declared property getter: -(id)addedItems;
-(id)committedValue;
// declared property getter: -(int)count;
-(void)dealloc;
-(id)description;
-(void)didCommit;
// declared property getter: -(id)effectiveItems;
-(BOOL)isWeak;
// declared property getter: -(id)items;
// declared property getter: -(BOOL)itemsWereAdded;
// declared property getter: -(BOOL)itemsWereRemoved;
// declared property getter: -(id)loadedItems;
-(void)refresh;
-(void)removeItem:(id)item;
// declared property getter: -(id)removedItems;
-(void)reset;
-(void)rollback;
// declared property setter: -(void)setAddedItems:(id)items;
// declared property setter: -(void)setEffectiveItems:(id)items;
// declared property setter: -(void)setItems:(id)items;
// declared property setter: -(void)setLoadedItems:(id)items;
// declared property setter: -(void)setRemovedItems:(id)items;
-(void)updatePersistentObject;
-(BOOL)validate:(id*)validate;
@end

