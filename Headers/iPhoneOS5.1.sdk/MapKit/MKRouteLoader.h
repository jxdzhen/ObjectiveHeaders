/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface MKRouteLoader : XXUnknownSuperclass {
	GEOTileKeyList* _tilePaths;
	int _state;
	unsigned short _provider;
}
+(unsigned)maxTilesToPreload;
-(id)initWithTiles:(id)tiles;
-(void)_reachabilityChanged:(id)changed;
-(void)_resetLoading;
-(void)dealloc;
-(void)startLoading;
-(void)stopLoading;
@end
