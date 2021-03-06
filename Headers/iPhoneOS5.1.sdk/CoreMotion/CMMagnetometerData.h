/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMMagnetometerData : CMLogItem {
@private
	id _internal;
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB magneticField;
-(id)initWithCoder:(id)coder;
-(id)initWithMagneticField:(XXStruct_ZUkpeA)magneticField andTimestamp:(double)timestamp;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(XXStruct_taVrlB)magneticField;
@end

