/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSProcessInfo.h>

@class NSURL, NSSet, ACAccountStore, NSString;

@interface ACAccountType : NSProcessInfo {
@private
	NSString* _accountTypeDescription;
	NSString* _identifier;
	NSString* _credentialType;
	int _credentialAvailability;
	NSURL* _objectID;
	int _visibility;
	id _credentialProtectionPolicy;
	ACAccountStore* _accountStore;
	int _supportsAuthentication;
	NSSet* _supportedDataclasses;
	NSSet* _syncableDataclasses;
}
@property(readonly, assign, nonatomic) BOOL accessGranted;
@property(assign, nonatomic) __weak ACAccountStore* accountStore;	// @synthesize=_accountStore
@property(readonly, assign, nonatomic) NSString* accountTypeDescription;	// @synthesize=_accountTypeDescription
@property(readonly, assign, nonatomic) BOOL authenticationSupported;
@property(assign, nonatomic) int credentialAvailability;
@property(copy, nonatomic) id credentialProtectionPolicy;
@property(readonly, assign, nonatomic) NSString* credentialType;	// @synthesize=_credentialType
@property(readonly, assign, nonatomic) NSString* identifier;	// @synthesize=_identifier
@property(retain, nonatomic) NSURL* objectID;	// @synthesize=_objectID
@property(readonly, assign, nonatomic) NSSet* supportedDataclasses;	// @synthesize=_supportedDataclasses
@property(assign, nonatomic) int supportsAuthentication;	// @synthesize=_supportsAuthentication
@property(readonly, assign, nonatomic) NSSet* syncableDataclasses;	// @synthesize=_syncableDataclasses
@property(assign, nonatomic) int visibility;
+(id)accessKeysForAccountTypeWithIdentifier:(id)identifier;
+(id)persistentAccessKeysForAccountTypeWithIdentifier:(id)identifier;
-(id)initWithCoder:(id)coder;
-(id)initWithIdentifier:(id)identifier description:(id)description;
-(void).cxx_destruct;
// declared property getter: -(BOOL)accessGranted;
// declared property getter: -(id)accountStore;
// declared property getter: -(id)accountTypeDescription;
// declared property getter: -(BOOL)authenticationSupported;
// declared property getter: -(int)credentialAvailability;
// declared property getter: -(id)credentialProtectionPolicy;
// declared property getter: -(id)credentialType;
-(id)description;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)identifier;
// declared property getter: -(id)objectID;
// declared property setter: -(void)setAccountStore:(id)store;
-(void)setAccountTypeDescription:(id)description;
// declared property setter: -(void)setCredentialAvailability:(int)availability;
// declared property setter: -(void)setCredentialProtectionPolicy:(id)policy;
-(void)setCredentialType:(id)type;
-(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setObjectID:(id)anId;
// declared property setter: -(void)setSupportsAuthentication:(int)authentication;
// declared property setter: -(void)setVisibility:(int)visibility;
// declared property getter: -(id)supportedDataclasses;
// declared property getter: -(int)supportsAuthentication;
// declared property getter: -(id)syncableDataclasses;
// declared property getter: -(int)visibility;
@end
