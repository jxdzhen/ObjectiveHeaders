/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Twitter.framework/Twitter
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSData;

@interface TWRequestMultiPart : XXUnknownSuperclass {
	NSData* _payload;
	NSString* _name;
	NSString* _type;
}
@property(copy, nonatomic) NSString* name;	// @synthesize=_name
@property(retain, nonatomic) NSData* payload;	// @synthesize=_payload
@property(copy, nonatomic) NSString* type;	// @synthesize=_type
+(id)multiPartWithName:(id)name payload:(id)payload type:(id)type;
+(id)multipartBoundary;
-(void)dealloc;
-(id)formPartData;
-(id)imagePartData;
// declared property getter: -(id)name;
-(id)partData;
// declared property getter: -(id)payload;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setPayload:(id)payload;
// declared property setter: -(void)setType:(id)type;
// declared property getter: -(id)type;
@end

