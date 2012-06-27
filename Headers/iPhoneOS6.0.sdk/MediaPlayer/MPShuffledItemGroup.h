/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface MPShuffledItemGroup : XXUnknownSuperclass <NSCoding> {
	long long _groupPersistentID;
	NSMutableArray* _mutableItems;
}
-(id)initWithCoder:(id)coder;
-(id)initWithGroupPersistentID:(long long)groupPersistentID;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
@end
