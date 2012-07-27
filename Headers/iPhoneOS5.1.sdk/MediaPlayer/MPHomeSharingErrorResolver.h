/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSAuthorizationRequestDelegate.h"

@class SSAuthorizationRequest, MPHomeSharingML3DataProvider, NSData, NSURL, NSError;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {
@private
	unsigned long long _accountID;
	MPHomeSharingML3DataProvider* _dataProvider;
	NSError* _error;
	NSURL* _keybagURL;
	SSAuthorizationRequest* _request;
	NSData* _tokenData;
}
@property(retain, nonatomic) MPHomeSharingML3DataProvider* dataProvider;	// @synthesize=_dataProvider
-(id)initWithTokenData:(id)tokenData forAccountID:(unsigned long long)accountID keybagURL:(id)url;
-(BOOL)_errorIsFairPlayError:(id)error;
-(void)authorizationRequest:(id)request didReceiveResponse:(id)response;
// declared property getter: -(id)dataProvider;
-(void)dealloc;
-(void)request:(id)request didFailWithError:(id)error;
-(void)requestDidFinish:(id)request;
-(void)resolveError:(id)error;
// declared property setter: -(void)setDataProvider:(id)provider;
@end
