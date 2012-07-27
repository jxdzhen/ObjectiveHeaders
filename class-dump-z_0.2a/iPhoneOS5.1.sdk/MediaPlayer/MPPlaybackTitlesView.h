/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIView;

@interface MPPlaybackTitlesView : XXUnknownSuperclass {
	UIView* _contentView;
	NSArray* _labels;
	NSArray* _titles;
	BOOL _showingLoadingUI;
	unsigned _marqueeScrollableIndex;
	BOOL _marqueeScrollingActive;
}
@property(readonly, assign, nonatomic) UIView* contentView;
@property(assign, nonatomic) unsigned marqueeScrollableIndex;	// @synthesize=_marqueeScrollableIndex
@property(assign, nonatomic) BOOL marqueeScrollingActive;	// @synthesize=_marqueeScrollingActive
@property(assign, nonatomic) BOOL showingLoadingUI;	// @synthesize=_showingLoadingUI
@property(retain, nonatomic) NSArray* titles;	// @synthesize=_titles
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(id)_addLabel:(unsigned)label;
-(id)_addLoadingLabel;
-(void)_applicationDidBecomeActiveNotification:(id)_application;
-(void)_applicationDidEnterBackgroundNotification:(id)_application;
-(void)_layoutLabels;
-(void)_layoutLoadingUI;
-(void)_tearDownLabels;
-(void)_updateLabelMarqueeScrolling;
// declared property getter: -(id)contentView;
-(void)dealloc;
-(void)layoutSubviews;
// declared property getter: -(unsigned)marqueeScrollableIndex;
// declared property getter: -(BOOL)marqueeScrollingActive;
// declared property setter: -(void)setMarqueeScrollableIndex:(unsigned)index;
// declared property setter: -(void)setMarqueeScrollingActive:(BOOL)active;
// declared property setter: -(void)setShowingLoadingUI:(BOOL)ui;
// declared property setter: -(void)setTitles:(id)titles;
// declared property getter: -(BOOL)showingLoadingUI;
// declared property getter: -(id)titles;
@end
