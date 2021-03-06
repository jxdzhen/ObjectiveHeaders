/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVMediaFileType, AVAssetWriterConfigurationState, AVWeakReference, NSError, NSURL, NSArray;

@interface AVAssetWriterHelper : XXUnknownSuperclass {
@private
	AVAssetWriterConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriter;
}
@property(readonly, assign, nonatomic) NSArray* availableMediaTypes;
@property(readonly, assign, nonatomic) AVAssetWriterConfigurationState* configurationState;	// @synthesize=_configurationState
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) NSArray* inputGroups;
@property(readonly, assign, nonatomic) NSArray* inputs;
@property(readonly, assign, nonatomic) AVMediaFileType* mediaFileType;
@property(copy, nonatomic) NSArray* metadata;
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;
@property(assign, nonatomic) int movieTimeScale;
@property(readonly, assign, nonatomic) NSURL* outputURL;
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;
@property(readonly, assign, nonatomic) int status;
@property(retain) AVWeakReference* weakReferenceToAssetWriter;	// @synthesize=_weakReferenceToAssetWriter
-(id)init;
-(id)initWithConfigurationState:(id)configurationState;
-(BOOL)_canApplyOutputSettings:(id)settings forMediaType:(id)mediaType exceptionReason:(id*)reason;
-(BOOL)_canApplyTrackReferences:(id)references exceptionReason:(id*)reason;
-(void)_transitionToClientInitiatedTerminalStatus:(int)clientInitiatedTerminalStatus;
-(void)addInput:(id)input;
-(void)addInputGroup:(id)group;
// declared property getter: -(id)availableMediaTypes;
-(BOOL)canAddInput:(id)input;
-(BOOL)canAddInputGroup:(id)group;
-(BOOL)canApplyOutputSettings:(id)settings forMediaType:(id)mediaType;
-(void)cancelWriting;
// declared property getter: -(id)configurationState;
-(void)dealloc;
-(void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;
// declared property getter: -(id)error;
-(void)finishWriting;
// declared property getter: -(id)inputGroups;
// declared property getter: -(id)inputs;
// declared property getter: -(id)mediaFileType;
// declared property getter: -(id)metadata;
// declared property getter: -(XXStruct_pwHToB)movieFragmentInterval;
// declared property getter: -(int)movieTimeScale;
// declared property getter: -(id)outputURL;
// declared property setter: -(void)setMetadata:(id)metadata;
// declared property setter: -(void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;
// declared property setter: -(void)setMovieTimeScale:(int)scale;
// declared property setter: -(void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;
// declared property setter: -(void)setWeakReferenceToAssetWriter:(id)assetWriter;
// declared property getter: -(BOOL)shouldOptimizeForNetworkUse;
-(void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;
-(void)startWriting;
// declared property getter: -(int)status;
-(void)transitionToFailedStatusWithError:(id)error;
// declared property getter: -(id)weakReferenceToAssetWriter;
@end

