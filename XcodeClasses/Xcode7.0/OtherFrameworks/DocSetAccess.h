//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int majorVersion:24;
    unsigned int minorVersion:20;
    unsigned int patchVersion:20;
} CDStruct_6df46f26;

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/OtherFrameworks/DocSetAccess.framework/Versions/A/DocSetAccess
// UUID: 6ECBAF47-2CA4-33BF-9B16-2273711CDDE8
//
//                           Arch: x86_64
//                Current version: 2300.0.0
//          Compatibility version: 1.0.0
//                 Source version: 2300.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Supported
//
//                       Run path: @loader_path/../../../
//                               = /Applications/Xcode-7GM.app/Contents/OtherFrameworks
//

@protocol DSADownloaderDelegate
- (void)downloaderDidFinish:(DSADownloader *)arg1;
- (void)downloader:(DSADownloader *)arg1 didFailWithError:(NSError *)arg2;

@optional
- (void)downloader:(DSADownloader *)arg1 willDownloadFile:(NSString *)arg2 ofSize:(long long)arg3;
- (NSURLCredential *)downloader:(DSADownloader *)arg1 needsCredentialForChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)downloader:(DSADownloader *)arg1 didMakeProgress:(float)arg2;
@end

@protocol DocSetInstallDaemonProtocol
- (NSMachPort *)livePort;
- (int)installDocSetArchive:(bycopy NSString *)arg1 toPath:(bycopy NSString *)arg2 options:(bycopy NSDictionary *)arg3 client:(byref id)arg4;
@end

__attribute__((visibility("hidden")))
@interface DSAResultSource : NSObject
{
    NSSortDescriptor *_sortDescriptor;
}

- (id)sortDescriptor;
- (void)cancel;
- (id)nextResultsInTime:(double)arg1;
- (id)remainingResults;
- (BOOL)hasMoreResults;
- (void)dealloc;

@end

__attribute__((visibility("hidden")))
@interface DSAArrayResultSource : DSAResultSource
{
    NSArray *_theResults;
}

- (void)cancel;
- (id)nextResultsInTime:(double)arg1;
- (id)remainingResults;
- (BOOL)hasMoreResults;
- (void)dealloc;
- (id)initWithResults:(id)arg1 withSortDescriptor:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DSABackgroundThreadQueue : NSObject
{
    DSATokenIndex *_tokenIndex;
    NSMutableArray *_queue;
    NSConditionLock *_queueState;
    BOOL _stopProcessing;
}

@property(retain) DSATokenIndex *tokenIndex; // @synthesize tokenIndex=_tokenIndex;
- (void)invalidate;
- (void)addQueuedSelector:(SEL)arg1 toTarget:(id)arg2;
- (void)_wakeUpBackgroundThread;
- (void)dealloc;
- (id)initWithTokenIndex:(id)arg1;
- (void)processQueue;

@end

@interface DSADistributionVersion : NSManagedObject
{
    CDStruct_6df46f26 _versionValue;
}

+ (id)assignVersions:(id)arg1 forArchitectures:(id)arg2 maximumVersion:(CDStruct_6df46f26)arg3 inclusive:(BOOL)arg4;
+ (id)architectureNamesForArchitectureFlags:(id)arg1;
+ (id)architectureFlagsForArchitectureNames:(id)arg1;
+ (id)_knownArchitectureFlags;
+ (id)knownArchitectureNames;
- (void)setJointVersionKey:(id)arg1;
- (id)jointVersionKey;
- (id)architectureFlags;
- (CDStruct_6df46f26)versionValue;
- (long long)compare:(id)arg1;

@end

@interface DSADocSet : NSObject
{
    id _docSetIvars;
}

+ (id)defaultDeveloperDocSetDirectory;
+ (void)cancelTokenSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
+ (BOOL)searchForTokens:(id)arg1 inDocSets:(id)arg2 withSortDescriptors:(id)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
+ (id)docSetForManagedObject:(id)arg1;
+ (int)defaultModelVersion;
+ (int)versionForModel:(id)arg1;
+ (id)modelPathForVersion:(int)arg1;
+ (id)modelForVersion:(int)arg1;
+ (id)_URLForModelInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_URLForStoreInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_docSetForCoordinator:(id)arg1;
+ (void)_setDocSet:(id)arg1 forCoordinator:(id)arg2;
- (id)nodeForURL:(id)arg1;
- (void)_setupNodesByPath;
- (id)availabilityArchitectures;
- (id)apiLanguages;
- (id)_apiLanguageMOs;
- (id)releaseNoteInformation;
- (id)nodesWithDocumentType:(unsigned long long)arg1;
- (id)nodes;
- (id)nodeWithUUID:(id)arg1;
- (id)nodeWithID:(long long)arg1;
- (void)_loadNodeList;
- (id)sharedBackgroundQueue;
- (id)sharedAPIIndex;
- (id)apiIndexForUpdating:(BOOL)arg1;
- (id)fullTextIndexForUpdating:(BOOL)arg1;
- (id)_indexNamed:(id)arg1 forUpdating:(BOOL)arg2;
- (id)textIndexURL;
- (id)indexDirURL;
- (id)apiIndexURL;
- (id)indexURL;
- (double)offsetIntervalForUpdateCheck;
- (id)updateDownloadURL;
- (id)updateInfoDocSet;
- (id)updateInfoURL;
- (id)dvdRootPath;
@property(readonly) BOOL requiresUpdateForContent;
- (id)certificateIssuer;
- (id)certificateSigner;
- (id)fallbackURL;
- (id)documentsURL;
- (id)docSetURL;
- (CDStruct_6df46f26)maximumSupportedXcodeVersion;
- (CDStruct_6df46f26)minimumSupportedXcodeVersion;
- (CDStruct_6df46f26)platformVersion;
- (id)platformFamily;
- (CDStruct_6df46f26)configurationVersion;
- (long long)compare:(id)arg1;
- (CDStruct_6df46f26)version;
- (id)identifier;
- (id)localizedName;
- (id)feedURL;
- (id)localizedFeedName;
@property(readonly) NSString *publisherIdentifier;
@property(readonly) NSString *localizedPublisherName;
@property(readonly) NSString *localizedDescription;
- (BOOL)isLegacyPackage;
- (id)nodeAtNamedPath:(id)arg1;
- (id)rootNode;
- (id)tokenFileURLs;
- (id)localization;
- (id)_objectForInfoKey:(id)arg1;
- (void)_resetBundle;
- (id)bundle;
- (void)_dump;
- (id)_dumpStr;
- (id)description;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDocRootDirectory:(id)arg1 withXML:(id)arg2;
- (id)initWithDocRootDirectory:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithBundle:(struct __CFBundle *)arg1 withPersistentStoreURL:(id)arg2 modelVersion:(int)arg3 forLocalization:(id)arg4 error:(id *)arg5;
- (id)initWithDocRootDirectory:(id)arg1 forLocalization:(id)arg2 error:(id *)arg3;
- (id)initWithBundle:(struct __CFBundle *)arg1 withXML:(id)arg2 withPersistentStoreCoordinator:(id)arg3 modelVersion:(int)arg4 forLocalization:(id)arg5 error:(id *)arg6;
- (float)maximumRelevanceForLastTextSearch;
- (void)cancelTokenSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
- (void)cancelTextSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
- (BOOL)searchForTokens:(id)arg1 inNodes:(id)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (BOOL)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
- (BOOL)searchForText:(id)arg1 inNodes:(id)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (id)searchForTokens:(id)arg1 inNodes:(id)arg2;
- (BOOL)containsTokens:(id)arg1;
- (id)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3;
- (id)searchForText:(id)arg1 inNodes:(id)arg2;
- (int)modelVersion;
- (BOOL)saveChanges:(id *)arg1;
- (BOOL)migrateDataToURL:(id)arg1 copyModel:(BOOL)arg2 error:(id *)arg3;
- (id)persistentStoreURL;
- (id)managedObjectContext;
- (id)persistentStoreCoordinator;
- (id)managedObjectModel;
- (id)urlForNode:(id)arg1 localizingPath:(BOOL)arg2;
- (id)_urlForNode:(id)arg1 localizingPath:(BOOL)arg2 legacy:(BOOL)arg3;
- (id)localizedPathsForNode:(id)arg1 inBundle:(id)arg2;
- (id)_localizedPathForNode:(id)arg1 inBundle:(id)arg2 forLocalization:(id)arg3;
- (id)_localizedPathInBundle:(id)arg1 forFile:(id)arg2 forLocalization:(id)arg3;
- (id)urlForToken:(id)arg1;
- (id)urlForNode:(id)arg1;
- (id)webRootURL;
- (id)localRootURL;
- (id)documentWithID:(long long)arg1;
- (id)documents;
- (unsigned long long)documentCount;
- (float)packageVersion;
- (id)packageUID;
- (id)rootCategory;

@end

@interface DSADocSetGroup : NSObject
{
    NSString *_name;
    NSString *_publisherName;
    id _subscription;
    NSString *_defaultFeedName;
    NSURL *_defaultFeedURL;
    NSMutableArray *_docSetItems;
}

+ (id)_docSetDictionaryForPSObject:(id)arg1;
+ (BOOL)isVersion:(CDStruct_6df46f26)arg1 compatibleWithKeys:(id)arg2;
+ (id)subscribedGroups;
+ (void)refreshAll;
+ (void)setRefreshInterval:(double)arg1;
+ (CDStruct_6df46f26)currentXcodeVersion;
+ (void)setCurrentXcodeVersion:(CDStruct_6df46f26)arg1;
+ (void)setDefaultFeedClient:(id)arg1;
+ (id)defaultFeedClient;
@property(retain) DSASubscription *subscription; // @synthesize subscription=_subscription;
- (void)_updateChanged:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)hasNewDocSets;
- (BOOL)hasUpdatedDocSets;
- (BOOL)refreshDocSetItems;
- (id)bestFeedEntryFromList:(id)arg1 forUpdate:(id)arg2;
- (id)feedEntriesByIdentifier:(id)arg1;
- (id)_feedEntries;
- (void)refreshNow;
- (id)docSets;
- (id)docSetItems;
- (void)addDocSet:(id)arg1;
- (id)docSetUpdateForDocSet:(id)arg1;
- (id)_docSetItemForDocSet:(id)arg1;
@property(readonly) NSString *publisherIdentifier;
@property(readonly) NSString *localizedPublisherName;
- (id)name;
- (void)_resetName;
- (void)unsubscribe;
- (void)subscribe;
- (BOOL)subscribeWithError:(id *)arg1;
- (BOOL)_subscribeToURL:(id)arg1 error:(id *)arg2;
- (id)_validateFeedURL:(id)arg1 error:(id *)arg2;
- (id)_docSetNamespacePrefixForFeed:(id)arg1;
- (id)_loadFeedURL:(id)arg1 error:(id *)arg2;
- (id)_errorForSubscriptionFailure:(id)arg1 URL:(id)arg2;
- (id)feedURL;
- (id)feed;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_postChangeNotificationForModifiedItems:(id)arg1 andRemovedItems:(id)arg2;
- (void)dealloc;
- (id)initWithDocSet:(id)arg1;
- (id)initWithFeedURL:(id)arg1;
- (id)initWithFeedURL:(id)arg1 error:(id *)arg2;
- (id)initWithFeedURL:(id)arg1 name:(id)arg2 subscribe:(BOOL)arg3 error:(id *)arg4;
- (id)initWithSubscription:(id)arg1;
- (id)init;

@end

@interface DSADocSetUpdate : NSObject
{
    NSString *_identifier;
    DSADocSet *_docSet;
    PSEntry *_feedEntry;
    NSDictionary *_docSetFeedKeys;
    DSADocSetGroup *_group;
    float _updateProgress;
    int _updateStatus;
    NSError *_updateError;
    NSString *_updatePath;
    BOOL _updateAsUser;
    struct AuthorizationOpaqueRef *_updateAuthRef;
    long long _updateSize;
    NSNumber *_contentsFileID;
    NSDate *_updateCompletionDate;
}

+ (id)updateForDocSet:(id)arg1 feedEntry:(id)arg2;
+ (id)updateForIdentifier:(id)arg1 feedEntry:(id)arg2;
@property(copy) NSDate *updateCompletionDate; // @synthesize updateCompletionDate=_updateCompletionDate;
@property(retain) NSNumber *contentsFileID; // @synthesize contentsFileID=_contentsFileID;
@property struct AuthorizationOpaqueRef *updateAuthRef; // @synthesize updateAuthRef=_updateAuthRef;
@property BOOL updateAsUser; // @synthesize updateAsUser=_updateAsUser;
@property(copy) NSString *updatePath; // @synthesize updatePath=_updatePath;
@property(retain) NSError *updateError; // @synthesize updateError=_updateError;
@property int updateStatus; // @synthesize updateStatus=_updateStatus;
@property long long updateSize; // @synthesize updateSize=_updateSize;
@property float updateProgress; // @synthesize updateProgress=_updateProgress;
@property(retain) DSADocSetGroup *group; // @synthesize group=_group;
@property(retain) PSEntry *feedEntry; // @synthesize feedEntry=_feedEntry;
@property(retain) DSADocSet *docSet; // @synthesize docSet=_docSet;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)cancelUpdate;
- (void)installUpdateAtDirectory:(id)arg1;
- (void)installUpdate;
- (BOOL)isNew;
- (BOOL)hasUpdate;
- (id)downloadURL;
- (id)enclosure;
@property(readonly) CDStruct_6df46f26 version;
- (CDStruct_6df46f26)_feedVersion;
@property(readonly) NSDictionary *docSetFeedKeys;
@property(readonly) NSString *localizedDescription;
@property(readonly) NSString *localizedName;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 docSet:(id)arg2 feedEntry:(id)arg3;

@end

__attribute__((visibility("hidden")))
@interface DSADownloader : NSObject
{
    NSURLDownload *_download;
    NSURL *_downloadURL;
    NSString *_downloadPath;
    BOOL _isDownloading;
    long long _bytesDownloaded;
    long long _sizeOfDownload;
    BOOL _downloadRequiresAuthorization;
    BOOL _authenticationDidFail;
    BOOL _didReceiveChallenge;
    double _lastNotificationTime;
    NSObject<DSADownloaderDelegate> *_delegate;
}

+ (void)cleanUpDownloadFolder;
+ (id)downloadFolder;
@property BOOL didReceiveChallenge; // @synthesize didReceiveChallenge=_didReceiveChallenge;
@property BOOL authenticationDidFail; // @synthesize authenticationDidFail=_authenticationDidFail;
@property BOOL downloadRequiresAuthorization; // @synthesize downloadRequiresAuthorization=_downloadRequiresAuthorization;
@property(copy) NSString *downloadPath; // @synthesize downloadPath=_downloadPath;
@property(copy) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
- (id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)downloadShouldUseCredentialStorage:(id)arg1;
- (void)download:(id)arg1 didCreateDestination:(id)arg2;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidBegin:(id)arg1;
- (void)startDownload;
- (void)cancel;
- (long long)sizeOfDownload;
- (long long)bytesDownloaded;
- (BOOL)isDownloading;
- (void)removeDownload;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithDownloadURL:(id)arg1 toPath:(id)arg2;

@end

__attribute__((visibility("hidden")))
@interface DSAMultipleResultSource : DSAResultSource
{
    NSArray *_theSources;
    NSMutableArray *_remainingSources;
    NSMutableArray *_sourceCaches;
    unsigned long long *_unsignedMemory;
    id *_objectMemory;
    NSString *_sortKey;
    NSSortDescriptor *_sortDescriptorForValue;
    unsigned long long _numberOfCompares;
}

@property unsigned long long numberOfCompares; // @synthesize numberOfCompares=_numberOfCompares;
- (long long)compareObject:(id)arg1 toObject:(id)arg2;
- (struct _NSRange)rangeFromArray:(id)arg1 aboveValue:(id)arg2 includingExactMatches:(BOOL)arg3 startingIndex:(unsigned long long)arg4 nextFailedValue:(id *)arg5;
- (id)mergeForTime:(double)arg1;
- (id)_sortValueForObject:(id)arg1;
- (id)nextResultsInTime:(double)arg1;
- (id)remainingResults;
- (void)_sourceExpendedAtIndex:(unsigned long long)arg1;
- (BOOL)hasMoreResults;
- (void)cancel;
- (void)dealloc;
- (id)initWithSources:(id)arg1 withSortDescriptor:(id)arg2;

@end

@interface DSANode : NSManagedObject
{
    id _nodeIvars;
}

+ (struct __CFSet *)nodeIDsForNodes:(id)arg1;
- (id)URL;
- (id)url;
- (id)apiLanguagesInHierarchy;
- (id)languages;
- (struct __CFSet *)searchableNodeIDsInHierarchy;
- (struct __CFSet *)nodeIDsInHierarchy;
- (id)searchableNodesInHierarchy;
- (id)nodesInHierarchy;
- (id)_nodesInHierarchySearchable:(BOOL)arg1;
- (void)_findNodes:(id)arg1 inHierarchy:(id)arg2 areSearchable:(BOOL)arg3;
- (id)invisibleChildren;
- (id)visibleChildren;
- (id)_subnodesWithVisibility:(BOOL)arg1;
- (id)unsearchableChildren;
- (id)searchableChildren;
- (id)_subnodesWithSearchability:(BOOL)arg1;
- (id)namedPaths;
- (id)_namesForPath:(id)arg1;
- (id)primaryNodePath;
- (id)nodePaths;
- (id)_nodePathsWithExistingDescendants:(id)arg1;
- (id)childWithName:(id)arg1;
- (id)children;
- (id)primaryParent;
- (id)_primaryParentUsingNodePaths:(id)arg1;
- (id)parents;
- (id)docSet;
- (BOOL)isRootNode;
- (long long)subnodeCount;
- (unsigned long long)domain;
@property(readonly) unsigned long long documentType;
- (unsigned long long)type;
- (id)urlString;
- (id)anchor;
- (id)file;
- (id)path;
- (id)name;
- (BOOL)isSearchable;
- (BOOL)isVisibleInHierarchy;
- (long long)nodeID;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (id)subcategoryNamed:(id)arg1;
- (id)subcategories;
- (struct __CFSet *)documentIDsForBranch;
- (id)documentsForBranch;
- (id)documents;
- (long long)documentID;
- (id)parent;
- (id)urlLocalizingPath:(BOOL)arg1;
- (id)_dumpStr;

@end

__attribute__((visibility("hidden")))
@interface DSASubscription : NSObject
{
    NSURL *_feedURL;
    PSFeed *_feed;
    NSString *_uid;
    NSURLConnection *_feedConnection;
    NSMutableData *_feedData;
}

+ (void)_periodicRefresh:(id)arg1;
+ (void)refreshAll;
+ (void)setRefreshInterval:(double)arg1;
+ (void)_removeSubscription:(id)arg1;
+ (void)_addSubscription:(id)arg1;
+ (id)subscriptionIfExistsWithURL:(id)arg1;
+ (id)subscriptionWithFeed:(id)arg1;
+ (id)subscriptionWithURL:(id)arg1;
+ (id)subscriptions;
+ (void)_flushSubscriptions;
+ (void)_flushRefreshInterval;
+ (void)_initGlobals;
@property(copy) NSString *uid; // @synthesize uid=_uid;
@property(retain) NSURLConnection *feedConnection; // @synthesize feedConnection=_feedConnection;
@property(retain) NSMutableData *feedData; // @synthesize feedData=_feedData;
@property(retain) NSURL *feedURL; // @synthesize feedURL=_feedURL;
@property(retain) PSFeed *feed; // @synthesize feed=_feed;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)_refreshCompleted;
- (void)refresh;
- (id)_getCachedURLData;
- (BOOL)_parseFeedData:(id)arg1 saveToCache:(BOOL)arg2;
- (void)_deleteFeedDataFromCache;
- (void)_saveFeedDataToCache:(id)arg1;
- (void)_loadFeedDataFromCache;
- (id)_cacheFilePath;
- (void)unsubscribe;
- (id)description;
- (void)dealloc;
- (id)initWithFeed:(id)arg1;
- (id)initWithURL:(id)arg1 uid:(id)arg2;
- (id)_generateUIDString;

@end

@interface DocSetIndex : NSObject
{
    struct __SKIndex *_searchIndex;
    NSMutableData *_data;
}

+ (void)loadDefaultExtractorPlugIns;
- (BOOL)addContentsOfDirectoryAtPath:(id)arg1 withRecursion:(BOOL)arg2;
- (BOOL)addDocumentAtPath:(id)arg1;
- (struct __SKIndex *)indexRef;
- (unsigned long long)termIDForTermString:(id)arg1;
- (id)termStringForTermID:(unsigned long long)arg1;
- (id)documentIDArrayForTermID:(unsigned long long)arg1;
- (unsigned long long)documentCountForTermID:(unsigned long long)arg1;
- (unsigned long long)maxTermID;
- (unsigned long long)frequencyForTermID:(unsigned long long)arg1 inDocumentID:(long long)arg2;
- (id)termIDArrayForDocumentID:(long long)arg1;
- (unsigned long long)termCountForDocumentID:(long long)arg1;
- (long long)maxDocumentID;
- (id)iteratorForParentDocument:(id)arg1;
- (BOOL)moveDocument:(id)arg1 toNewParentDocument:(id)arg2;
- (BOOL)renameDocument:(id)arg1 withName:(id)arg2;
- (id)documentForDocumentID:(long long)arg1;
- (long long)IDForDocument:(id)arg1;
- (int)stateForDocument:(id)arg1;
- (void)setProperties:(id)arg1 forDocument:(id)arg2;
- (id)propertiesForDocument:(id)arg1;
- (BOOL)removeDocument:(id)arg1;
- (BOOL)addDocument:(id)arg1 withMIMETypeHint:(id)arg2 canReplace:(BOOL)arg3;
- (BOOL)addDocument:(id)arg1 withText:(id)arg2 canReplace:(BOOL)arg3;
- (void)_loadDefaultExtractorPluginsIfNeeded;
- (unsigned long long)documentCount;
- (id)analysisProperties;
- (int)indexType;
- (BOOL)compact;
- (void)setMaximumBytesBeforeFlush:(unsigned long long)arg1;
- (unsigned long long)maximumBytesBeforeFlush;
- (BOOL)flush;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;
- (id)initExistingIndexWithMutableData:(id)arg1 indexName:(id)arg2;
- (id)initExistingReadOnlyIndexWithData:(id)arg1 indexName:(id)arg2;
- (id)initWithMutableData:(id)arg1 indexName:(id)arg2 indexType:(int)arg3 analysisProperties:(id)arg4;
- (id)initExistingIndexWithURL:(id)arg1 indexName:(id)arg2 writeAccess:(BOOL)arg3;
- (id)initWithURL:(id)arg1 indexName:(id)arg2 indexType:(int)arg3 analysisProperties:(id)arg4;
- (id)initWithSKIndexRef:(struct __SKIndex *)arg1;

@end

@interface DSATextIndex : DocSetIndex
{
    DSADocSet *_docSet;
    NSMutableDictionary *_rootDocumentForPath;
    struct __CFDictionary *_rootIDURLs;
    struct __CFDictionary *_rootIDTypes;
    struct __CFDictionary *_rootTypeIDs;
    struct __CFDictionary *_skIDToDSID;
    BOOL _mappingIsDirty;
}

- (long long)documentIDForSKID:(long long)arg1;
- (BOOL)indexSubDirectory:(id)arg1 forDocument:(id)arg2 atPath:(id)arg3 onlyTypes:(id)arg4;
- (BOOL)indexDirectoryForDocument:(id)arg1 atPath:(id)arg2 onlyTypes:(id)arg3;
- (BOOL)_indexFile:(id)arg1 belowParent:(id)arg2 atPath:(id)arg3 withDefaultTitle:(id)arg4;
- (BOOL)indexFile:(id)arg1 belowParent:(id)arg2 atPath:(id)arg3;
- (void)indexDocSetNode:(id)arg1 atPath:(id)arg2 isFolder:(BOOL)arg3 inRootPath:(id)arg4;
- (void)indexDocSetNode:(id)arg1 atPath:(id)arg2 usingLocalizedPathInfo:(id)arg3 inRootPath:(id)arg4;
- (void)_indexDocSetNode:(id)arg1 atPath:(id)arg2 isFolder:(BOOL)arg3 localizedPathInfo:(id)arg4 inRootPath:(id)arg5;
- (void)_removeDocumentForDocID:(long long)arg1;
- (id)docSet;
- (void)setDocSet:(id)arg1;
- (long long)fallbackRootID;
- (id)fallbackRootDocument;
- (void)setFallbackRootPath:(id)arg1;
- (long long)defaultRootID;
- (id)defaultRootDocument;
- (void)setDefaultRootPath:(id)arg1;
- (void)setRootURL:(id)arg1 forPath:(id)arg2 ofType:(id)arg3;
- (id)rootDocumentForPath:(id)arg1;
- (id)rootDocumentForType:(id)arg1;
- (id)urlForRootID:(long long)arg1;
- (long long)rootIDForType:(id)arg1;
- (id)rootTypeForID:(long long)arg1;
- (void)_loadDocRoots;
- (id)_standardizedRootURL:(id)arg1;
- (void)_loadMappingsFromProperties:(id)arg1;
- (BOOL)flush;
- (void)invalidate;
- (void)dealloc;

@end

@interface DSATextSearch : NSObject
{
    NSString *_query;
    unsigned long long _maxMatches;
    float _maxScore;
    DSATextIndex *_indexToSearch;
    unsigned int _options;
    DocSetIndexSearch *_search;
    long long *_documentIDs;
    const struct __CFString **_documentNames;
    float *_scores;
    const struct __CFSet *_nodeIDFilter;
}

- (id)searchResultsInTime:(double)arg1;
- (id)_getResults:(unsigned long long)arg1;
- (unsigned long long)_filterResults:(unsigned long long)arg1;
- (BOOL)isFinished;
- (float)maximumRelevanceForResults;
- (void)cancel;
- (void)filterResultsToDocIDs:(struct __CFSet *)arg1;
- (void)setNodeFilter:(id)arg1;
- (unsigned long long)maximumMatches;
- (void)setMaximumMatches:(unsigned long long)arg1;
- (unsigned int)options;
- (void)setOptions:(unsigned int)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)index;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;
- (id)initWithFilterableIndex:(id)arg1 query:(id)arg2 options:(unsigned int)arg3;

@end

__attribute__((visibility("hidden")))
@interface DSATextSearchQueue : NSObject
{
    DSADocSet *_docSet;
    DSATextSearch *_search;
    NSMutableArray *_searchQueue;
    NSMutableArray *_searchResults;
    BOOL _currentSearchCanceled;
    float _maximumRelevance;
}

+ (id)_mungeQueryString:(id)arg1 forMatchType:(unsigned long long)arg2;
+ (BOOL)_looksLikeSearchKitQuery:(id)arg1;
- (float)maximumRelevance;
- (id)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3;
- (void)cancelSearchWithDelegate:(id)arg1 contextInfo:(void *)arg2;
- (BOOL)addQueuedQuery:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
- (void)doOneSearch;
- (void)startSearch;
- (id)searchObject;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDocSet:(id)arg1;

@end

@interface DSATextSearchResult : NSObject
{
    id _searchResultIvars;
}

+ (id)searchResultWithPath:(id)arg1 searchResultID:(unsigned long long)arg2 documentID:(unsigned long long)arg3 docRootID:(unsigned long long)arg4 relevance:(float)arg5 fromIndex:(id)arg6;
- (id)title;
- (id)docRootType;
- (float)relevance;
- (long long)enclosingDocumentID;
- (id)enclosingDocument;
- (long long)parentNodeID;
- (id)parentNode;
- (unsigned long long)searchKitID;
- (id)URL;
- (id)url;
- (id)path;
- (id)docSet;
- (id)index;
- (BOOL)matchesDocumentInformation;
- (void)dealloc;
- (id)initWithPath:(id)arg1 searchResultID:(unsigned long long)arg2 documentID:(unsigned long long)arg3 docRootID:(unsigned long long)arg4 relevance:(float)arg5 fromIndex:(id)arg6;

@end

@interface DSAToken : NSManagedObject
{
    id _tokenIvars;
}

+ (id)descriptionForIDInformation:(id)arg1;
+ (id)tokenTypeCategoryForKey:(id)arg1 forLocalization:(id)arg2;
+ (id)standardizedLanguageForKey:(id)arg1;
- (id)URL;
- (id)url;
- (id)description;
- (id)tokenTypeCategory;
- (id)deprecationVersionStatementAsOfVersion:(id)arg1;
- (id)deprecationVersionStatement;
- (id)availabilityVersionStatement;
- (id)availabilityInformationAsOfDistributionVersion:(CDStruct_6df46f26)arg1 forArchitectures:(id)arg2;
- (id)_lastRemovalStringForArchitectures:(id)arg1 fromRemovedVersions:(id)arg2;
- (id)mergedRelatedTokens;
- (id)relatedTokens;
- (id)distributionName;
- (id)removedAfterVersionString;
- (id)removedAfterVersions;
- (id)removedAfterVersion;
- (void)setRemovedAfterVersions:(id)arg1;
- (void)setRemovedAfterVersion:(id)arg1;
- (id)deprecatedInVersionString;
- (id)deprecatedInVersions;
- (id)deprecatedInVersion;
- (void)setDeprecatedInVersions:(id)arg1;
- (void)setDeprecatedInVersion:(id)arg1;
- (id)introducedInVersionString;
- (id)introducedInVersions;
- (id)introducedInVersion;
- (void)setIntroducedInVersions:(id)arg1;
- (void)setIntroducedInVersion:(id)arg1;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (id)filePath;
- (id)file;
- (void)setFile:(id)arg1;
- (id)relatedDocuments;
- (void)setRelatedDocuments:(id)arg1;
- (id)relatedSampleCode;
- (void)setRelatedSampleCode:(id)arg1;
- (id)relatedGroups;
- (void)setRelatedGroups:(id)arg1;
- (id)seeAlsoRelatedTokens;
- (void)setSeeAlsoRelatedTokens:(id)arg1;
- (id)deprecationSummaryAsHTML;
- (id)deprecationSummary;
- (void)setDeprecationSummary:(id)arg1;
- (id)declaredInFrameworkName;
- (id)declaredInHeaderURL;
- (id)declaredIn;
- (void)setDeclaredIn:(id)arg1;
- (id)returnValueAbstractAsHTML;
- (id)returnValueInfo;
- (void)setReturnValueInfo:(id)arg1;
- (id)parametersInfo;
- (void)setParametersInfo:(id)arg1;
- (id)declarationAsHTML;
- (id)declaration;
- (void)setDeclaration:(id)arg1;
- (id)abstractAsHTML;
- (id)abstract;
- (void)setAbstract:(id)arg1;
- (id)parentNode;
- (void)setParentNode:(id)arg1;
- (id)tokenName;
- (void)setTokenName:(id)arg1;
- (id)scope;
- (id)type;
- (id)apiLanguage;
- (id)name;
- (id)_metainfoCreatingIfMissing:(BOOL)arg1;
- (id)docSet;

@end

@interface DSATokenIndex : NSObject
{
    DSADocSet *_docSet;
    NSManagedObjectContext *_moc;
    BOOL _readOnly;
    NSNumber *_tokensHaveParents;
    unsigned long long _maxSortOrder;
    NSMutableDictionary *_fullNameLookup;
    NSMutableDictionary *_languageMOs;
    NSMutableDictionary *_tokenTypeMOs;
    NSMutableDictionary *_distributionMOs;
    NSMutableDictionary *_containerMOs;
    NSMutableDictionary *_headerMOs;
}

+ (id)idInformationForIDString:(id)arg1;
+ (id)idInformationForIDXMLElement:(id)arg1;
- (id)lowercaseUTF8ByteForString:(id)arg1;
- (id)createRelatedTokenGroupNamed:(id)arg1 withTokens:(id)arg2;
- (id)createTokenWithIDInformation:(id)arg1;
- (id)managedObjectsForContainer;
- (id)managedObjectsForTokenType;
- (id)managedObjectsForLanguage;
- (long long)languageCount;
- (id)managedObjectForContainer:(id)arg1 creatingIfMissing:(BOOL)arg2;
- (id)managedObjectForDistribution:(id)arg1 version:(id)arg2 architecture:(int)arg3 creatingIfMissing:(BOOL)arg4;
- (id)managedObjectForTokenType:(id)arg1 creatingIfMissing:(BOOL)arg2;
- (id)managedObjectForFilePath:(id)arg1 creatingIfMissing:(BOOL)arg2;
- (id)managedObjectForHeader:(id)arg1 framework:(id)arg2 creatingIfMissing:(BOOL)arg3;
- (id)managedObjectForLanguage:(id)arg1 creatingIfMissing:(BOOL)arg2;
- (id)_managedObjectWithName:(id)arg1 forEntity:(id)arg2 withKeyName:(id)arg3 creatingIfMissing:(BOOL)arg4 inMutableDictionary:(id *)arg5;
- (id)_mutableDictionaryForEntity:(id)arg1 forKey:(id)arg2;
- (id)idInformationForIDString:(id)arg1;
- (id)idInformationForIDXMLElement:(id)arg1;
- (id)nodeWithID:(long long)arg1;
- (BOOL)saveChanges:(id *)arg1;
- (BOOL)deleteTokenReferences;
- (void)_resetTableForEntityNamed:(id)arg1;
- (unsigned long long)maxSortOrder;
- (BOOL)tokensHaveParents;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)readOnly;
- (id)managedObjectContext;
- (void)setManagedObjectContext:(id)arg1;
- (id)docSet;
- (void)dealloc;
- (id)initWithDocSet:(id)arg1;
- (id)tokensMatchingCriteria:(id)arg1 error:(id *)arg2;
- (unsigned long long)countTokensMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)tokenIDsMatchingPredicate:(id)arg1 withSortDescriptors:(id)arg2 error:(id *)arg3;
- (id)tokensMatchingPredicate:(id)arg1 withSortDescriptors:(id)arg2 error:(id *)arg3;
- (id)_tokensMatchingPredicate:(id)arg1 withSortDescriptors:(id)arg2 returningType:(unsigned long long)arg3 error:(id *)arg4;
- (id)predicateForQuery:(id)arg1;
- (id)_predicateForLanguageCriterion:(id)arg1;

@end

__attribute__((visibility("hidden")))
@interface DSATokenSearchManager : NSObject
{
    NSMutableArray *_searchQueue;
    unsigned int _nextQueuePosition;
    NSTimer *_fetchTimer;
}

+ (id)sharedManager;
- (void)doNextFetch;
- (BOOL)startTokenSearch:(id)arg1 inDocSets:(id)arg2 withSortDescriptors:(id)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
- (void)cancelSearchWithDelegate:(id)arg1 contextInfo:(void *)arg2;
- (void)dealloc;
- (id)init;

@end

__attribute__((visibility("hidden")))
@interface DSATokenSearchQueue : NSObject
{
    DSADocSet *_docSet;
    DSATokenIndex *_foregroundIndex;
    DSATokenIndex *_backgroundIndex;
    NSMutableArray *_searchQueue;
    NSMutableArray *_searchResults;
    BOOL _currentSearchCanceled;
    NSConditionLock *_searchState;
    BOOL _fetchIsInProgress;
    BOOL _stopProcessing;
}

- (BOOL)containsTokens:(id)arg1;
- (id)searchForTokens:(id)arg1 inNodes:(id)arg2;
- (id)foregroundIndex;
- (void)cancelSearchWithDelegate:(id)arg1 contextInfo:(void *)arg2;
- (BOOL)addQueuedQuery:(id)arg1 inNodes:(id)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (void)doOneSearch;
- (void)startSearch;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDocSet:(id)arg1;
- (void)_performIterativeSearch:(id)arg1;
- (void)_performAtomicSearch:(id)arg1;
- (void)_addResultsToQueue:(id)arg1;
- (void)processOneQuery;
- (void)processBackgroundSearches;
- (id)backgroundIndex;

@end

__attribute__((visibility("hidden")))
@interface DSATokenSource : DSAResultSource
{
    DSADocSet *_docSet;
    NSDictionary *_query;
    DSABackgroundThreadQueue *_backgroundQueue;
    NSPredicate *_predicate;
    NSArray *_rationalizedSortDescriptors;
    int _batchType;
    BOOL _ascending;
    NSMutableDictionary *_batchInfo;
    NSMutableArray *_searchResultIDs;
    NSMutableArray *_cachedResults;
    BOOL _cancelSearch;
    BOOL _backgroundIsFinished;
    BOOL _sortOnMainThread;
    BOOL _hasReturnedResults;
}

- (id)nextResultsInTime:(double)arg1;
- (id)remainingResults;
- (BOOL)hasMoreResults;
- (id)_convertNextIDsToObjectsInTime:(double)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 forDocSet:(id)arg2 withSortDescriptor:(id)arg3;
- (id)_performNextFetch;
- (void)_initBatchInfo;
- (void)_configureFetchesForQuery:(id)arg1 andSortDescriptor:(id)arg2;
- (void)performFetch;

@end

__attribute__((visibility("hidden")))
@interface DSAUpdateManager : NSObject <DSADownloaderDelegate>
{
    NSMutableDictionary *_activeDownloaders;
    NSMutableArray *_updates;
    NSConnection *_daemonConnection;
    NSMachPort *_daemonLivePort;
    NSConnection *_agentConnection;
    NSMachPort *_agentLivePort;
    NSMutableDictionary *_blessedLocations;
}

+ (id)sharedUpdateManager;
- (void)_installFinishedForUpdate:(id)arg1 atPath:(id)arg2;
- (void)installDidFinishForArchive:(id)arg1 atPath:(id)arg2;
- (void)installDidFailForArchive:(id)arg1 withCode:(int)arg2 andInfo:(id)arg3;
- (BOOL)verifyDocSetForArchive:(id)arg1 atPath:(id)arg2;
- (void)_checkForUpdatedContentForUpdateIdentifier:(id)arg1;
- (id)_installErrorForCode:(int)arg1 andInfo:(id)arg2 forUpdate:(id)arg3;
- (id)_truncatedMessageFromDictionary:(id)arg1;
- (id)downloader:(id)arg1 needsCredentialForChallenge:(id)arg2;
- (void)downloaderDidFinish:(id)arg1;
- (void)_quarantineDownload:(id)arg1 forUpdate:(id)arg2;
- (void)downloader:(id)arg1 didMakeProgress:(float)arg2;
- (void)downloader:(id)arg1 willDownloadFile:(id)arg2 ofSize:(long long)arg3;
- (id)_volumeNameForPath:(id)arg1 volumeNumber:(short *)arg2;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2;
- (void)_finishUpdate:(id)arg1;
- (void)cancelUpdate:(id)arg1;
- (void)_cancelAllUpdates;
- (void)_removeUpdate:(id)arg1;
- (void)addUpdate:(id)arg1;
- (BOOL)_uniqueInstallPathForUpdate:(id)arg1 error:(id *)arg2;
- (BOOL)_blessUpdate:(id)arg1 error:(id *)arg2;
- (id)_reapProcessWithOutput:(id)arg1;
- (unsigned int)_destinationStatusForUpdate:(id)arg1;
- (void)_runMaximumDownloads;
- (BOOL)_createDownloaderForUpdate:(id)arg1;
- (id)downloaderForUpdate:(id)arg1;
- (id)_updateForDownloader:(id)arg1;
- (id)_downloaderForArchivePath:(id)arg1;
- (BOOL)installDownload:(id)arg1 forUpdate:(id)arg2;
- (BOOL)_updateIsFromApple:(id)arg1;
- (id)_agentProxy;
- (void)_setupAgentConnection;
- (void)_agentDied:(id)arg1;
- (id)_agentPort;
- (id)_daemonProxy;
- (BOOL)_enableDaemon;
- (id)_daemonPort;
- (void)_daemonDied:(id)arg1;
- (void)_cancelInstallingUpdatesUsingAgent:(BOOL)arg1;
- (int)_authorizeInstallationForUpdate:(id)arg1;
- (int)_authorizeEnablingDaemon:(struct AuthorizationOpaqueRef *)arg1;
- (int)_authorizeBlessTool:(struct AuthorizationOpaqueRef *)arg1 forUpdate:(id)arg2;
- (void)dealloc;

@end

@interface DocSetCategory : DSANode
{
}

+ (Class)class;

@end

@interface DocSetConfiguration : DSADocSet
{
}

@end

@interface DocSetFilteredIndexSearch : DSATextSearch
{
}

@end

@interface DocSetHTMLExtractor : NSObject
{
}

+ (id)attributesFromString:(id)arg1;
+ (unsigned long long)_encodingForContentType:(id)arg1;
+ (unsigned long long)encodingForHTMLData:(id)arg1;
+ (id)extractTextFromXMLElement:(id)arg1 returningTitle:(id *)arg2;
+ (id)extractTextFromHTMLString:(id)arg1 returningTitle:(id *)arg2;
+ (id)extractTextFromHTMLFile:(id)arg1 returningTitle:(id *)arg2;

@end

@interface DocSetIndexDocument : NSObject
{
    const void *_searchDocument;
}

+ (id)searchDocumentWithScheme:(id)arg1 parent:(id)arg2 name:(id)arg3;
+ (id)searchDocumentWithURL:(id)arg1;
- (void *)documentRef;
- (id)parent;
- (id)name;
- (id)schemeName;
- (id)URL;
- (void)dealloc;
- (id)initWithScheme:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithSKDocumentRef:(void *)arg1;

@end

@interface DocSetIndexDocumentIterator : NSObject
{
    struct __SKIndexDocumentIterator *_indexDocumentIterator;
}

- (id)nextDocument;
- (void)dealloc;
- (id)initWithIndex:(id)arg1 parentDocument:(id)arg2;

@end

@interface DocSetIndexSearch : NSObject
{
    struct __SKSearch *_search;
    BOOL _moreToSearch;
}

- (void)cancel;
- (BOOL)isFinished;
- (unsigned long long)findMaximumMatches:(unsigned long long)arg1 inMaximumTime:(double)arg2 returningIDs:(long long *)arg3 andScores:(float *)arg4;
- (struct __SKSearch *)searchRef;
- (void)finalize;
- (void)dealloc;
- (id)initWithIndex:(id)arg1 query:(id)arg2 options:(unsigned int)arg3;

@end

@interface DocSetXMLConverter : NSObject
{
    NSXMLDocument *_docSetInfo;
    NSManagedObjectContext *_moc;
    id *_error;
    NSMutableDictionary *_nodesByID;
    NSMutableSet *_nodesWithoutIDs;
}

+ (BOOL)updateDocSetInfo:(id)arg1 error:(id *)arg2;
+ (BOOL)convertXML:(id)arg1 toContext:(id)arg2 withError:(id *)arg3;
- (BOOL)_updateContext;
- (BOOL)_setUpReleaseNotes;
- (void)_resetTableForEntityNamed:(id)arg1;
- (BOOL)_setUpNodes;
- (void)_addSubnodes:(id)arg1 toNode:(id)arg2 withCache:(id)arg3;
- (id)_nodeForXMLNode:(id)arg1 withCache:(id)arg2;
- (void)_setUpNodes:(id)arg1 withCache:(id)arg2;
- (BOOL)_setUpDocSet;
- (void)_assignIDsToNodes;
- (id)_nodeForID:(int)arg1;
- (void)_addNode:(id)arg1 withID:(int)arg2;
- (void)_addNodeWithoutID:(id)arg1;
- (void)dealloc;
- (id)initWithXML:(id)arg1 withContext:(id)arg2 withError:(id *)arg3;

@end

@interface NSFileManager (DocSetPrivateAddition)
- (BOOL)_dr_createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
@end

@interface NSString (DocSetPrivateAddition)
- (id)_dsa_stringAsPathComponent;
@end

@interface NSURL (DocSetPrivateAddition)
- (BOOL)_dsa_isAppleURL;
@end

@interface NSXMLElement (DocSetPrivateAddition)
- (id)_dr_firstChildNamed:(id)arg1;
@end

__attribute__((visibility("hidden")))
@interface _DSADocSetIvars : NSObject
{
    struct __CFBundle *_docSetBundle;
    NSString *_localization;
    BOOL _isLegacy;
    int _modelVersion;
    NSURL *_documentsURL;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    DSATextSearchQueue *_textSearchQueue;
    DSATokenSearchQueue *_tokenSearchQueue;
    NSMutableDictionary *_indexesByName;
    DSATokenIndex *_mainTokenIndex;
    DSABackgroundThreadQueue *_backgroundThreadQueue;
    NSManagedObject *_docSetMO;
    DSANode *_rootNode;
    const struct __CFDictionary *_nodesByID;
    NSArray *_apiLanguageMOs;
    NSMutableDictionary *_nodesByPath;
    NSArray *_availabilityArchitectures;
}

@end

__attribute__((visibility("hidden")))
@interface _DSANodeIvars : NSObject
{
    NSArray *_subnodes;
    NSNumber *_isRootNode;
}

- (void)dealloc;

@end

__attribute__((visibility("hidden")))
@interface _XCDocSetTextSearchResultIvars : NSObject
{
    DSATextIndex *_index;
    unsigned long long _skID;
    unsigned long long _docID;
    unsigned long long _rootID;
    NSString *_path;
    float _relevance;
    NSString *_title;
}

@end

