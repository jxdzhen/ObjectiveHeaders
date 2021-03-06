/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "SKRequest.h"

@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest {
@private
	id _productsRequestInternal;
}
@property(assign, nonatomic) id<SKProductsRequestDelegate> delegate;	// @dynamic
-(id)init;
-(id)initWithProductIdentifiers:(id)productIdentifiers;
-(id)_newResponseFromDictionary:(id)dictionary;
-(void)dealloc;
-(BOOL)handleFinishResponse:(id)response returningError:(id*)error;
-(void)issueRequestForIdentifier:(id)identifier;
@end

