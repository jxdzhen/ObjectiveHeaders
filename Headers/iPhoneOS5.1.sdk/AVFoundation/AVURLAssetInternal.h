/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AVAssetInspectorLoader, NSArray, NSString, NSURL;
@protocol AVURLAssetFailedURLRequestHandling;

@interface AVURLAssetInternal : XXUnknownSuperclass {
	AVAssetInspectorLoader* loader;
	NSURL* URL;
	NSArray* tracks;
	NSArray* chapterGroupInfo;
	NSString* anchorChapterType;
	id<AVURLAssetFailedURLRequestHandling> failedURLRequestDelegate;
}
@end
