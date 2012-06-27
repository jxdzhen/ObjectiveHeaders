/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFEncodedData : XXUnknownSuperclass {
@private
	NSData* _aData;
	unsigned _byteCount;
}
-(id)init;
-(id)initWithCoder:(id)coder;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(void)getBytes:(void*)bytes length:(unsigned)length;
-(void)getBytes:(void*)bytes range:(NSRange)range;
-(BOOL)isEqualToData:(id)data;
-(unsigned)length;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)privateCopy;
-(NSRange)rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;
-(void)release;
-(id)retain;
-(unsigned)retainCount;
-(id)subdataWithRange:(NSRange)range;
-(BOOL)writeToFile:(id)file atomically:(BOOL)atomically;
-(BOOL)writeToFile:(id)file options:(unsigned)options error:(id*)error;
-(BOOL)writeToURL:(id)url atomically:(BOOL)atomically;
-(BOOL)writeToURL:(id)url options:(unsigned)options error:(id*)error;
@end
