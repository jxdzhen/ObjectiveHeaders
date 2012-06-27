/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSCache, NSHashTable, NSDate, CADisplayLink, NSURL, NSObject, NSString;
@protocol OS_dispatch_queue, MPMediaLibraryDataProviderPrivate;

@interface MPMediaLibrary : XXUnknownSuperclass <NSCoding> {
@private
	id<MPMediaLibraryDataProviderPrivate> _libraryDataProvider;
	int _libraryChangeObservers;
	NSObject<OS_dispatch_queue>* _entityCacheQueue;
	NSCache* _itemsForCriteriaCache;
	NSCache* _hasItemsForCriteriaCache;
	NSCache* _countOfItemsForCriteriaCache;
	NSCache* _itemResultSetsForCriteriaCache;
	NSCache* _collectionsForCriteriaCache;
	NSCache* _hasCollectionsForCriteriaCache;
	NSCache* _countOfCollectionsForCriteriaCache;
	NSCache* _collectionsResultSetsForCriteriaCache;
	NSHashTable* _connectionAssertions;
	BOOL _disconnectAfterReleasingAssertions;
	float _connectionProgress;
	CADisplayLink* _connectionProgressDisplayLink;
	double _connectionProgressStartTime;
	int _removalReason;
	unsigned _filteringDisabled : 1;
	unsigned _determinedHasMedia : 1;
	unsigned _hasMedia : 1;
	unsigned _determinedHasSongs : 1;
	unsigned _hasSongs : 1;
	unsigned _determinedHasGeniusMixes : 1;
	unsigned _hasGeniusMixes : 1;
	unsigned _determinedHasPlaylists : 1;
	unsigned _hasPlaylists : 1;
	unsigned _determinedHasComposers : 1;
	unsigned _hasComposers : 1;
	unsigned _determinedHasPodcasts : 1;
	unsigned _hasPodcasts : 1;
	unsigned _determinedHasUniversalBookmarkableItems : 1;
	unsigned _hasUniversalBookmarkableContent : 1;
	unsigned _determinedHasAudiobooks : 1;
	unsigned _hasAudiobooks : 1;
	BOOL _hasVideos;
	BOOL _determinedHasVideos;
	BOOL _hasMusicVideos;
	BOOL _determinedHasMusicVideos;
	BOOL _hasAudibleAudioBooks;
	BOOL _determinedHasAudibleAudioBooks;
	BOOL _hasMovies;
	BOOL _determinedHasMovies;
	BOOL _hasCompilations;
	BOOL _determinedHasCompilations;
	BOOL _hasITunesU;
	BOOL _determinedHasITunesU;
	BOOL _hasMovieRentals;
	BOOL _determinedHasMovieRentals;
	BOOL _hasTVShows;
	BOOL _determinedHasTVShows;
	BOOL _hasVideoPodcasts;
	BOOL _determinedHasVideoPodcasts;
}
@property(readonly, assign, nonatomic) NSString* _syncValidity;
@property(readonly, assign, nonatomic) NSDate* lastModifiedDate;
@property(readonly, assign, nonatomic) NSURL* protectedContentSupportStorageURL;
@property(assign, nonatomic) int removalReason;
+(id)_libraryDataProviders;
+(id)_libraryForDataProvider:(id)dataProvider;
+(id)_mediaLibraries;
+(void)addLibraryDataProvider:(id)provider;
+(void)beginDiscoveringMediaLibraries;
+(id)defaultMediaLibrary;
+(id)deviceMediaLibrary;
+(void)endDiscoveringMediaLibraries;
+(BOOL)isLibraryServerDisabled;
+(id)libraryDataProviders;
+(id)mediaLibraries;
+(id)mediaLibraryWithUniqueIdentifier:(id)uniqueIdentifier;
+(void)reloadDisplayValuesForLibraryDataProvider:(id)libraryDataProvider;
+(void)reloadDynamicPropertiesForLibraryDataProvider:(id)libraryDataProvider;
+(void)reloadInvisiblePropertiesForLibraryDataProvider:(id)libraryDataProvider;
+(void)reloadLibraryDataProvider:(id)provider;
+(void)removeLibraryDataProvider:(id)provider removalReason:(int)reason;
+(void)setDefaultMediaLibrary:(id)library;
+(void)setLibraryServerDisabled:(BOOL)disabled;
+(void)setRunLoopForNotifications:(id)notifications;
+(void)syncGenerationDidChangeForLibraryDataProvider:(id)syncGeneration;
+(void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)uniqueIdentifier;
-(id)init;
-(id)initWithCoder:(id)coder;
-(BOOL)_checkHasContent:(BOOL*)content determined:(BOOL*)determined mediaType:(int)type queryHasEntitiesBlock:(id)block;
-(BOOL)_checkHasContent:(BOOL*)content determined:(BOOL*)determined queryHasEntitiesBlock:(id)block;
-(void)_clearCachedContentDataWithCompletionBlock:(id)completionBlock;
-(void)_clearCachedEntitiesIncludingResultSets:(BOOL)sets completionBlock:(id)block;
-(void)_clearPendingDisconnection;
-(id)_collectionsForQueryCriteria:(id)queryCriteria;
-(void)_connectionProgressDisplayLinkCallback:(id)callback;
-(unsigned)_countOfCollectionsForQueryCriteria:(id)queryCriteria;
-(unsigned)_countOfEntitiesForQueryCritiera:(id)queryCritiera countOfEntitiesForCriteriaCache:(id)criteriaCache entitiesForCriteriaCache:(id)criteriaCache3 loadBlock:(id)block;
-(unsigned)_countOfItemsForQueryCriteria:(id)queryCriteria;
-(void)_didReceiveMemoryWarning:(id)warning;
-(void)_displayValuesDidChangeNotification:(id)_displayValues;
-(BOOL)_hasCollectionsForQueryCriteria:(id)queryCriteria;
-(BOOL)_hasEntitiesForQueryCritiera:(id)queryCritiera hasEntitiesForCriteriaCache:(id)criteriaCache entitiesForCriteriaCache:(id)criteriaCache3 loadBlock:(id)block;
-(BOOL)_hasItemsForQueryCriteria:(id)queryCriteria;
-(id)_initWithLibraryDataProvider:(id)libraryDataProvider;
-(id)_itemsForQueryCriteria:(id)queryCriteria immediate:(BOOL)immediate;
-(unsigned long long)_persistentIDForAssetURL:(id)assetURL;
-(void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)notificationInfo;
-(void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)notificationInfo;
-(void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)notificationInfo;
-(void)_removeConnectionAssertion:(id)assertion;
-(void)_stopConnectionProgressDisplayLink;
// declared property getter: -(id)_syncValidity;
-(id)addPlaylistWithName:(id)name;
-(id)addPlaylistWithName:(id)name activeGeniusPlaylist:(BOOL)playlist;
-(void)beginGeneratingLibraryChangeNotifications;
-(void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block;
-(void)connectWithCompletionHandler:(id)completionHandler;
-(id)connectionAssertionWithIdentifier:(id)identifier;
-(float)connectionProgress;
-(unsigned long long)currentEntityRevision;
-(void)dealloc;
-(id)description;
-(void)disconnect;
-(void)downloadAsset:(id)asset completionHandler:(id)handler;
-(void)downloadItem:(id)item completionHandler:(id)handler;
-(void)encodeWithCoder:(id)coder;
-(void)endGeneratingLibraryChangeNotifications;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)anchor usingBlock:(id)block;
-(id)errorResolverForMediaItem:(id)mediaItem;
-(BOOL)hasAlbums;
-(BOOL)hasArtists;
-(BOOL)hasAudibleAudioBooks;
-(BOOL)hasAudiobooks;
-(BOOL)hasCompilations;
-(BOOL)hasComposers;
-(BOOL)hasGeniusMixes;
-(BOOL)hasGenres;
-(BOOL)hasITunesUContent;
-(BOOL)hasMedia;
-(BOOL)hasMediaOfType:(int)type;
-(BOOL)hasMovieRentals;
-(BOOL)hasMovies;
-(BOOL)hasMusicVideos;
-(BOOL)hasPlaylists;
-(BOOL)hasPodcasts;
-(BOOL)hasSongs;
-(BOOL)hasTVShows;
-(BOOL)hasUniversalBookmarkableItems;
-(BOOL)hasVideoPodcasts;
-(BOOL)hasVideos;
-(unsigned)hash;
-(BOOL)isArtworkIdenticalForItem:(id)item otherItem:(id)item2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;
-(BOOL)isEqual:(id)equal;
-(BOOL)isFilteringDisabled;
-(BOOL)isGeniusEnabled;
-(BOOL)isValidAssetURL:(id)url;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;
-(id)itemWithPersistentID:(unsigned long long)persistentID;
-(id)itemWithPersistentID:(unsigned long long)persistentID verifyExistence:(BOOL)existence;
-(id)itemWithStoreID:(unsigned long long)storeID;
// declared property getter: -(id)lastModifiedDate;
-(id)libraryDataProvider;
-(BOOL)libraryHasBeenModifiedWithToken:(id)token;
-(id)modificationToken;
-(id)name;
-(id)newPlaylistWithPersistentID:(unsigned long long)persistentID;
-(id)pathForAssetURL:(id)assetURL;
-(void)performReadTransactionWithBlock:(id)block;
-(BOOL)performTransactionWithBlock:(id)block;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;
-(long long)playlistGeneration;
-(id)playlistWithPersistentID:(unsigned long long)persistentID;
-(void)populateLocationPropertiesOfItem:(id)item withPath:(id)path;
-(id)preferredAudioLanguages;
-(id)preferredSubtitleLanguages;
// declared property getter: -(id)protectedContentSupportStorageURL;
// declared property getter: -(int)removalReason;
-(BOOL)removeItems:(id)items;
-(BOOL)removePlaylist:(id)playlist;
-(BOOL)requiresAuthentication;
-(void)setFilteringDisabled:(BOOL)disabled;
// declared property setter: -(void)setRemovalReason:(int)reason;
-(void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;
-(void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;
-(int)status;
-(unsigned long long)syncGenerationID;
-(id)syncValidity;
-(id)ubiquitousBookmarkDomainVersionAnchorToken;
-(unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;
-(id)uniqueIdentifier;
-(void)updateUbiquitousValuesForTrackWithKey:(id)key mediaPropertyValues:(id)values timestamp:(double)timestamp;
-(BOOL)writable;
@end
