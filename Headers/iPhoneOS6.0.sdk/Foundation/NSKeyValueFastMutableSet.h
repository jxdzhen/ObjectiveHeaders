/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"

@class NSKeyValueMutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {
@private
	NSKeyValueMutatingSetMethodSet* _mutatingMethods;
}
-(id)_proxyInitWithContainer:(id)container getter:(id)getter;
-(void)_proxyNonGCFinalize;
-(void)addObject:(id)object;
-(void)addObjectsFromArray:(id)array;
-(void)intersectSet:(id)set;
-(void)minusSet:(id)set;
-(void)removeAllObjects;
-(void)removeObject:(id)object;
-(void)setSet:(id)set;
-(void)unionSet:(id)set;
@end
