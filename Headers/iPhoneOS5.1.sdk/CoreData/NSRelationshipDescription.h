/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSRelationshipDescription.h"
#import "CoreData-Structs.h"
#import "NSPropertyDescription.h"

@class NSString, NSEntityDescription;

@interface NSRelationshipDescription : NSPropertyDescription {
@private
	void* _reserved5;
	void* _reserved6;
	NSEntityDescription* _destinationEntity;
	NSString* _lazyDestinationEntityName;
	NSRelationshipDescription* _inverseRelationship;
	NSString* _lazyInverseRelationshipName;
	unsigned long _maxCount;
	unsigned long _minCount;
	unsigned _deleteRule;
}
+(void)initialize;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(unsigned)deleteRule;
-(id)description;
-(id)destinationEntity;
-(void)encodeWithCoder:(id)coder;
-(id)inverseRelationship;
-(BOOL)isEqual:(id)equal;
-(BOOL)isIndexed;
-(BOOL)isOrdered;
-(BOOL)isToMany;
-(unsigned)maxCount;
-(unsigned)minCount;
-(void)setDeleteRule:(unsigned)rule;
-(void)setDestinationEntity:(id)entity;
-(void)setInverseRelationship:(id)relationship;
-(void)setMaxCount:(unsigned)count;
-(void)setMinCount:(unsigned)count;
-(void)setOrdered:(BOOL)ordered;
-(id)versionHash;
@end

@interface NSRelationshipDescription (_NSInternalMethods)
-(void)_createCachesAndOptimizeState;
-(BOOL)_isRelationship;
-(BOOL)_isToManyRelationship;
-(BOOL)_nonPredicateValidateValue:(id*)value forKey:(id)key inObject:(id)object error:(id*)error;
-(unsigned)_propertyType;
-(void)_setLazyDestinationEntityName:(id)name;
-(void)_updateInverse:(id)inverse;
-(BOOL)_validateValuesAreOfDestinationEntity:(id)destinationEntity source:(id)source;
-(void)_versionHash:(char*)hash;
-(void)_versionHash:(char*)hash proxyContext:(id)context;
-(void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots fetchRequests:(id)requests;
@end

@interface NSRelationshipDescription (_NSRelationshipDescriptionPrivateMethods)
-(id)_initWithName:(id)name;
@end

