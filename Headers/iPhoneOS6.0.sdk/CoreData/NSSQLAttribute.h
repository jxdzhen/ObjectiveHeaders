/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"


__attribute__((visibility("hidden")))
@interface NSSQLAttribute : NSSQLColumn {
}
-(id)initForReadOnlyFetchWithExpression:(id)expression;
-(id)initWithEntity:(id)entity propertyDescription:(id)description;
-(unsigned)_sqlTypeForAttributeType:(unsigned)attributeType flags:(unsigned)flags;
-(id)attributeDescription;
-(BOOL)shouldIndex;
@end
