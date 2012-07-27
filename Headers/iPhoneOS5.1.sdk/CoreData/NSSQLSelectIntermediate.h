/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSArray, NSString, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLSelectIntermediate : NSSQLIntermediate {
@private
	NSSQLEntity* _entity;
	NSString* _entityAlias;
	NSString* _correlationTarget;
	NSArray* _fetchColumns;
	BOOL _useDistinct;
	NSString* _columnAlias;
	BOOL _isCount;
}
-(id)initForCorrelationTarget:(id)correlationTarget alias:(id)alias fetchColumns:(id)columns inScope:(id)scope;
-(id)initWithEntity:(id)entity alias:(id)alias fetchColumns:(id)columns inScope:(id)scope;
-(void)dealloc;
-(id)generateSQLStringInContext:(id)context;
-(BOOL)isSelectTargetScoped;
-(BOOL)onlyFetchesAggregates;
-(void)setColumnAlias:(id)alias;
-(void)setFetchColumns:(id)columns;
-(void)setFetchEntity:(id)entity;
-(void)setIsCount:(BOOL)count;
-(void)setUseDistinct:(BOOL)distinct;
@end
