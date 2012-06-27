/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MPAVDestinationBrowser : XXUnknownSuperclass {
@private
	BOOL _scansForDestinationsWhenEnteringForeground;
	BOOL _isScanning;
	int _retainCount;
}
@property(assign, nonatomic) BOOL scansForDestinationsWhenEnteringForeground;
-(id)init;
-(void)_beginScanningForDestinationsNotification:(id)destinationsNotification;
-(void)_endScanningForDestinationsNotification:(id)destinationsNotification;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)beginScanningForDestinations;
-(void)dealloc;
-(void)endScanningForDestinations;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
// declared property getter: -(BOOL)scansForDestinationsWhenEnteringForeground;
// declared property setter: -(void)setScansForDestinationsWhenEnteringForeground:(BOOL)destinationsWhenEnteringForeground;
@end
