/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MKTiledLayer, NSTimer, NSLock, NSMutableSet, GEOTileKeyList, MKMapTileView, MKTrafficHighlightView, MKMapTileNormalizerView;
@protocol MKMapTileViewDelegate;

__attribute__((visibility("hidden")))
@interface MKMapTileViewImp : XXUnknownSuperclass {
	id<MKMapTileViewDelegate> delegate;
	unsigned mapType;
	MKMapTileView* view;
	MKTiledLayer* layer;
	NSLock* requestersLock;
	NSMutableSet* requesters;
	NSLock* requestTilesLock;
	GEOTileKeyList* requestTiles;
	unsigned loadingTileCount;
	NSLock* tileRequestTimerLock;
	NSTimer* tileRequestTimer;
	NSTimer* tileExpirationTimer;
	NSTimer* drawingExpirationTimer;
	float screenScale;
	MKMapTileNormalizerView* normalizerView;
	MKTrafficHighlightView* trafficHighlightView;
	NSLock* loadingEnabledLock;
	unsigned short provider;
	struct {
		unsigned canDrawOnMainThread : 1;
		unsigned canDisplayTraffic : 1;
		unsigned drawing : 1;
		unsigned levelCrossFade : 1;
		unsigned loadingEnabled : 1;
		unsigned shouldDisplayBaseTiles : 1;
		unsigned shouldDisplayTraffic : 1;
		unsigned shouldDisplayEffects : 1;
		unsigned shouldReloadSynchronously : 1;
		unsigned delegateDidStartRendering : 1;
		unsigned delegateDidFinishRendering : 1;
		unsigned delegateDidStartLoading : 1;
		unsigned delegateDidFinishLoading : 1;
		unsigned delegateDidFailLoading : 1;
		unsigned delegateDidChangeZoomScale : 1;
	} flags;
}
-(void)drawLayer:(id)layer inContext:(CGContextRef)context;
-(BOOL)tiledLayer:(id)layer canDrawRect:(CGRect)rect levelOfDetail:(int)detail;
@end
