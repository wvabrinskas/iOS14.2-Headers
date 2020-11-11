/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PSSystemPolicyManager : NSObject
+(BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1 ;
+(BOOL)_cellularDataSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_documentSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_defaultAppSettingsNeededForBundleID:(id)arg1 ;
+(BOOL)_languageSettingNeededForBundleID:(id)arg1 ;
+(BOOL)_notificationSettingsNeededForBundleID:(id)arg1 ;
+(id)_thirdPartyApplicationProxies;
+(BOOL)_systemSettingsNeededForProxy:(id)arg1 ;
+(void)_populateBBSectionIDs;
+(id)thirdPartyApplications;
+(id)thirdPartyApplicationProxies;
+(id)_thirdPartyApplicationProxyForBundleID:(id)arg1 ;
+(id)thirdPartyApplicationForBundleID:(id)arg1 ;
+(id)thirdPartyApplicationProxyForBundleID:(id)arg1 ;
+(id)thirdPartyApplicationsIncludingAppClips:(BOOL)arg1 ;
+(BOOL)hasAnyAppClip;
+(BOOL)_shouldIncludeProxy:(id)arg1 ;
+(id)specifiersForThirdPartyApps:(id)arg1 ;
+(BOOL)_privacySettingsNeededForProxy:(id)arg1 ;
+(id)_dataUsageWorkspaceInfo;
@end
