/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBSHomeScreenServiceServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class BSServiceConnection, NSObject, NSArray;

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface> {

	BSServiceConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (assign,getter=isLowDensityIconLayoutEnabled,nonatomic) BOOL lowDensityIconLayoutEnabled; 
@property (assign,nonatomic) BOOL addsNewIconsToHomeScreen; 
@property (assign,nonatomic) BOOL showsBadgesInAppLibrary; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationPlaceholderBundleIdentifiers; 
-(void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)arg1 ;
-(BOOL)showsBadgesInAppLibrary;
-(void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)runRemoveAndRestoreIconTest;
-(NSArray *)allHomeScreenApplicationPlaceholderBundleIdentifiers;
-(void)requestAppLibraryUpdateWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetCategoriesLayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)changeDisplayedDateOffsetOverride:(double)arg1 ;
-(id)init;
-(BOOL)addsNewIconsToHomeScreen;
-(void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1 ;
-(void)configureDeweyEachAppHasItsOwnCategory;
-(oneway void)runFloatingDockStressTestWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAllWidgets;
-(BOOL)hasWidgetWithBundleIdentifier:(id)arg1 ;
-(BOOL)debugContinuityWithBadgeType:(id)arg1 ;
-(void)changeDisplayedDateOverride:(id)arg1 ;
-(void)overrideBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setShowsBadgesInAppLibrary:(BOOL)arg1 ;
-(void)configureDeweyOneCategoryWithAllApps;
-(void)reloadIcons;
-(BOOL)isLowDensityIconLayoutEnabled;
-(NSArray *)allHomeScreenApplicationBundleIdentifiers;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1 ;
-(void)runDownloadingIconTest;
-(void)setAddsNewIconsToHomeScreen:(BOOL)arg1 ;
-(void)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)ignoreAllApps;
-(void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)arg1 ;
-(void)setLowDensityIconLayoutEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1 ;
@end
