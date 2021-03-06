/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBCandidateView.h"
#import "UIKBKeyView.h"
#import "UIKeyboardCandidateList.h"

@class UIKeyboardCandidateScrollViewController, NSArray, UIColor, NSMutableArray;
@protocol UIKeyboardCandidateListDelegate;

__attribute__((visibility("hidden")))
@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateList> {
@private
	NSArray* m_candidates;
	NSMutableArray* m_buttons;
	id<UIKeyboardCandidateListDelegate> m_delegate;
	UIKeyboardCandidateScrollViewController* m_scrollViewController;
	int m_columns;
	int m_candidatesPerColumn;
	int m_candidatesPerPage;
	int m_current;
	int m_firstShown;
	int m_firstComposition;
	int m_candidateCount;
	CGRect m_symbolRect;
	UIColor* m_textColor;
	CGColorRef m_highlightColor;
	BOOL m_respondsToSelect;
	BOOL m_respondsToAccept;
}
-(id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;
-(id).cxx_construct;
-(void)candidateAcceptedAtIndex:(unsigned)index;
-(id)candidateAtIndex:(unsigned)index;
-(id)candidateList;
-(void)configureKeyboard:(id)keyboard;
-(unsigned)count;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)dealloc;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layout;
-(void)nextCandidatesAction;
-(void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;
-(void)setUIKeyboardCandidateListDelegate:(id)delegate;
-(void)showCandidateAtIndex:(unsigned)index;
-(void)showNextCandidate;
-(void)showNextPage;
-(void)showPageAtIndex:(unsigned)index;
-(void)showPreviousCandidate;
-(void)showPreviousPage;
-(void)updateForKeyboard:(id)keyboard key:(id)key;
@end

@interface UIKBCandidateView (Internal)
-(void)jumpToCompositions;
-(void)selectCandidate:(id)candidate;
@end

