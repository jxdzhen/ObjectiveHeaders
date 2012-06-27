/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSLocale, NSString, NSEnumerator;

@interface AVMetadataEnumerator : XXUnknownSuperclass {
@private
	OpaqueFigMetadataReader* _reader;
	NSEnumerator* _arrayEnumerator;
	id _key;
	NSString* _keySpace;
	NSLocale* _locale;
	long _count;
	long _index;
}
+(id)metadataEnumeratorWithArray:(id)array key:(id)key keySpace:(id)space locale:(id)locale;
+(id)metadataEnumeratorWithMetadataReader:(OpaqueFigMetadataReader*)metadataReader;
-(id)initWithArray:(id)array key:(id)key keySpace:(id)space locale:(id)locale;
-(id)initWithMetadataReader:(OpaqueFigMetadataReader*)metadataReader;
-(id)initWithMetadataReader:(OpaqueFigMetadataReader*)metadataReader array:(id)array key:(id)key keySpace:(id)space locale:(id)locale;
-(void)_setArrayEnumerator:(id)enumerator;
-(void)_setKey:(id)key;
-(void)_setKeySpace:(id)space;
-(void)_setLocale:(id)locale;
-(void)_setMetadataReader:(OpaqueFigMetadataReader*)reader;
-(void)dealloc;
-(void)finalize;
-(id)nextObject;
@end
