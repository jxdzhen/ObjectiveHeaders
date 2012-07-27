/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

@interface CABehavior : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	void* _attr;
	unsigned _refcount;
	unsigned _uid;
	void* _priv;
}
@property(assign) id delegate;
@property(assign, getter=isEnabled) BOOL enabled;
@property(copy) NSString* name;
@property(copy) NSDictionary* style;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+(/*function-pointer*/ void*)CA_getterForType:(int)type;
+(/*function-pointer*/ void*)CA_setterForType:(int)type;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(id)behavior;
+(id)defaultValueForKey:(id)key;
+(BOOL)resolveInstanceMethod:(SEL)method;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)_setCARenderBehavior:(Behavior*)behavior;
-(BOOL)allowsWeakReference;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)debugDescription;
// declared property getter: -(id)delegate;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(BOOL)isEnabled;
// declared property getter: -(id)name;
-(void)release;
-(id)retain;
-(unsigned)retainCount;
-(BOOL)retainWeakReference;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setStyle:(id)style;
-(void)setValue:(id)value forKey:(id)key;
-(void)setValue:(id)value forKeyPath:(id)keyPath;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
-(BOOL)shouldArchiveValueForKey:(id)key;
// declared property getter: -(id)style;
-(id)valueForKey:(id)key;
-(id)valueForKeyPath:(id)keyPath;
-(id)valueForUndefinedKey:(id)undefinedKey;
@end
