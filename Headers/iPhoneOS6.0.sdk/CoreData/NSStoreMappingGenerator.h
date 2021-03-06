/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSStoreMappingGenerator : XXUnknownSuperclass {
}
+(id)defaultMappingGenerator;
+(void)invalidate;
-(id)externalNameForEntityName:(id)entityName;
-(id)externalNameForPropertyName:(id)propertyName;
-(id)internalNameForEntityName:(id)entityName version:(int)version;
-(id)internalNameForPropertyName:(id)propertyName version:(int)version;
-(id)joinsForRelationship:(id)relationship;
-(id)mappingForAttribute:(id)attribute forConfigurationWithName:(id)name;
-(id)mappingForEntity:(id)entity forConfigurationWithName:(id)name;
-(id)mappingForRelationship:(id)relationship forConfigurationWithName:(id)name;
-(id)mappingsDictForConfigurationWithName:(id)name inModel:(id)model;
-(id)mappingsForConfigurationWithName:(id)name inModel:(id)model;
-(id)primaryKeyForEntity:(id)entity;
@end

