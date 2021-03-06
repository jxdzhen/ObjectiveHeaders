/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class NSString;

@interface CAStateSetValue : CAStateElement {
@private
	NSString* _keyPath;
	id _value;
}
@property(copy, nonatomic) NSString* keyPath;	// @synthesize=_keyPath
@property(retain, nonatomic) id value;
-(id)initWithCoder:(id)coder;
-(void)apply:(id)apply;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)coder;
-(void)foreachLayer:(id)layer;
// declared property getter: -(id)keyPath;
-(BOOL)matches:(id)matches;
// declared property setter: -(void)setKeyPath:(id)path;
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)value;
@end

