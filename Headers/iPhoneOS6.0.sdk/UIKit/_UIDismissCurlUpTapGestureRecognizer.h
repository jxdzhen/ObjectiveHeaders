/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITapGestureRecognizer.h"


__attribute__((visibility("hidden")))
@interface _UIDismissCurlUpTapGestureRecognizer : UITapGestureRecognizer {
@private
	float _curlUpDY;
}
@property(assign, nonatomic, setter=_setCurlUpDY:) float _curlUpDY;	// @synthesize
// declared property getter: -(float)_curlUpDY;
-(BOOL)_delegateShouldReceiveTouch:(id)_delegate;
// declared property setter: -(void)_setCurlUpDY:(float)dy;
-(BOOL)canBePreventedByGestureRecognizer:(id)recognizer;
@end
