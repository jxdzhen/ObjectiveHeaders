/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;
	NSDictionary* _components;
	id _underlyingResult;
}
@property(readonly, assign) void* underlyingResult;
-(id)initWithCoder:(id)coder;
-(id)initWithRange:(NSRange)range components:(id)components;
-(id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void*)result;
-(BOOL)_adjustRangesWithOffset:(int)offset;
-(id)components;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(NSRange)range;
-(id)resultByAdjustingRangesWithOffset:(int)offset;
-(unsigned long long)resultType;
// declared property getter: -(void*)underlyingResult;
@end
