/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKSectionArrayDataSource.h"
#import "GKSearchableSectionDataSource.h"

@class GKLeaderboardControlSection, GKThreadsafeDictionary, NSOrderedSet, NSArray, NSPredicate, GKGameDetailHeaderSection, GKGame, GKLeaderboardSection, NSString, GKPlayer;

@interface GKLeaderboardDataSource : GKSectionArrayDataSource <GKSearchableSectionDataSource> {
@private
	long _playerDictionaryOnce;
	GKLeaderboardSection* _globalSection;
	GKLeaderboardSection* _friendSection;
	GKLeaderboardControlSection* _controlSection;
	NSString* _categoryID;
	GKPlayer* _player;
	GKGame* _game;
	GKGameDetailHeaderSection* _gameDetailHeaderSection;
	int _timeScope;
	NSOrderedSet* _items;
	NSOrderedSet* _visibleItems;
	NSOrderedSet* _searchableSections;
	NSArray* _sortDescriptors;
	NSPredicate* _filterPredicate;
	GKThreadsafeDictionary* _playerDictionary;
}
@property(retain, nonatomic) NSString* categoryID;	// @synthesize=_categoryID
@property(retain, nonatomic) GKLeaderboardControlSection* controlSection;	// @synthesize=_controlSection
@property(retain, nonatomic) NSPredicate* filterPredicate;	// @synthesize=_filterPredicate
@property(retain, nonatomic) GKLeaderboardSection* friendSection;	// @synthesize=_friendSection
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(retain, nonatomic) GKGameDetailHeaderSection* gameDetailHeaderSection;	// @synthesize=_gameDetailHeaderSection
@property(retain, nonatomic) GKLeaderboardSection* globalSection;	// @synthesize=_globalSection
@property(retain, nonatomic) NSOrderedSet* items;	// @synthesize=_items
@property(retain, nonatomic) GKPlayer* player;	// @synthesize=_player
@property(retain, nonatomic) GKThreadsafeDictionary* playerDictionary;	// @synthesize=_playerDictionary
@property(retain, nonatomic) NSOrderedSet* searchableSections;	// @synthesize=_searchableSections
@property(assign, nonatomic) BOOL showControlSection;
@property(retain, nonatomic) NSArray* sortDescriptors;	// @synthesize=_sortDescriptors
@property(assign, nonatomic) int timeScope;	// @synthesize=_timeScope
@property(retain, nonatomic) NSOrderedSet* visibleItems;	// @synthesize=_visibleItems
-(BOOL)_hasAnyScoresInTableView:(id)tableView;
// declared property getter: -(id)categoryID;
// declared property getter: -(id)controlSection;
-(void)dealloc;
// declared property getter: -(id)filterPredicate;
// declared property getter: -(id)friendSection;
// declared property getter: -(id)game;
// declared property getter: -(id)gameDetailHeaderSection;
// declared property getter: -(id)globalSection;
// declared property getter: -(id)items;
// declared property getter: -(id)player;
// declared property getter: -(id)playerDictionary;
-(id)playerForScore:(id)score;
-(void)prepareSections;
-(void)purgeCachedData;
-(void)refreshDataWithCompletionHandlerAndError:(id)completionHandlerAndError;
-(id)scoreForLocalPlayer;
// declared property getter: -(id)searchableSections;
-(Class)sectionClass;
// declared property setter: -(void)setCategoryID:(id)anId;
-(void)setContentSections:(id)sections;
// declared property setter: -(void)setControlSection:(id)section;
// declared property setter: -(void)setFilterPredicate:(id)predicate;
// declared property setter: -(void)setFriendSection:(id)section;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setGameDetailHeaderSection:(id)section;
// declared property setter: -(void)setGlobalSection:(id)section;
// declared property setter: -(void)setItems:(id)items;
-(void)setLeaderboardDelegate:(id)delegate;
// declared property setter: -(void)setPlayer:(id)player;
// declared property setter: -(void)setPlayerDictionary:(id)dictionary;
// declared property setter: -(void)setSearchableSections:(id)sections;
// declared property setter: -(void)setShowControlSection:(BOOL)section;
// declared property setter: -(void)setSortDescriptors:(id)descriptors;
// declared property setter: -(void)setTimeScope:(int)scope;
// declared property setter: -(void)setVisibleItems:(id)items;
// declared property getter: -(BOOL)showControlSection;
// declared property getter: -(id)sortDescriptors;
-(void)tableView:(id)view updateStatusForLeaderboard:(id)leaderboard;
-(void)tableView:(id)view updateStatusViewAfterLoading:(id)loading withError:(id)error;
-(void)tableView:(id)view updateStatusViewBeforeLoading:(id)loading;
// declared property getter: -(int)timeScope;
// declared property getter: -(id)visibleItems;
@end
