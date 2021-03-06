/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class NSArray;

@interface ABModelRecord : XXUnknownSuperclass {
	int _recordID;
	CFStringRef _sortKey;
	long _highlightIndex;
	BOOL _isGroup;
	NSArray* _namePieces;
}
-(id)initWithRecordID:(int)recordID highlightIndex:(long)index group:(BOOL)group namePieces:(id)pieces sortKey:(CFStringRef)key;
-(void)dealloc;
-(long)highlightIndex;
-(BOOL)isGroup;
-(id)namePieces;
-(int)recordID;
-(CFStringRef)sortKey;
@end

