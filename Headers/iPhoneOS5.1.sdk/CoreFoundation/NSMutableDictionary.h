/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"


@interface NSMutableDictionary : NSDictionary {
}
+(id)dictionaryWithCapacity:(unsigned)capacity;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithObjects:(const id*)objects forKeys:(const id*)keys count:(unsigned)count;
-(void)_mutate;
-(void)addEntriesFromDictionary:(id)dictionary;
-(void)addObject:(id)object forKey:(id)key;
-(void)addObjects:(id)objects forKeys:(id)keys;
-(void)addObjects:(const id*)objects forKeys:(const id*)keys count:(unsigned)count;
-(void)invert;
-(void)removeAllObjects;
-(void)removeEntriesInDictionary:(id)dictionary;
-(void)removeKeysForObject:(id)object;
-(void)removeObjectForKey:(id)key;
-(void)removeObjectsForKeys:(id)keys;
-(void)replaceObject:(id)object forKey:(id)key;
-(void)replaceObjects:(id)objects forKeys:(id)keys;
-(void)replaceObjects:(const id*)objects forKeys:(const id*)keys count:(unsigned)count;
-(void)setDictionary:(id)dictionary;
-(void)setEntriesFromDictionary:(id)dictionary;
-(void)setObject:(id)object forKey:(id)key;
-(void)setObjects:(id)objects forKeys:(id)keys;
-(void)setObjects:(const id*)objects forKeys:(const id*)keys count:(unsigned)count;
@end

