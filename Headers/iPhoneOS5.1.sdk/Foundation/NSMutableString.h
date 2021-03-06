/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"
#import "NSMutableString.h"


@interface NSMutableString : NSString {
}
+(id)allocWithZone:(NSZone*)zone;
+(void)initialize;
+(id)stringWithCapacity:(unsigned)capacity;
-(id)initWithCapacity:(unsigned)capacity;
-(void)appendFormat:(id)format;
-(void)appendString:(id)string;
-(Class)classForCoder;
-(void)deleteCharactersInRange:(NSRange)range;
-(void)insertString:(id)string atIndex:(unsigned)index;
-(void)replaceCharactersInRange:(NSRange)range withCString:(const char*)cstring length:(unsigned)length;
-(void)replaceCharactersInRange:(NSRange)range withCharacters:(const unsigned short*)characters length:(unsigned)length;
-(void)replaceCharactersInRange:(NSRange)range withString:(id)string;
-(unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;
-(void)setString:(id)string;
@end

@interface NSMutableString (NSCFAdditions)
-(void)_cfAppendCString:(const char*)string length:(int)length;
-(void)_cfCapitalize:(const void*)capitalize;
-(void)_cfLowercase:(const void*)lowercase;
-(void)_cfNormalize:(long)normalize;
-(void)_cfPad:(CFStringRef)pad length:(unsigned)length padIndex:(unsigned)index;
-(void)_cfTrim:(CFStringRef)trim;
-(void)_cfTrimWS;
-(void)_cfUppercase:(const void*)uppercase;
-(void)_trimWithCharacterSet:(id)characterSet;
-(void)appendCharacters:(const unsigned short*)characters length:(unsigned)length;
@end

@interface NSMutableString (NSRegularExpressionSupport)
-(unsigned)_replaceOccurrencesOfRegularExpressionPattern:(id)regularExpressionPattern withTemplate:(id)aTemplate options:(unsigned)options range:(NSRange)range;
@end

