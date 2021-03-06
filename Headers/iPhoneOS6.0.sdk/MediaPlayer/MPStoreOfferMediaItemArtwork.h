/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItemArtwork.h"

@class NSArray;

@interface MPStoreOfferMediaItemArtwork : MPMediaItemArtwork {
@private
	NSArray* _artworkDictionaries;
	NSArray* _containerArtworkDictionaries;
}
-(id)initWithStoreItemArtworkDictionaries:(id)storeItemArtworkDictionaries containerArtworkDictionaries:(id)dictionaries;
-(id)_bestImageURLForSize:(CGSize)size container:(BOOL)container;
-(id)_imageWithURL:(id)url;
-(id)albumImageDataWithSize:(CGSize)size;
-(id)albumImageWithFormat:(int)format;
-(id)albumImageWithFormat:(int)format artworkCacheID:(id)anId;
-(id)albumImageWithFormat:(int)format artworkCacheID:(id)anId canUseSurfaceBackedImage:(BOOL)image;
-(id)albumImageWithSize:(CGSize)size;
-(id)coverFlowImageWithSize:(CGSize)size;
-(void)dealloc;
-(BOOL)hasArtworkAvailable;
-(id)imageDataWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;
-(id)imageWithSize:(CGSize)size;
-(id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;
@end

