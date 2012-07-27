/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@protocol MPMediaPlayback
@property(assign, nonatomic) float currentPlaybackRate;
@property(assign, nonatomic) double currentPlaybackTime;
@property(readonly, assign, nonatomic) BOOL isPreparedToPlay;
-(void)beginSeekingBackward;
-(void)beginSeekingForward;
// declared property getter: -(float)currentPlaybackRate;
// declared property getter: -(double)currentPlaybackTime;
-(void)endSeeking;
// declared property getter: -(BOOL)isPreparedToPlay;
-(void)pause;
-(void)play;
-(void)prepareToPlay;
// declared property setter: -(void)setCurrentPlaybackRate:(float)rate;
// declared property setter: -(void)setCurrentPlaybackTime:(double)time;
-(void)stop;
@end
