/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollView.h"
#import "UITableView.h"

@class NSMutableArray, UISwipeGestureRecognizer, NSArray, NSTimer, NSIndexPath, NSMutableDictionary, UIGestureRecognizer, UILongPressGestureRecognizer, UITableViewCell, UIColor;
@protocol UITableViewDataSource, UITableViewDelegate;

@interface UITableView : UIScrollView <NSCoding> {
@private
	int _style;
	id<UITableViewDataSource> _dataSource;
	id _rowData;
	float _rowHeight;
	float _sectionHeaderHeight;
	float _sectionFooterHeight;
	CGRect _visibleBounds;
	NSRange _visibleRows;
	NSMutableArray* _visibleCells;
	NSIndexPath* _firstResponderIndexPath;
	UIView* _firstResponderView;
	unsigned _firstResponderViewType;
	NSMutableDictionary* _reusableTableCells;
	NSMutableDictionary* _nibMap;
	NSMutableDictionary* _nibExternalObjectsTables;
	UITableViewCell* _topSeparatorCell;
	id _topSeparator;
	NSMutableArray* _extraSeparators;
	CFDictionaryRef _visibleHeaderViews;
	CFDictionaryRef _visibleFooterViews;
	NSMutableArray* _reusableHeaderViews;
	NSMutableArray* _reusableFooterViews;
	NSMutableArray* _reusableTransparentHeaderViews;
	NSMutableArray* _reusableTransparentFooterViews;
	NSMutableArray* _highlightedIndexPaths;
	NSMutableArray* _selectedIndexPaths;
	int _swipeToDeleteSection;
	int _swipeToDeleteRow;
	NSIndexPath* _pendingSelectionIndexPath;
	NSArray* _pendingDeselectionIndexPaths;
	UIView* _touchedContentView;
	UIView* _newContentView;
	id _deleteAnimationSupport;
	id _reorderingSupport;
	UIView* _backgroundView;
	UIView* _index;
	UIView* _tableHeaderBackgroundView;
	UIView* _tableHeaderView;
	UIView* _tableFooterView;
	id _countLabel;
	int _tableReloadingSuspendedCount;
	int _tableDisplaySuspendedCount;
	int _sectionIndexMinimumDisplayRowCount;
	int _itemCountFooterMinimumDisplayRowCount;
	NSMutableArray* _insertItems;
	NSMutableArray* _deleteItems;
	NSMutableArray* _reloadItems;
	NSMutableArray* _moveItems;
	UIColor* _separatorColor;
	UIColor* _separatorTopShadowColor;
	UIColor* _separatorBottomShadowColor;
	UIColor* _checkmarkColor;
	UIColor* _sectionBorderColor;
	UIColor* _indexColor;
	UIColor* _indexBackgroundColor;
	NSArray* _defaultSectionIndexTitles;
	UISwipeGestureRecognizer* _swipeGestureRecognizer;
	UIGestureRecognizer* _gobblerGestureRecognizer;
	int _updateCount;
	NSIndexPath* _displayingCellContentStringIndexPath;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSTimer* _longPressAutoscrollTimer;
	int _longPressAutoscrollDirection;
	UIEdgeInsets _sectionContentInset;
	id _reserved;
	struct {
		unsigned dataSourceNumberOfRowsInSection : 1;
		unsigned dataSourceCellForRow : 1;
		unsigned dataSourceNumberOfSectionsInTableView : 1;
		unsigned dataSourceTitleForHeaderInSection : 1;
		unsigned dataSourceTitleForFooterInSection : 1;
		unsigned dataSourceDetailTextForHeaderInSection : 1;
		unsigned dataSourceCommitEditingStyle : 1;
		unsigned dataSourceSectionIndexTitlesForTableView : 1;
		unsigned dataSourceSectionForSectionIndexTitle : 1;
		unsigned dataSourceCanEditRow : 1;
		unsigned dataSourceCanMoveRow : 1;
		unsigned dataSourceCanUpdateRow : 1;
		unsigned dataSourceShouldShowMenu : 1;
		unsigned dataSourceCanPerformAction : 1;
		unsigned dataSourcePerformAction : 1;
		unsigned dataSourceIndexPathForSectionIndexTitle : 1;
		unsigned delegateEditingStyleForRowAtIndexPath : 1;
		unsigned delegateTitleForDeleteConfirmationButtonForRowAtIndexPath : 1;
		unsigned delegateShouldIndentWhileEditing : 1;
		unsigned dataSourceMoveRow : 1;
		unsigned delegateCellForRow : 1;
		unsigned delegateWillDisplayCell : 1;
		unsigned delegateHeightForRow : 1;
		unsigned delegateHeightForSectionHeader : 1;
		unsigned delegateTitleWidthForSectionHeader : 1;
		unsigned delegateHeightForSectionFooter : 1;
		unsigned delegateTitleWidthForSectionFooter : 1;
		unsigned delegateViewForHeaderInSection : 1;
		unsigned delegateViewForFooterInSection : 1;
		unsigned delegateDisplayedItemCountForRowCount : 1;
		unsigned delegateDisplayStringForRowCount : 1;
		unsigned delegateAccessoryTypeForRow : 1;
		unsigned delegateAccessoryButtonTappedForRow : 1;
		unsigned delegateWillSelectRow : 1;
		unsigned delegateWillDeselectRow : 1;
		unsigned delegateDidSelectRow : 1;
		unsigned delegateDidDeselectRow : 1;
		unsigned delegateWillBeginEditing : 1;
		unsigned delegateDidEndEditing : 1;
		unsigned delegateWillMoveToRow : 1;
		unsigned delegateIndentationLevelForRow : 1;
		unsigned delegateWantsHeaderForSection : 1;
		unsigned delegateHeightForRowsInSection : 1;
		unsigned delegateMargin : 1;
		unsigned delegateHeaderTitleAlignment : 1;
		unsigned delegateFooterTitleAlignment : 1;
		unsigned delegateFrameForSectionIndexGivenProposedFrame : 1;
		unsigned delegateDidFinishReload : 1;
		unsigned delegateHeightForHeader : 1;
		unsigned delegateHeightForFooter : 1;
		unsigned delegateViewForHeader : 1;
		unsigned delegateViewForFooter : 1;
		unsigned delegateCalloutTargetRectForCell;
		unsigned delegateShouldShowMenu : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateWillBeginReordering : 1;
		unsigned delegateDidEndReordering : 1;
		unsigned delegateDidCancelReordering : 1;
		unsigned style : 1;
		unsigned separatorStyle : 3;
		unsigned wasEditing : 1;
		unsigned isEditing : 1;
		unsigned scrollsToSelection : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned updating : 1;
		unsigned displaySkippedDuringSuspension : 1;
		unsigned needsReload : 1;
		unsigned updatingVisibleCellsManually : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned scheduledUpdateVisibleCellsFrames : 1;
		unsigned warnForForcedCellUpdateDisabled : 1;
		unsigned displayTopSeparator : 1;
		unsigned countStringInsignificantRowCount : 4;
		unsigned needToAdjustExtraSeparators : 1;
		unsigned overlapsSectionHeaderViews : 1;
		unsigned ignoreDragSwipe : 1;
		unsigned ignoreTouchSelect : 1;
		unsigned lastHighlightedRowActive : 1;
		unsigned reloading : 1;
		unsigned allowsSelection : 1;
		unsigned allowsSelectionDuringEditing : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowsMultipleSelectionDuringEditing : 1;
		unsigned showsSelectionImmediatelyOnTouchBegin : 1;
		unsigned indexHidden : 1;
		unsigned indexHiddenForSearch : 1;
		unsigned defaultShowsHorizontalScrollIndicator : 1;
		unsigned defaultShowsVerticalScrollIndicator : 1;
		unsigned sectionIndexTitlesLoaded : 1;
		unsigned tableHeaderViewShouldAutoHide : 1;
		unsigned tableHeaderViewIsHidden : 1;
		unsigned tableHeaderViewWasHidden : 1;
		unsigned hideScrollIndicators : 1;
		unsigned sendReloadFinished : 1;
		unsigned keepFirstResponderWhenInteractionDisabled : 1;
		unsigned keepFirstResponderVisibleOnBoundsChange : 1;
		unsigned dontDrawTopShadowInGroupedSections : 1;
		unsigned forceStaticHeadersAndFooters;
		unsigned displaysCellContentStringsOnTapAndHold : 1;
		unsigned displayingCellContentStringCallout : 1;
		unsigned longPressAutoscrollingActive : 1;
		unsigned adjustsRowHeightsForSectionLocation : 1;
		unsigned customSectionContentInsetSet : 1;
	} _tableFlags;
	unsigned _selectedSection;
	unsigned _selectedRow;
	unsigned _lastSelectedSection;
	unsigned _lastSelectedRow;
}
@property(assign, nonatomic) BOOL allowsMultipleSelection;
@property(assign, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property(assign, nonatomic) BOOL allowsSelection;
@property(assign, nonatomic) BOOL allowsSelectionDuringEditing;
@property(retain, nonatomic) UIView* backgroundView;
@property(assign, nonatomic) id<UITableViewDataSource> dataSource;
@property(assign, nonatomic) id<UITableViewDelegate> delegate;
@property(assign, nonatomic, getter=isEditing) BOOL editing;
@property(assign, nonatomic) float rowHeight;
@property(assign, nonatomic, getter=_sectionContentInset, setter=_setSectionContentInset:) UIEdgeInsets sectionContentInset;	// @synthesize=_sectionContentInset
@property(assign, nonatomic) float sectionFooterHeight;
@property(assign, nonatomic) float sectionHeaderHeight;
@property(assign, nonatomic) int sectionIndexMinimumDisplayRowCount;	// @synthesize=_sectionIndexMinimumDisplayRowCount
@property(retain, nonatomic) UIColor* separatorColor;
@property(assign, nonatomic) int separatorStyle;
@property(readonly, assign, nonatomic) int style;
@property(retain, nonatomic) UIView* tableFooterView;
@property(retain, nonatomic) UIView* tableHeaderView;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(BOOL)_adjustsRowHeightsForSectionLocation;
-(id)_arrayForUpdateAction:(int)updateAction;
-(void)_backgroundColorAnimationDidStop;
-(void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;
-(BOOL)_beginTrackingWithEvent:(id)event;
-(BOOL)_canSelectRowContainingHitView:(id)view;
-(BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;
-(CGSize)_contentSize;
-(float)_contentWidthForCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;
-(BOOL)_isRowMultiSelect:(id)select;
-(void)_numberOfRowsDidChange;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)_rectChangedWithNewSize:(CGSize)newSize oldSize:(CGSize)size;
-(CGRect)_rectForTableFooterView;
-(CGRect)_rectForTableHeaderView;
-(void)_reloadDataIfNeeded;
-(void)_scrollFirstResponderCellToVisible:(BOOL)visible;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;
-(void)_scrollViewWillEndDraggingWithVelocity:(CGPoint)_scrollView targetContentOffset:(CGPoint*)offset;
-(BOOL)_scrollsToMakeFirstResponderVisible;
// declared property getter: -(UIEdgeInsets)_sectionContentInset;
-(void)_selectAllSelectedRows;
-(void)_selectRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position notifyDelegate:(BOOL)delegate;
-(void)_setAdjustsRowHeightsForSectionLocation:(BOOL)sectionLocation;
-(void)_setBackgroundColor:(id)color animated:(BOOL)animated;
-(void)_setExternalObjectTable:(id)table forNibLoadingOfCellWithReuseIdentifier:(id)reuseIdentifier;
// declared property setter: -(void)_setSectionContentInset:(UIEdgeInsets)inset;
-(void)_setupTableViewCommon;
-(BOOL)_shouldHighlightInsteadOfSelectRowAtIndexPath:(id)indexPath;
-(void)_tableViewDeferredTouchesBegan:(id)began;
-(void)_updateRowsAtIndexPaths:(id)indexPaths updateAction:(int)action withRowAnimation:(int)rowAnimation;
-(void)_updateSections:(id)sections updateAction:(int)action withRowAnimation:(int)rowAnimation;
-(void)_updateTableHeaderViewForAutoHideWithVelocity:(float)velocity targetOffset:(CGPoint*)offset;
-(void)_userSelectRowAtPendingSelectionIndexPath:(id)pendingSelectionIndexPath;
-(id)_visibleCells;
// declared property getter: -(BOOL)allowsMultipleSelection;
// declared property getter: -(BOOL)allowsMultipleSelectionDuringEditing;
// declared property getter: -(BOOL)allowsSelection;
// declared property getter: -(BOOL)allowsSelectionDuringEditing;
// declared property getter: -(id)backgroundView;
-(void)beginUpdates;
-(BOOL)canHandleSwipes;
-(BOOL)cancelTouchTracking;
-(id)cellForRowAtIndexPath:(id)indexPath;
// declared property getter: -(id)dataSource;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)deleteRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;
-(void)deleteSections:(id)sections withRowAnimation:(int)rowAnimation;
-(id)dequeueReusableCellWithIdentifier:(id)identifier;
-(void)deselectRowAtIndexPath:(id)indexPath animated:(BOOL)animated;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)coder;
-(void)endUpdates;
-(void)endUpdatesWithContext:(id)context;
-(int)globalRowForRowAtIndexPath:(id)indexPath;
-(void)handleSwipe:(id)swipe;
-(void)highlightRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(CGRect)indexFrame;
-(id)indexPathForCell:(id)cell;
-(id)indexPathForRowAtGlobalRow:(int)globalRow;
-(id)indexPathForRowAtPoint:(CGPoint)point;
-(id)indexPathForSelectedRow;
-(id)indexPathsForRowsInRect:(CGRect)rect;
-(id)indexPathsForSelectedRows;
-(id)indexPathsForVisibleRows;
-(void)insertRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;
-(void)insertSections:(id)sections withRowAnimation:(int)rowAnimation;
// declared property getter: -(BOOL)isEditing;
-(BOOL)isIndexHidden;
-(void)layoutSubviews;
-(unsigned)maximumNumberOfSectionIndexTitlesWithoutTruncation;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(void)moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath2;
-(void)moveSection:(int)section toSection:(int)section2;
-(void)noteNumberOfRowsChanged;
-(int)numberOfRowsInSection:(int)section;
-(int)numberOfSections;
-(BOOL)overlapsSectionHeaderViews;
-(CGRect)rectForFooterInSection:(int)section;
-(CGRect)rectForHeaderInSection:(int)section;
-(CGRect)rectForRowAtIndexPath:(id)indexPath;
-(CGRect)rectForSection:(int)section;
-(void)registerNib:(id)nib forCellReuseIdentifier:(id)cellReuseIdentifier;
-(void)reloadData;
-(void)reloadRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;
-(void)reloadSectionIndexTitles;
-(void)reloadSections:(id)sections withRowAnimation:(int)rowAnimation;
-(void)resizeSubviewsWithOldSize:(CGSize)oldSize;
// declared property getter: -(float)rowHeight;
-(void)scrollToNearestSelectedRowAtScrollPosition:(int)scrollPosition animated:(BOOL)animated;
-(void)scrollToRowAtIndexPath:(id)indexPath atScrollPosition:(int)scrollPosition animated:(BOOL)animated;
// declared property getter: -(float)sectionFooterHeight;
// declared property getter: -(float)sectionHeaderHeight;
// declared property getter: -(int)sectionIndexMinimumDisplayRowCount;
-(void)selectRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position;
-(id)separatorBottomShadowColor;
// declared property getter: -(id)separatorColor;
// declared property getter: -(int)separatorStyle;
-(id)separatorTopShadowColor;
// declared property setter: -(void)setAllowsMultipleSelection:(BOOL)selection;
// declared property setter: -(void)setAllowsMultipleSelectionDuringEditing:(BOOL)editing;
// declared property setter: -(void)setAllowsSelection:(BOOL)selection;
// declared property setter: -(void)setAllowsSelectionDuringEditing:(BOOL)editing;
-(void)setBackgroundColor:(id)color;
// declared property setter: -(void)setBackgroundView:(id)view;
-(void)setBounds:(CGRect)bounds;
-(void)setContentInset:(UIEdgeInsets)inset;
-(void)setContentOffset:(CGPoint)offset;
// declared property setter: -(void)setDataSource:(id)source;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setEditing:(BOOL)editing;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)setFrame:(CGRect)frame;
-(void)setIndexHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)setIndexHiddenForSearch:(BOOL)search;
-(void)setOverlapsSectionHeaderViews:(BOOL)views;
// declared property setter: -(void)setRowHeight:(float)height;
// declared property setter: -(void)setSectionFooterHeight:(float)height;
// declared property setter: -(void)setSectionHeaderHeight:(float)height;
// declared property setter: -(void)setSectionIndexMinimumDisplayRowCount:(int)count;
-(void)setSeparatorBottomShadowColor:(id)color;
// declared property setter: -(void)setSeparatorColor:(id)color;
// declared property setter: -(void)setSeparatorStyle:(int)style;
-(void)setSeparatorTopShadowColor:(id)color;
-(void)setShowsHorizontalScrollIndicator:(BOOL)indicator;
-(void)setShowsSelectionImmediatelyOnTouchBegin:(BOOL)begin;
-(void)setShowsVerticalScrollIndicator:(BOOL)indicator;
// declared property setter: -(void)setTableFooterView:(id)view;
// declared property setter: -(void)setTableHeaderView:(id)view;
-(void)setTableHeaderViewShouldAutoHide:(BOOL)autoHide;
-(void)setUsesVariableMargins:(BOOL)margins;
-(BOOL)showsSelectionImmediatelyOnTouchBegin;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(int)style;
-(int)swipe:(int)swipe withEvent:(GSEventRef)event;
-(int)swipeCell:(int)cell atPoint:(CGPoint)point;
// declared property getter: -(id)tableFooterView;
// declared property getter: -(id)tableHeaderView;
-(BOOL)tableHeaderViewShouldAutoHide;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(BOOL)touchesShouldCancelInContentView:(id)touches;
-(void)unhighlightRowAtIndexPath:(id)indexPath animated:(BOOL)animated;
-(BOOL)usesVariableMargins;
-(id)visibleCells;
@end

@interface UITableView (SyntheticEvents)
-(id)_scriptingInfo;
@end

@interface UITableView (_UITableViewPrivate) <UIGestureRecognizerDelegate>
-(void)_accessoryButtonAction:(id)action;
-(int)_accessoryTypeForCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)_addContentSubview:(id)subview atBack:(BOOL)back;
-(void)_adjustCountLabel;
-(void)_adjustExtraSeparators;
-(void)_adjustReusableTableCells;
-(void)_adjustTableHeaderAndFooterViews;
-(float)_animationDuration;
-(BOOL)_canEditRowAtIndexPath:(id)indexPath;
-(BOOL)_canMoveRowAtIndexPath:(id)indexPath;
-(unsigned)_countStringRowCount;
-(id)_defaultBackgroundView;
-(BOOL)_displaysCellContentStringsOnTapAndHold;
-(BOOL)_drawsTopShadowInGroupedSections;
-(int)_editingStyleForRowAtIndexPath:(id)indexPath;
-(void)_endCellAnimationsWithContext:(id)context;
-(void)_ensureRowDataIsLoaded;
-(BOOL)_hasSwipeToDeleteRow;
-(BOOL)_headerAndFooterViewsFloat;
-(void)_installTableViewGestureRecognizers;
-(void)_languageChanged;
-(id)_newSectionViewWithFrame:(CGRect)frame forSection:(int)section isHeader:(BOOL)header;
-(void)_removeTableViewGestureRecognizers;
-(id)_reorderingSupport;
-(void)_resumeReloads;
-(void)_reuseFooterView:(id)view forSection:(int)section;
-(void)_reuseHeaderView:(id)view forSection:(int)section;
-(void)_reuseTableViewCell:(id)cell;
-(void)_scheduleAdjustExtraSeparators;
-(id)_scrollTestExtraResults;
-(BOOL)_scrollToTop;
-(void)_scrollToTopHidingTableHeader:(BOOL)topHidingTableHeader;
-(void)_scrollToTopHidingTableHeaderIfNecessary:(BOOL)topHidingTableHeaderIfNecessary;
-(int)_sectionForFooterView:(id)footerView;
-(int)_sectionForHeaderView:(id)headerView;
-(void)_sectionIndexChanged:(id)changed;
-(id)_sectionIndexColor;
-(id)_sectionIndexTrackingBackgroundColor;
-(void)_sendDidEndEditingForIndexPath:(id)_send;
-(void)_sendWillBeginEditingForIndexPath:(id)_send;
-(void)_setDisplaysCellContentStringsOnTapAndHold:(BOOL)hold;
-(void)_setDrawsTopShadowInGroupedSections:(BOOL)groupedSections;
-(void)_setHeaderAndFooterViewsFloat:(BOOL)aFloat;
-(void)_setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;
-(void)_setNeedsVisibleCellsUpdate:(BOOL)update withFrames:(BOOL)frames;
-(void)_setRowCount:(int)count;
-(void)_setSectionIndexColor:(id)color;
-(void)_setSectionIndexTrackingBackgroundColor:(id)color;
-(void)_setupCellAnimations;
-(BOOL)_shouldDisplayExtraSeparatorsAtOffset:(float*)offset;
-(BOOL)_shouldDisplayTopSeparator;
-(BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)indexPath;
-(void)_suspendReloads;
-(id)_swipeGestureRecognizer;
-(id)_tableViewCellForContentView:(id)contentView;
-(id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(void)_updateAnimationDidStop:(id)_updateAnimation finished:(id)finished context:(id)context;
-(void)_updateBackgroundView;
-(void)_updateBackgroundViewFrame;
-(void)_updateContentSize;
-(void)_updateIndex;
-(void)_updateIndexFrame;
-(void)_updateIndexFrameSuppressingChangeNotification:(BOOL)notification;
-(void)_updateIndexTitles:(id)titles;
-(void)_updateRowData;
-(void)_updateShowScrollIndicatorsFlag;
-(void)_updateTableHeadersAndFootersNow:(BOOL)now;
-(void)_updateTableViewGestureRecognizersForEditing;
-(void)_updateVisibleCellsImmediatelyIfNecessary;
-(void)_updateVisibleCellsNow:(BOOL)now;
-(void)_updateVisibleHeadersAndFootersNow:(BOOL)now;
-(void)_updateWithItems:(id)items updateSupport:(id)support;
-(void)_validateCells;
-(void)_validateSectionHeadersAndFooters;
-(NSRange)_visibleGlobalRowsInRect:(CGRect)rect;
-(id)deleteConfirmationIndexPath;
-(void)flashScrollIndicators;
-(float)heightForAutohidingTableHeaderView;
-(float)heightForTableHeaderViewHiding;
-(id)multiselectCheckmarkColor;
-(id)sectionBorderColor;
-(void)setCountString:(id)string;
-(void)setCountStringInsignificantRowCount:(unsigned)count;
-(void)setDeleteConfirmationIndexPath:(id)path animated:(BOOL)animated;
-(void)setMultiselectCheckmarkColor:(id)color;
-(void)setSectionBorderColor:(id)color;
-(void)setTableHeaderBackgroundColor:(id)color;
-(void)setUsesGestureRecognizers:(BOOL)recognizers;
-(id)tableHeaderBackgroundColor;
@end

@interface UITableView (UITableViewInternal)
@property(assign, nonatomic, getter=_adjustsRowHeightsForSectionLocation, setter=_setAdjustsRowHeightsForSectionLocation:) BOOL adjustsRowHeightsForSectionLocation;
@property(assign, nonatomic, getter=_keepsFirstResponderVisibleOnBoundsChange, setter=_setKeepsFirstResponderVisibleOnBoundsChange:) BOOL keepsFirstResponderVisibleOnBoundsChange;
+(void)_beginIgnoringResponderChanges;
+(void)_endIgnoringResponderChanges;
-(void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo animated:(BOOL)animated lastAdjustment:(float*)adjustment;
-(void)_autoscrollForLongPress:(id)longPress;
-(void)_autoscrollForReordering:(id)reordering;
-(float)_backgroundInset;
-(void)_beginDisplayingCellContentStringCallout;
-(void)_beginReorderAnimationForCell:(id)cell;
-(void)_beginReorderingForCell:(id)cell;
-(CGRect)_calloutTargetRectForCell:(id)cell;
-(BOOL)_canPerformAction:(SEL)action forCell:(id)cell sender:(id)sender;
-(void)_cancelCellReorder:(BOOL)reorder;
-(id)_cellAfterIndexPath:(id)path;
-(id)_createPreparedCellForGlobalRow:(int)globalRow;
-(id)_createPreparedCellForGlobalRow:(int)globalRow withIndexPath:(id)indexPath;
-(id)_createPreparedCellForRowAtIndexPath:(id)indexPath;
-(BOOL)_dataSourceImplementsCanUpdateRowAtIndexPath;
-(BOOL)_dataSourceImplementsDetailTextForHeaderInSection;
-(BOOL)_dataSourceImplementsNumberOfSectionsInTableView;
-(BOOL)_dataSourceImplementsTitleForFooterInSection;
-(BOOL)_dataSourceImplementsTitleForHeaderInSection;
-(BOOL)_delegateImplementsAlignmentForFooterInSection;
-(BOOL)_delegateImplementsAlignmentForHeaderInSection;
-(BOOL)_delegateImplementsHeightForFooterInSection;
-(BOOL)_delegateImplementsHeightForHeaderInSection;
-(BOOL)_delegateImplementsHeightForRowAtIndexPath;
-(BOOL)_delegateImplementsHeightForRowsInSection;
-(BOOL)_delegateImplementsMarginForTableView;
-(BOOL)_delegateImplementsTitleWidthForFooterInSection;
-(BOOL)_delegateImplementsTitleWidthForHeaderInSection;
-(BOOL)_delegateImplementsViewForFooterInSection;
-(BOOL)_delegateImplementsViewForHeaderInSection;
-(BOOL)_delegateWantsCustomFooterForSection:(int)section;
-(BOOL)_delegateWantsFooterForSection:(int)section;
-(BOOL)_delegateWantsFooterTitleForSection:(int)section;
-(BOOL)_delegateWantsHeaderForSection:(int)section;
-(BOOL)_delegateWantsHeaderTitleForSection:(int)section;
-(void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)animated;
-(void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;
-(void)_deselectRowAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;
-(void)_didInsertRowForTableCell:(id)tableCell;
-(BOOL)_displayingCellContentStringCallout;
-(void)_drawExtraSeparator:(CGRect)separator;
-(void)_endCellReorderAnimation:(BOOL)animation;
-(void)_endDisplayingCellContentStringCallout;
-(void)_endReorderAnimations;
-(void)_endReorderingForCell:(id)cell wasCancelled:(BOOL)cancelled animated:(BOOL)animated;
-(void)_endSwipeToDeleteRowDidDelete:(BOOL)_endSwipeToDeleteRow;
-(void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;
-(void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;
-(int)_globalReorderingRow;
-(float)_heightForSeparator;
-(id)_indexPathForSwipeRowAtPoint:(CGPoint)point;
-(CGRect)_indexRect;
-(BOOL)_isCellReorderable:(id)reorderable;
-(BOOL)_isEditingRowAtIndexPath:(id)indexPath;
-(BOOL)_isEditingWithNoSwipedCell;
-(BOOL)_isLastRowForIndexPath:(id)indexPath;
-(BOOL)_isShowingIndex;
-(BOOL)_isTableHeaderViewHidden;
// declared property getter: -(BOOL)_keepsFirstResponderVisibleOnBoundsChange;
-(void)_performAction:(SEL)action forCell:(id)cell sender:(id)sender;
-(void)_performCellContentStringCalloutCleanupHidingMenu:(BOOL)menu;
-(id)_popReusableHeaderView:(BOOL)view opaque:(BOOL)opaque;
-(void)_removeWasCanceledForCell:(id)cell;
-(void)_reorderPositionChangedForCell:(id)cell;
-(void)_reorderPositionChangedForCell:(id)cell withScrollFactorPercentage:(float)scrollFactorPercentage;
-(id)_reorderingCell;
-(id)_reorderingIndexPath;
-(id)_rowData;
-(id)_sectionFooterViewWithFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;
-(id)_sectionHeaderView:(BOOL)view withFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;
-(id)_sectionHeaderViewWithFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;
-(void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;
// declared property setter: -(void)_setKeepsFirstResponderVisibleOnBoundsChange:(BOOL)change;
-(void)_setTopSeparatorCell:(id)cell;
-(void)_setupCell:(id)cell forEditing:(BOOL)editing atIndexPath:(id)indexPath animated:(BOOL)animated;
-(void)_setupCell:(id)cell forEditing:(BOOL)editing canEdit:(BOOL)edit editingStyle:(int)style shouldIndentWhileEditing:(BOOL)editing5 showsReorderControl:(BOOL)control accessoryType:(int)type animated:(BOOL)animated;
-(float)_shadowHeightOffset;
-(BOOL)_shouldResignFirstResponderWithInteractionDisabled;
-(BOOL)_shouldShowMenuForCell:(id)cell;
-(BOOL)_shouldUnionVisibleBounds;
-(float)_spacingForExtraSeparators;
-(void)_stopAutoscrollTimer;
-(void)_stopLongPressAutoscrollTimer;
-(void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;
-(void)_tableFooterHeightDidChangeToHeight:(float)_tableFooterHeight;
-(id)_tableFooterView:(BOOL)view;
-(void)_tableHeaderHeightDidChangeToHeight:(float)_tableHeaderHeight;
-(id)_tableHeaderView:(BOOL)view;
-(id)_targetIndexPathAtPoint:(CGPoint)point;
-(void)_updateCellContentStringCallout:(id)callout;
-(BOOL)_usesNewHeaderFooterBehavior;
-(CGRect)_visibleBounds;
-(CGRect)_visibleBoundsIncludingRowsOnly;
-(id)_visibleCellForGlobalRow:(int)globalRow;
-(id)_visibleFooterViewForSection:(int)section;
-(NSRange)_visibleGlobalRows;
-(id)_visibleHeaderViewForSection:(int)section;
-(BOOL)_wantsSwipes;
-(BOOL)_wasEditing;
-(BOOL)_wasEditingRowAtIndexPath:(id)indexPath;
-(void)adjustIndexPaths:(id)paths forMoveOfIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(BOOL)allowsFooterViewsToFloat;
-(BOOL)allowsHeaderViewsToFloat;
-(void)animateDeletionOfRowWithCell:(id)cell;
-(void)longPress:(id)press;
-(BOOL)longPressGestureWithinAutoscrollZone;
-(id)titleForDeleteConfirmationButton:(id)deleteConfirmationButton;
@end

@interface UITableView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end
