/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, AVCaptureSessionInternal, NSString;

@interface AVCaptureSession : XXUnknownSuperclass {
@private
	AVCaptureSessionInternal* _internal;
}
@property(readonly, assign, nonatomic) NSArray* inputs;
@property(readonly, assign, nonatomic, getter=isInterrupted) BOOL interrupted;
@property(readonly, assign, nonatomic) NSArray* outputs;
@property(readonly, assign, nonatomic, getter=isRunning) BOOL running;
@property(copy, nonatomic) NSString* sessionPreset;
+(id)avCaptureSessionPlist;
+(void)initialize;
-(id)init;
-(void)_addConnection:(id)connection;
-(id)_addFastSwitchOptionsToCaptureOptions:(id)captureOptions forDevice:(id)device preset:(id)preset;
-(void)_addInputWithNoConnections:(id)noConnections;
-(void)_addOutputWithNoConnections:(id)noConnections;
-(id)_applyOverridesToCaptureOptions:(id)captureOptions;
-(void)_beginConfiguration;
-(void)_beginSessionUpdates;
-(BOOL)_buildAndRunGraph;
-(BOOL)_canAddConnection:(id)connection failureReason:(id*)reason;
-(BOOL)_canAddInput:(id)input failureReason:(id*)reason;
-(BOOL)_canAddOutput:(id)output failureReason:(id*)reason;
-(void)_commitConfiguration;
-(id)_connectionsForNewInputPort:(id)newInputPort;
-(id)_connectionsForNewOutput:(id)newOutput;
-(id)_createCaptureOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3 errorStatus:(int*)status;
-(long)_createRecorderIfNeeded;
-(id)_currentVideoDevice;
-(void)_doDidStart;
-(void)_doDidStartSources;
-(void)_doDidStop:(id)_do;
-(void)_doWillStart;
-(void)_endSessionUpdates;
-(id)_errorForFigRecorderNotification:(id)figRecorderNotification;
-(void)_excludeOutputsForCaptureOptions:(id)captureOptions;
-(BOOL)_figRecorderOldOptionsAreEqual:(id)equal toNewOptions:(id)newOptions livesourceOptionsAreEqual:(BOOL*)equal3;
-(id)_figRecorderOptionsForPreset:(id)preset audioDevice:(id)device videoDevice:(id)device3;
-(void)_handleNotification:(id)notification payload:(id)payload;
-(id)_liveConnections;
-(void)_postRuntimeError:(id)error;
-(void)_rebuildGraph;
-(void)_rebuildInternalCaptureOptions;
-(void)_removeConnection:(id)connection;
-(void)_removeConnectionsForInputPort:(id)inputPort;
-(void)_removeVideoPreviewLayerConnectionsForInputPort:(id)inputPort;
-(BOOL)_sessionHasEnabledMovieFileOutput;
-(void)_setInterrupted:(BOOL)interrupted;
-(void)_setRunning:(BOOL)running;
-(BOOL)_startPreviewing;
-(long)_startRecording;
-(void)_stopAndTearDownGraph;
-(id)_stopError;
-(BOOL)_stopPreviewing;
-(long)_stopRecording;
-(void)_teardownFigRecorder;
-(void)addConnection:(id)connection;
-(void)addInput:(id)input;
-(void)addInputWithNoConnections:(id)noConnections;
-(void)addOutput:(id)output;
-(void)addOutputWithNoConnections:(id)noConnections;
-(void)beginConfiguration;
-(BOOL)canAddConnection:(id)connection;
-(BOOL)canAddInput:(id)input;
-(BOOL)canAddOutput:(id)output;
-(BOOL)canSetSessionPreset:(id)preset;
-(id)captureOptions;
-(void)commitConfiguration;
-(void)dealloc;
-(id)description;
-(id)inputWithClass:(Class)aClass;
// declared property getter: -(id)inputs;
-(BOOL)isBeingConfigured;
// declared property getter: -(BOOL)isInterrupted;
-(BOOL)isPreviewing;
// declared property getter: -(BOOL)isRunning;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)outputWithClass:(Class)aClass;
// declared property getter: -(id)outputs;
-(OpaqueFigRecorder*)recorder;
-(void)removeConnection:(id)connection;
-(void)removeInput:(id)input;
-(void)removeOutput:(id)output;
-(void)removeVideoPreviewLayer;
// declared property getter: -(id)sessionPreset;
// declared property setter: -(void)setSessionPreset:(id)preset;
-(void)setVideoPreviewLayer:(id)layer;
-(void)startRunning;
-(void)stopRunning;
-(id)videoPreviewLayer;
-(void)videoPreviewLayerPropertiesChanged;
@end

