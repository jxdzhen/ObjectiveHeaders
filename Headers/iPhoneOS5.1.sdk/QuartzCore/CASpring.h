/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, CALayer, CAValueFunction;

@interface CASpring : XXUnknownSuperclass <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString* _name;
	CALayer* _layerA;
	CALayer* _layerB;
	CGPoint _attachmentPointA;
	CGPoint _attachmentPointB;
	CAValueFunction* _function;
	float _stiffness;
	float _damping;
	float _restLength;
	BOOL _enabled;
	id _delegate;
	void* _priv;
}
@property(assign) CGPoint attachmentPointA;
@property(assign) CGPoint attachmentPointB;
@property(assign) float damping;
@property(assign) id delegate;
@property(assign, getter=isEnabled) BOOL enabled;
@property(retain) CAValueFunction* function;
@property(retain) CALayer* layerA;
@property(retain) CALayer* layerB;
@property(copy) NSString* name;
@property(assign) float restLength;
@property(assign) float stiffness;
+(id)defaultValueForKey:(id)key;
+(id)spring;
-(id)init;
-(id)initWithCoder:(id)coder;
-(Object*)CA_copyRenderValue;
// declared property getter: -(CGPoint)attachmentPointA;
// declared property getter: -(CGPoint)attachmentPointB;
-(id)copyWithZone:(NSZone*)zone;
// declared property getter: -(float)damping;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)function;
// declared property getter: -(BOOL)isEnabled;
// declared property getter: -(id)layerA;
// declared property getter: -(id)layerB;
-(id)mutableCopyWithZone:(NSZone*)zone;
// declared property getter: -(id)name;
// declared property getter: -(float)restLength;
// declared property setter: -(void)setAttachmentPointA:(CGPoint)a;
// declared property setter: -(void)setAttachmentPointB:(CGPoint)b;
// declared property setter: -(void)setDamping:(float)damping;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
// declared property setter: -(void)setFunction:(id)function;
// declared property setter: -(void)setLayerA:(id)a;
// declared property setter: -(void)setLayerB:(id)b;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setRestLength:(float)length;
// declared property setter: -(void)setStiffness:(float)stiffness;
-(void)setValue:(id)value forKey:(id)key;
-(void)setValue:(id)value forKeyPath:(id)keyPath;
// declared property getter: -(float)stiffness;
-(id)valueForKey:(id)key;
-(id)valueForKeyPath:(id)keyPath;
@end
