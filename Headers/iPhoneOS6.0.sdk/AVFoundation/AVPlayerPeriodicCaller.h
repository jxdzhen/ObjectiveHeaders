/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVPlayerTimelyCaller.h"


@interface AVPlayerPeriodicCaller : AVPlayerTimelyCaller {
	XXStruct_pwHToB _intervalRequested;
	XXStruct_pwHToB _lastIntervalUsed;
	XXStruct_pwHToB _lastFireTime;
	XXStruct_pwHToB _lastStopTime;
	unsigned _sequenceNum;
	id _block;
	XXStruct_pwHToB _currentTime;
	XXStruct_pwHToB _currentHostTime;
}
-(id)initWithPlayer:(id)player interval:(XXStruct_pwHToB)interval queue:(id)queue block:(id)block;
-(void)_cacheTimebaseTimeAndHostTime;
-(void)_effectiveRateChanged;
-(void)_handleTimeDiscontinuity;
-(void)_resetNextFireTime;
-(void)dealloc;
@end

