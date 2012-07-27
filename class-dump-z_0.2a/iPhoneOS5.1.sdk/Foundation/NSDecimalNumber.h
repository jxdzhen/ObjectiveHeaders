/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSDecimalNumber.h"
#import "NSNumber.h"


@interface NSDecimalNumber : NSNumber {
@private
	unsigned _exponent : 8;
	unsigned _length : 4;
	unsigned _isNegative : 1;
	unsigned _isCompact : 1;
	unsigned _reserved : 1;
	unsigned _hasExternalRefCount : 1;
	unsigned _refs : 16;
	unsigned short _mantissa[0];
}
+(id)allocWithZone:(NSZone*)zone;
+(id)decimalNumberWithDecimal:(XXStruct_9isexA)decimal;
+(id)decimalNumberWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;
+(id)decimalNumberWithString:(id)string;
+(id)decimalNumberWithString:(id)string locale:(id)locale;
+(id)defaultBehavior;
+(id)maximumDecimalNumber;
+(id)minimumDecimalNumber;
+(id)notANumber;
+(id)one;
+(void)setDefaultBehavior:(id)behavior;
+(id)zero;
-(id)initWithCoder:(id)coder;
-(id)initWithDecimal:(XXStruct_9isexA)decimal;
-(id)initWithMantissa:(unsigned long long)mantissa exponent:(short)exponent isNegative:(BOOL)negative;
-(id)initWithString:(id)string;
-(id)initWithString:(id)string locale:(id)locale;
-(BOOL)boolValue;
-(BOOL)charValue;
-(Class)classForCoder;
-(int)compare:(id)compare;
-(id)copy;
-(id)copyWithZone:(NSZone*)zone;
-(id)decimalNumberByAdding:(id)adding;
-(id)decimalNumberByAdding:(id)adding withBehavior:(id)behavior;
-(id)decimalNumberByDividingBy:(id)by;
-(id)decimalNumberByDividingBy:(id)by withBehavior:(id)behavior;
-(id)decimalNumberByMultiplyingBy:(id)by;
-(id)decimalNumberByMultiplyingBy:(id)by withBehavior:(id)behavior;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)a10;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)a10 withBehavior:(id)behavior;
-(id)decimalNumberByRaisingToPower:(unsigned)power;
-(id)decimalNumberByRaisingToPower:(unsigned)power withBehavior:(id)behavior;
-(id)decimalNumberByRoundingAccordingToBehavior:(id)behavior;
-(id)decimalNumberBySubstracting:(id)substracting;
-(id)decimalNumberBySubstracting:(id)substracting withBehavior:(id)behavior;
-(id)decimalNumberBySubtracting:(id)subtracting;
-(id)decimalNumberBySubtracting:(id)subtracting withBehavior:(id)behavior;
-(XXStruct_9isexA)decimalValue;
-(id)description;
-(id)descriptionWithLocale:(id)locale;
-(double)doubleValue;
-(void)encodeWithCoder:(id)coder;
-(float)floatValue;
-(void)getValue:(void*)value;
-(int)intValue;
-(BOOL)isEqual:(id)equal;
-(long long)longLongValue;
-(long)longValue;
-(const char*)objCType;
-(short)shortValue;
-(unsigned char)unsignedCharValue;
-(unsigned)unsignedIntValue;
-(unsigned long long)unsignedLongLongValue;
-(unsigned long)unsignedLongValue;
-(unsigned short)unsignedShortValue;
@end

@interface NSDecimalNumber (NSNumberCompatibility)
+(id)numberWithBool:(BOOL)aBool;
+(id)numberWithChar:(BOOL)aChar;
+(id)numberWithDouble:(double)aDouble;
+(id)numberWithFloat:(float)aFloat;
+(id)numberWithInt:(int)int;
+(id)numberWithInteger:(int)integer;
+(id)numberWithLong:(long)aLong;
+(id)numberWithLongLong:(long long)longLong;
+(id)numberWithShort:(short)aShort;
+(id)numberWithUnsignedChar:(unsigned char)unsignedChar;
+(id)numberWithUnsignedInt:(unsigned)unsignedInt;
+(id)numberWithUnsignedInteger:(unsigned)unsignedInteger;
+(id)numberWithUnsignedLong:(unsigned long)unsignedLong;
+(id)numberWithUnsignedLongLong:(unsigned long long)unsignedLongLong;
+(id)numberWithUnsignedShort:(unsigned short)unsignedShort;
@end
