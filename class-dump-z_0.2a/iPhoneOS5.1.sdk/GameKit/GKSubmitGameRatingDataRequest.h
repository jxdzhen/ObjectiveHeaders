/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class GKGame;

@interface GKSubmitGameRatingDataRequest : GKDataRequest {
@private
	GKGame* _game;
	float _rating;
}
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(assign, nonatomic) float rating;	// @synthesize=_rating
-(void)dealloc;
// declared property getter: -(id)game;
-(id)key;
// declared property getter: -(float)rating;
-(id)request;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setRating:(float)rating;
@end
