/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import </libobjc.A.h>
#import "CoreFoundation-Structs.h"


@protocol NSObject
-(id)autorelease;
-(Class)class;
-(BOOL)conformsToProtocol:(id)protocol;
@optional
-(id)debugDescription;
@required
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isKindOfClass:(Class)aClass;
-(BOOL)isMemberOfClass:(Class)aClass;
-(BOOL)isProxy;
-(id)performSelector:(SEL)selector;
-(id)performSelector:(SEL)selector withObject:(id)object;
-(id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
-(oneway void)release;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)retain;
-(unsigned)retainCount;
-(id)self;
-(Class)superclass;
-(NSZone*)zone;
@end

@interface NSObject (NSObject)
+(id)init;
+(id)__allocWithZone_OA:(NSZone*)zone_OA;
+(id)_copyDescription;
+(void)dealloc;
+(id)description;
+(void)doesNotRecognizeSelector:(SEL)selector;
+(void)finalize;
+(id)instanceMethodSignatureForSelector:(SEL)selector;
+(void)load;
+(id)methodSignatureForSelector:(SEL)selector;
-(BOOL)___tryRetain_OA;
-(id)__autorelease_OA;
-(void)__dealloc_zombie;
-(oneway void)__release_OA;
-(id)__retain_OA;
-(id)_copyDescription;
-(id)description;
-(void)doesNotRecognizeSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
@end

@interface NSObject (__NSIsKinds)
-(BOOL)isNSArray__;
-(BOOL)isNSData__;
-(BOOL)isNSDate__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSNumber__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSSet__;
-(BOOL)isNSString__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
@end

@interface NSObject (__NSCFType)
-(unsigned long)_cfTypeID;
@end
