/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransportControls.h"
#import "MediaPlayer-Structs.h"


@interface MPInlineAudioTransportControls : MPTransportControls {
@private
	int _style;
}
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(id)buttonImageForPart:(unsigned long long)part;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(id)newVolumeSlider;
-(id)pauseButtonImage;
-(id)playButtonImage;
-(void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;
@end

