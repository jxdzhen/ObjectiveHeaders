/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItemCollection.h"
#import "MediaPlayer-Structs.h"

@class MPMediaItem, MPMediaQuery;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection {
@private
	long long _identifier;
	MPMediaQuery* _itemsQuery;
	int _grouping;
	MPMediaItem* _representativeItem;
}
-(id)initWithCoder:(id)coder;
-(id)initWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQuery:(id)query grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)items;
-(id)itemsQuery;
-(id)mediaLibrary;
-(int)mediaTypes;
-(unsigned long long)persistentID;
-(id)representativeItem;
-(id)valueForProperty:(id)property;
@end

