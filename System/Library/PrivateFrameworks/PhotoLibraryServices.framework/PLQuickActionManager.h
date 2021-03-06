/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue, PLDatabaseContext, NSData, SBSApplicationShortcutService;

@interface PLQuickActionManager : NSObject {

	id _cameraWellObserver;
	NSOperationQueue* _operationQueue;
	PLDatabaseContext* _databaseContext;
	BOOL __mostRecentPhotoIsInvalid;
	NSData* __cachedMostRecentPhotoData;
	SBSApplicationShortcutService* __appShortcutService;
	Class __SBSApplicationShortcutServiceClass;
	Class __SBSApplicationShortcutItemClass;
	Class __SBSApplicationShortcutCustomImageIconClass;

}

@property (setter=_setCachedMostRecentPhotoData:,nonatomic,retain) NSData * _cachedMostRecentPhotoData;                                             //@synthesize _cachedMostRecentPhotoData=__cachedMostRecentPhotoData - In the implementation block
@property (assign,setter=_setMostRecentPhotoIsInvalid:,nonatomic) BOOL _mostRecentPhotoIsInvalid;                                                   //@synthesize _mostRecentPhotoIsInvalid=__mostRecentPhotoIsInvalid - In the implementation block
@property (setter=_setAppShortcutService:,nonatomic,retain) SBSApplicationShortcutService * _appShortcutService;                                    //@synthesize _appShortcutService=__appShortcutService - In the implementation block
@property (setter=_setSBSApplicationShortcutServiceClass:,nonatomic,retain) Class _SBSApplicationShortcutServiceClass;                              //@synthesize _SBSApplicationShortcutServiceClass=__SBSApplicationShortcutServiceClass - In the implementation block
@property (setter=_setSBSApplicationShortcutItemClass:,nonatomic,retain) Class _SBSApplicationShortcutItemClass;                                    //@synthesize _SBSApplicationShortcutItemClass=__SBSApplicationShortcutItemClass - In the implementation block
@property (setter=_setSBSApplicationShortcutCustomImageIconClass:,nonatomic,retain) Class _SBSApplicationShortcutCustomImageIconClass;              //@synthesize _SBSApplicationShortcutCustomImageIconClass=__SBSApplicationShortcutCustomImageIconClass - In the implementation block
-(NSData *)_cachedMostRecentPhotoData;
-(BOOL)_userHasPhotos;
-(void)_setAppShortcutService:(id)arg1 ;
-(id)initWithDatabaseContext:(id)arg1 ;
-(void)_setSBSApplicationShortcutItemClass:(Class)arg1 ;
-(Class)_SBSApplicationShortcutServiceClass;
-(BOOL)_userHasPhotosFromLastYear;
-(id)_buildFavoritesQuickAction;
-(void)cameraPreviewWellImageDidChange;
-(SBSApplicationShortcutService *)_appShortcutService;
-(void)_setSBSApplicationShortcutServiceClass:(Class)arg1 ;
-(void)_setMostRecentPhotoIsInvalid:(BOOL)arg1 ;
-(void)_setSBSApplicationShortcutCustomImageIconClass:(Class)arg1 ;
-(Class)_SBSApplicationShortcutCustomImageIconClass;
-(id)_buildSearchQuickAction;
-(void)_setCachedMostRecentPhotoData:(id)arg1 ;
-(Class)_SBSApplicationShortcutItemClass;
-(BOOL)_mostRecentPhotoIsInvalid;
-(void)buildQuickActionItems;
-(id)_shortcutSystemImageNamed:(id)arg1 ;
-(id)_buildOneYearAgoQuickAction;
-(id)_buildMostRecentPhotoQuickAction;
-(void)dealloc;
@end

