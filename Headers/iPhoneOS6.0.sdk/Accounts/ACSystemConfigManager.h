/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Accounts-Structs.h"


@interface ACSystemConfigManager : XXUnknownSuperclass {
	SCPreferencesRef _prefs;
	BOOL _notifyForExternalChangeOnly;
	int _applySkipCount;
}
+(id)sharedInstance;
-(id)init;
-(void)_keepAlive;
-(void)_tearDown;
-(int)accountsWithAccountTypeIdentifierExist:(id)accountTypeIdentifierExist;
-(int)countOfAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier;
-(void)dealloc;
-(void*)getValueForKey:(id)key;
-(void)initializeSCPrefs:(id)prefs;
-(BOOL)lockPrefs;
-(void)notifyTarget:(unsigned)target;
-(void)setAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier exist:(BOOL)exist;
-(void)setCallback:(/*function-pointer*/ void*)callback withContext:(XXStruct_K1psTC*)context;
-(void)setCountOfAccounts:(int)accounts withAccountTypeIdentifier:(id)accountTypeIdentifier;
-(void)setValue:(void*)value forKey:(id)key;
-(void)synchronize;
-(void)unlockPrefs;
@end

