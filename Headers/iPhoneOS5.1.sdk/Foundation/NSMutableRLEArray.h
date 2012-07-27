/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRLEArray.h"


@interface NSMutableRLEArray : NSRLEArray {
}
-(void)_setBlockCapacity:(unsigned)capacity;
-(id)copyWithZone:(NSZone*)zone;
-(void)deleteObjectsInRange:(NSRange)range;
-(void)insertObject:(id)object range:(NSRange)range;
-(void)replaceObjectsInRange:(NSRange)range withObject:(id)object length:(unsigned)length;
@end
