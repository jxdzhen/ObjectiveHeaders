/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"


@interface NSSetExpression : NSExpression {
@private
	NSExpression* _left;
	NSExpression* _right;
}
-(id)initWithCoder:(id)coder;
-(id)initWithType:(unsigned)type leftExpression:(id)expression rightExpression:(id)expression3;
-(id)_expressionWithSubstitutionVariables:(id)substitutionVariables;
-(void)acceptVisitor:(id)visitor flags:(unsigned)flags;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)expressionValueWithObject:(id)object context:(id)context;
-(BOOL)isEqual:(id)equal;
-(id)leftExpression;
-(id)predicateFormat;
-(id)rightExpression;
@end
