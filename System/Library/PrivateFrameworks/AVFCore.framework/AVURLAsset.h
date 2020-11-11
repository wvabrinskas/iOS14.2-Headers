/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>
#import <AVFCore/AVContentKeyRecipient.h>

@class AVURLAssetInternal, NSString, AVAssetResourceLoader, NSURL;

@interface AVURLAsset : AVAsset <AVContentKeyRecipient> {

	AVURLAssetInternal* _URLAsset;

}

@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly; 
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) BOOL mayRequireContentKeysForMediaDataProcessing; 
@property (nonatomic,copy,readonly) NSURL * URL; 
+(long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1 ;
+(long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1 ;
+(id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(BOOL)arg3 error:(id*)arg4 ;
+(id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 assetLoggingIdentifier:(id)arg2 figAssetCreationFlags:(unsigned long long*)arg3 error:(id*)arg4 ;
+(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1 ;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)_UTTypes;
+(id)URLAssetWithURL:(id)arg1 options:(id)arg2 ;
+(id)_figFileMIMETypes;
+(id)_figStreamingMIMETypes;
+(id)_figStreamingUTIs;
+(id)_figFileUTIs;
+(id)_figFilePathExtensions;
+(id)_fileUTTypes;
+(id)_streamingUTTypes;
+(id)_figMIMETypes;
+(id)audiovisualMIMETypes;
+(id)_avfValidationPlist;
+(id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1 ;
+(id)_figHFSFileTypes;
+(id)audiovisualTypes;
+(BOOL)isPlayableExtendedMIMEType:(id)arg1 ;
+(id)instanceIdentifierMapTable;
+(id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1 ;
+(void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2 ;
+(id)userInfoObjectForURLAsset:(id)arg1 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
-(void)cancelLoading;
-(id)lyrics;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)cacheKey;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)tracks;
-(id)init;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_absoluteURL;
-(unsigned long long)referenceRestrictions;
-(void)_tracksDidChange;
-(BOOL)_requiresInProcessOperation;
-(BOOL)_hasResourceLoaderDelegate;
-(Class)_classForFigAssetInspectorLoader;
-(void)_setAssetInspectorLoader:(id)arg1 ;
-(id)_resourceLoaderWithRemoteHandlerContext:(id)arg1 ;
-(void)_removeUserInfoObject;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(Class)_classForAssetTracks;
-(void)_ensureAssetDownloadCache;
-(id)creationOptions;
-(id)_managedAssetCache;
-(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
-(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(id)downloadDestinationURL;
-(BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
-(void)_setUserInfoObject:(id)arg1 ;
-(BOOL)mayRequireContentKeysForMediaDataProcessing;
-(BOOL)_attachedToExternalContentKeySession;
-(int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(BOOL*)arg2 ;
-(id)contentKeySession;
-(id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2 ;
-(Class)_classForTrackInspectors;
-(unsigned long long)downloadToken;
-(id)SHA1Digest;
-(id)resolvedURL;
-(id)identifyingTag;
-(id)description;
-(void)_removeFigAssetNotifications;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(AVAssetResourceLoader *)resourceLoader;
-(OpaqueFigFormatReaderRef)_formatReader;
-(void)_addFigAssetNotifications;
-(id)identifyingTagClass;
-(id)_instanceIdentifier;
-(void)expire;
-(id)originalNetworkContentURL;
-(NSURL *)URL;
-(void)dealloc;
-(id)assetCache;
@end
