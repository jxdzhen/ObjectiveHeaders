/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UIKeyboardInput.h"

@class UITextRange, NSDictionary, UITextPosition, UITextInputTraits, UITextSelectionView, UITextInteractionAssistant, UIColor, UIImage;
@protocol UITextInputDelegate, UITextSelectingContent;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput> {
	UITextInputTraits* m_traits;
}
@property(assign, nonatomic) BOOL acceptsEmoji;	// @dynamic
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition* beginningOfDocument;
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent>* content;
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// @dynamic
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// @dynamic
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// @dynamic
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition* endOfDocument;
@property(assign, nonatomic) BOOL forceEnableDictation;
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;
@property(retain, nonatomic) UIColor* insertionPointColor;	// @dynamic
@property(assign, nonatomic) unsigned insertionPointWidth;	// @dynamic
@property(readonly, assign, nonatomic) UITextInteractionAssistant* interactionAssistant;
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign, nonatomic) BOOL learnsCorrections;
@property(readonly, assign, nonatomic) UITextRange* markedTextRange;
@property(copy, nonatomic) NSDictionary* markedTextStyle;
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign, nonatomic, getter=isRichText) BOOL richText;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(copy) UITextRange* selectedTextRange;
@property(assign, nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor* selectionBarColor;
@property(retain, nonatomic) UIImage* selectionDragDotImage;
@property(assign, nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor* selectionHighlightColor;
@property(readonly, assign, nonatomic) UITextSelectionView* selectionView;
@property(assign, nonatomic) int shortcutConversionType;	// @dynamic
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;
@property(readonly, assign, nonatomic) UIResponder<UITextSelection>* textDocument;
@property(readonly, assign, nonatomic) UIView* textInputView;
@property(assign, nonatomic) int textLoupeVisibility;	// @dynamic
@property(assign, nonatomic) int textSelectionBehavior;	// @dynamic
@property(assign, nonatomic) id textSuggestionDelegate;	// @dynamic
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// @dynamic
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;
-(NSRange)_markedTextNSRange;
// declared property getter: -(BOOL)acceptsEmoji;
-(int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;
-(BOOL)becomesEditableWithGestures;
-(void)beginSelectionChange;
// declared property getter: -(id)beginningOfDocument;
-(CGRect)caretRect;
-(CGRect)caretRectForPosition:(id)position;
-(unsigned short)characterAfterCaretSelection;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterInRelationToCaretSelection:(int)caretSelection;
-(id)characterRangeAtPoint:(CGPoint)point;
-(id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;
-(id)closestPositionToPoint:(CGPoint)point;
-(id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;
-(int)comparePosition:(id)position toPosition:(id)position2;
-(void)confirmMarkedText:(id)text;
// declared property getter: -(id)content;
-(CGRect)convertCaretRect:(CGRect)rect;
-(void)dealloc;
-(id)delegate;
-(void)deleteBackward;
-(void)detachInteractionAssistant;
-(void)detachSelectionView;
// declared property getter: -(id)endOfDocument;
-(void)endSelectionChange;
-(void)expandSelectionToStartOfWordContainingCaretSelection;
-(void)extendCurrentSelection:(int)selection;
-(CGRect)firstRectForRange:(id)range;
-(id)fontForCaretSelection;
-(void)forwardInvocation:(id)invocation;
-(BOOL)hasContent;
-(BOOL)hasSelection;
-(BOOL)hasText;
// declared property getter: -(id)inputDelegate;
-(void)insertText:(id)text;
// declared property getter: -(id)interactionAssistant;
-(BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;
-(BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;
-(BOOL)isSecure;
-(BOOL)isShowingPlaceholder;
-(id)markedText;
// declared property getter: -(id)markedTextRange;
// declared property getter: -(id)markedTextStyle;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)moveBackward:(unsigned)backward;
-(void)moveForward:(unsigned)forward;
-(id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;
-(int)offsetFromPosition:(id)position toPosition:(id)position2;
-(id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;
-(id)positionFromPosition:(id)position offset:(int)offset;
-(id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;
-(id)positionWithinRange:(id)range farthestInDirection:(int)direction;
-(id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;
-(id)rangeByExtendingCurrentSelection:(int)selection;
-(id)rangeByMovingCurrentSelection:(int)selection;
-(id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;
-(CGRect)rectContainingCaretSelection;
-(CGRect)rectForNSRange:(NSRange)nsrange;
-(id)rectsForNSRange:(NSRange)nsrange;
-(id)rectsForRange:(id)range;
-(void)replaceCurrentWordWithText:(id)text;
-(void)replaceRange:(id)range withText:(id)text;
-(void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;
-(void)selectAll;
-(id)selectedDOMRange;
// declared property getter: -(id)selectedTextRange;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtWordStart;
-(CGRect)selectionClipRect;
-(NSRange)selectionRange;
-(int)selectionState;
// declared property getter: -(id)selectionView;
// declared property setter: -(void)setAcceptsEmoji:(BOOL)emoji;
-(void)setBaseWritingDirection:(int)direction forRange:(id)range;
-(void)setBecomesEditableWithGestures:(BOOL)gestures;
// declared property setter: -(void)setInputDelegate:(id)delegate;
-(void)setMarkedText:(id)text;
-(void)setMarkedText:(id)text selectedRange:(NSRange)range;
// declared property setter: -(void)setMarkedTextStyle:(id)style;
-(void)setSecure:(BOOL)secure;
-(void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;
// declared property setter: -(void)setSelectedTextRange:(id)range;
-(void)setSelectionWithPoint:(CGPoint)point;
-(void)setText:(id)text;
-(void)setupPlaceholderTextIfNeeded;
-(void)takeTraitsFrom:(id)from;
-(id)text;
-(id)textColorForCaretSelection;
// declared property getter: -(id)textDocument;
-(id)textInRange:(id)range;
-(id)textInputTraits;
-(id)textRangeFromPosition:(id)position toPosition:(id)position2;
// declared property getter: -(id)tokenizer;
-(void)unmarkText;
-(void)updateSelection;
-(CGRect)visibleBounds;
-(id)wordContainingCaretSelection;
-(int)wordOffsetInRange:(id)range;
-(id)wordRangeContainingCaretSelection;
@end

