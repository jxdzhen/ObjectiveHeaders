/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"


__attribute__((visibility("hidden")))
@interface NSAttributeStoreMapping : NSPropertyStoreMapping {
@private
	int _externalType;
	unsigned _externalPrecision;
	int _externalScale;
}
-(id)initWithProperty:(id)property;
-(id)attribute;
-(id)columnDefinition;
-(unsigned)externalPrecision;
-(int)externalScale;
-(int)externalType;
-(BOOL)isEqual:(id)equal;
-(void)setExternalPrecision:(unsigned)precision;
-(void)setExternalScale:(int)scale;
-(void)setExternalType:(int)type;
-(id)sqlType;
@end
