/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NPSDomainAccessor, NPSManager, NSArray;

@interface IPWatchLocaleController : NSObject {

	NPSDomainAccessor* _gizmoGlobalDomain;
	NPSManager* _syncManager;
	NSArray* _systemLanguages;

}

@property (nonatomic,retain) NPSDomainAccessor * gizmoGlobalDomain;              //@synthesize gizmoGlobalDomain=_gizmoGlobalDomain - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                           //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) NSArray * systemLanguages;                          //@synthesize systemLanguages=_systemLanguages - In the implementation block
-(id)init;
-(void)setLocale:(id)arg1 ;
-(NPSManager *)syncManager;
-(NSArray *)systemLanguages;
-(void)setSystemLanguages:(NSArray *)arg1 ;
-(id)deviceLanguage;
-(void)updateLocale:(id)arg1 ;
-(id)preferredLanguages;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(void)setLanguages:(id)arg1 ;
-(id)initWithSystemLanguages:(id)arg1 ;
-(NPSDomainAccessor *)gizmoGlobalDomain;
-(void)resetTimeFormat;
-(void)postLocaleChangedNotification;
-(void)mirrorLanguagesAndLocaleToWatch;
-(void)initializeMirrorSettings;
-(void)setGizmoGlobalDomain:(NPSDomainAccessor *)arg1 ;
@end

