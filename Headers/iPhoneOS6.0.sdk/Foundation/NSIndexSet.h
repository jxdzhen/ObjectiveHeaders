/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "Foundation-Structs.h"


@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	} _indexSetFlags;
	union {
		struct {
			NSRange _range;
		} _singleRange;
		struct {
			void* _data;
			void* _reserved;
		} _multipleRanges;
	} _internal;
}
+(id)indexSet;
+(id)indexSetWithIndex:(unsigned)index;
+(id)indexSetWithIndexes:(const unsigned*)indexes count:(unsigned)count;
+(id)indexSetWithIndexesInRange:(NSRange)range;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithIndex:(unsigned)index;
-(id)initWithIndexSet:(id)indexSet;
-(id)initWithIndexes:(const unsigned*)indexes count:(unsigned)count;
-(id)initWithIndexesInRange:(NSRange)range;
-(unsigned)__getContainmentVector:(out BOOL*)vector inRange:(NSRange)range;
-(unsigned)_indexAtIndex:(unsigned)index;
-(unsigned)_indexClosestToIndex:(unsigned)index equalAllowed:(BOOL)allowed following:(BOOL)following;
-(unsigned)_indexOfRangeAfterOrContainingIndex:(unsigned)rangeAfterOrContainingIndex;
-(unsigned)_indexOfRangeBeforeOrContainingIndex:(unsigned)rangeBeforeOrContainingIndex;
-(unsigned)_indexOfRangeContainingIndex:(unsigned)rangeContainingIndex;
-(id)_init;
-(id)_numberEnumerator;
-(void)_setContentToContentFromIndexSet:(id)indexSet;
-(Class)classForCoder;
-(BOOL)containsIndex:(unsigned)index;
-(BOOL)containsIndexes:(id)indexes;
-(BOOL)containsIndexesInRange:(NSRange)range;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countOfIndexesInRange:(NSRange)range;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(void)enumerateIndexesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;
-(void)enumerateIndexesUsingBlock:(id)block;
-(void)enumerateIndexesWithOptions:(unsigned)options usingBlock:(id)block;
-(void)enumerateRangesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;
-(void)enumerateRangesUsingBlock:(id)block;
-(void)enumerateRangesWithOptions:(unsigned)options usingBlock:(id)block;
-(unsigned)firstIndex;
-(unsigned)getIndexes:(unsigned*)indexes maxCount:(unsigned)count inIndexRange:(NSRange*)indexRange;
-(unsigned)hash;
-(unsigned)indexGreaterThanIndex:(unsigned)index;
-(unsigned)indexGreaterThanOrEqualToIndex:(unsigned)index;
-(unsigned)indexInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;
-(unsigned)indexLessThanIndex:(unsigned)index;
-(unsigned)indexLessThanOrEqualToIndex:(unsigned)index;
-(unsigned)indexPassingTest:(id)test;
-(unsigned)indexWithOptions:(unsigned)options passingTest:(id)test;
-(id)indexesInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;
-(id)indexesPassingTest:(id)test;
-(id)indexesWithOptions:(unsigned)options passingTest:(id)test;
-(BOOL)intersectsIndexesInRange:(NSRange)range;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToIndexSet:(id)indexSet;
-(unsigned)lastIndex;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(NSRange)rangeAtIndex:(unsigned)index;
-(unsigned)rangeCount;
-(id)replacementObjectForPortCoder:(id)portCoder;
@end

