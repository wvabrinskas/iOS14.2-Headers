/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UIDocument.h>

@protocol OKDocumentDelegate;
@class OKPresentation, NSRecursiveLock;

@interface OKDocument : UIDocument {

	OKPresentation* _presentation;
	NSRecursiveLock* _posterImageLock;
	CGImageRef _posterImage;
	BOOL _hasPosterImageChanged;
	BOOL _isClosing;
	id<OKDocumentDelegate> _delegate;

}

@property (assign) BOOL hasPosterImageChanged;                             //@synthesize hasPosterImageChanged=_hasPosterImageChanged - In the implementation block
@property (assign) BOOL isClosing;                                         //@synthesize isClosing=_isClosing - In the implementation block
@property (retain) OKPresentation * presentation;                          //@synthesize presentation=_presentation - In the implementation block
@property (assign) CGImageRef posterImage;                                 //@synthesize posterImage=_posterImage - In the implementation block
@property (assign,nonatomic) id<OKDocumentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_fileWrapperPosterImageFilenameKeyWithResolution:(unsigned long long)arg1 ;
+(id)_posterImageURLForFileURL:(id)arg1 withResolution:(unsigned long long)arg2 ;
+(id)_importedResourceURLWithHash:(id)arg1 ;
+(id)_importedResourcesDirectoryURLForDocumentURL:(id)arg1 ;
+(id)_hashForImportedResourceURL:(id)arg1 ;
+(id)_importedResourceDirectoryURLForImportedResourceURL:(id)arg1 withDocumentURL:(id)arg2 ;
+(CGImageRef)retainedPosterImageForFileURL:(id)arg1 withResolution:(unsigned long long)arg2 coordinateReading:(BOOL)arg3 ;
+(id)infoForFileURL:(id)arg1 coordinateReading:(BOOL)arg2 ;
+(id)_scriptURLForDocumentURL:(id)arg1 ;
+(id)_importedMediaURLForImportedResourceURL:(id)arg1 withDocumentURL:(id)arg2 extension:(id)arg3 ;
+(id)_importedThumbnailURLForImportedResourceURL:(id)arg1 withDocumentURL:(id)arg2 withExtension:(id)arg3 ;
+(id)_importedMetadataURLForImportedResourceURL:(id)arg1 withDocumentURL:(id)arg2 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id*)arg5 ;
-(id<OKDocumentDelegate>)delegate;
-(id)initWithFileURL:(id)arg1 ;
-(id)contentsForType:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)isClosing;
-(void)saveToURL:(id)arg1 forSaveOperation:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(void)revertToContentsOfURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)documentURL;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(void)setDelegate:(id<OKDocumentDelegate>)arg1 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(CGImageRef)posterImage;
-(void)setPosterImage:(CGImageRef)arg1 ;
-(id)localizedName;
-(void)_commonInit;
-(void)enableEditing;
-(OKPresentation *)presentation;
-(void)disableEditing;
-(void)dealloc;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)_didReceiveMemoryWarningNotification:(id)arg1 ;
-(void)_didEnterBackgroundNotification:(id)arg1 ;
-(void)_willEnterForegroundNotification:(id)arg1 ;
-(id)_scriptURL;
-(void)_willTerminateNotification:(id)arg1 ;
-(void)setHasPosterImageChanged:(BOOL)arg1 ;
-(BOOL)hasPosterImageChanged;
-(void)_cleanupUnusedResources;
-(void)setIsClosing:(BOOL)arg1 ;
-(BOOL)_hasUnusedResources;
-(void)_updateChangeCount:(unsigned long long)arg1 ;
-(id)_metadataObjectForKey:(id)arg1 forImportedResourceURL:(id)arg2 ;
-(id)_importedResourcesDirectoryURL;
-(id)_importedResourceDirectoryURLForImportedResourceURL:(id)arg1 ;
-(id)_extensionForImportedResourceURL:(id)arg1 ;
-(id)_extensionForThumbnailImportedResourceURL:(id)arg1 ;
-(id)_importedThumbnailsDirectoryURLForImportedResourceURL:(id)arg1 ;
-(id)_importedResourceURLForRessourceURL:(id)arg1 ;
-(BOOL)isImportedResourceURLEmbedded:(id)arg1 ;
-(id)importResourceURL:(id)arg1 opaque:(BOOL)arg2 force:(BOOL)arg3 progressBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(id)_importedResourceDirectoryURLForImportedResourceURL:(id)arg1 withImportedResourcesDirectoryURL:(id)arg2 ;
-(id)_importedMediaURLForImportedResourceURL:(id)arg1 ;
-(id)_importedThumbnailURLForImportedResourceURL:(id)arg1 ;
-(id)_importedMetadataURLForImportedResourceURL:(id)arg1 ;
-(id)_importedThumbnailURLForImportedResourceURL:(id)arg1 resolution:(unsigned long long)arg2 ;
-(BOOL)_readImportedResourceURL:(id)arg1 size:(CGSize)arg2 error:(id*)arg3 byThumbnailAccessor:(/*^block*/id)arg4 ;
-(BOOL)_readImportedResourceURL:(id)arg1 error:(id*)arg2 byMediaAccessor:(/*^block*/id)arg3 ;
-(BOOL)_updateImportedResourceURL:(id)arg1 size:(CGSize)arg2 error:(id*)arg3 byThumbnailAccessor:(/*^block*/id)arg4 ;
-(BOOL)_readImportedResourceURL:(id)arg1 error:(id*)arg2 byThumbnailAccessor:(/*^block*/id)arg3 ;
-(BOOL)_readImportedResourceURL:(id)arg1 error:(id*)arg2 byMetadataAccessor:(/*^block*/id)arg3 ;
-(id)_metadataForImportedResourceURL:(id)arg1 ;
-(id)_importedMediaURLForImportedResourceURL:(id)arg1 withImportedResourceDirectoryURL:(id)arg2 withExtension:(id)arg3 ;
-(id)_importedThumbnailURLForImportedResourceURL:(id)arg1 withImportedResourceDirectoryURL:(id)arg2 withExtension:(id)arg3 ;
-(id)_importedMetadataURLWithImportedResourceDirectoryURL:(id)arg1 ;
-(id)_importedThumbnailsURLWithImportedResourceDirectoryURL:(id)arg1 ;
-(id)importResourceURLs:(id)arg1 opaque:(BOOL)arg2 force:(BOOL)arg3 progressBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(BOOL)deleteImportedResourceURLs:(id)arg1 progressBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)prepareMediaURL:(id)arg1 force:(BOOL)arg2 colorSpace:(id)arg3 progressBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(id)prepareMediaURLs:(id)arg1 force:(BOOL)arg2 colorSpace:(id)arg3 progressBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(BOOL)_updateImportedResourceURL:(id)arg1 error:(id*)arg2 byMetadataAccessor:(/*^block*/id)arg3 ;
-(id)importedResourceURLs;
-(BOOL)_hasThumbnailForImportedResourceURL:(id)arg1 size:(CGSize)arg2 ;
-(CGImageRef)_thumbnailForImportedResourceURL:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)_hasThumbnailFromMediaForImportedResourceURL:(id)arg1 ;
-(CGImageRef)_thumbnailFromMediaForImportedResourceURL:(id)arg1 ;
-(CGImageRef)_thumbnailFromMediaForImportedResourceURL:(id)arg1 size:(CGSize)arg2 ;
-(void)_saveThumbnailToDisk:(CGImageRef)arg1 forImportedResourceURL:(id)arg2 size:(CGSize)arg3 ;
-(BOOL)_hasThumbnailForImportedResourceURL:(id)arg1 ;
-(CGImageRef)_thumbnailForImportedResourceURL:(id)arg1 ;
@end
