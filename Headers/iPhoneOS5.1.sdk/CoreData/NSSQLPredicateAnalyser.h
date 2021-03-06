/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSPredicateVisitor.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLPredicateAnalyser : XXUnknownSuperclass <NSPredicateVisitor> {
@private
	BOOL _compoundPredicate;
	NSMutableArray* _keys;
	NSMutableArray* _allModifierPredicates;
	NSMutableArray* _setExpressions;
	NSMutableArray* _subqueries;
}
-(id)init;
-(id)allModifierPredicates;
-(void)dealloc;
-(id)keypaths;
-(id)setExpressions;
-(id)subqueries;
-(void)visitPredicate:(id)predicate;
-(void)visitPredicateExpression:(id)expression;
-(void)visitPredicateOperator:(id)anOperator;
@end

