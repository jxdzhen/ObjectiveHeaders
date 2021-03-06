/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"

@class NSString, NSError;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemMoveOperation : NSOperation {
@private
	id _delegate;
	NSString* _sourcePath;
	NSString* _destinationPath;
	NSError* _error;
}
+(id)_errorWithErrno:(int)errno sourcePath:(id)path destinationPath:(id)path3;
+(id)filesystemItemMoveOperationWithSourcePath:(id)sourcePath destinationPath:(id)path;
-(void)initWithSourcePath:(id)sourcePath destinationPath:(id)path;
-(void)_setError:(id)error;
-(void)dealloc;
-(id)delegate;
-(id)error;
-(BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;
-(void)main;
-(void)setDelegate:(id)delegate;
@end

