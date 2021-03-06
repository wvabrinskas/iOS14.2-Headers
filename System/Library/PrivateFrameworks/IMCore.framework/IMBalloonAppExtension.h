/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMBalloonPlugin.h>

@class NSExtension, LSPlugInKitProxy, NSUUID, NSString, NSNumber;

@interface IMBalloonAppExtension : IMBalloonPlugin {

	BOOL _canSendDataPayloads;
	BOOL _shouldBalloonHideAppIcon;
	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;
	NSUUID* _requestIdentifier;

}

@property (nonatomic,readonly) NSString * containingBundleIdentifier; 
@property (nonatomic,retain) LSPlugInKitProxy * proxy;                             //@synthesize proxy=_proxy - In the implementation block
@property (assign) NSUUID * requestIdentifier;                                     //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL canSendDataPayloads;                             //@synthesize canSendDataPayloads=_canSendDataPayloads - In the implementation block
@property (assign,nonatomic) BOOL shouldBalloonHideAppIcon;                        //@synthesize shouldBalloonHideAppIcon=_shouldBalloonHideAppIcon - In the implementation block
@property (nonatomic,retain,readonly) NSExtension * extension;                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * itemID; 
@property (nonatomic,retain,readonly) id<PKPlugIn> plugin; 
@property (nonatomic,readonly) BOOL isLaunchProhibited; 
-(NSString *)containingBundleIdentifier;
-(id)__ck_statusImage;
-(id)_adamID;
-(id)__ck_breadcrumbImage;
-(id)_validProxy;
-(id)__ck_browserImageGenerateSynchronously:(BOOL)arg1 interfaceStyle:(long long)arg2 ;
-(BOOL)__ck_preferIconServices;
-(id)__ck_iconServicesBundleIdentifier;
-(id)__ck_generateAssetCatalogImageForInterfaceStyle:(long long)arg1 ;
-(id)_generatePlaceholderImageForInterfaceStyle:(long long)arg1 ;
-(id)__ck_browserImageForInterfaceStyle:(long long)arg1 ;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(LSPlugInKitProxy *)proxy;
-(BOOL)isLaunchProhibited;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(id)version;
-(NSUUID *)requestIdentifier;
-(id<PKPlugIn>)plugin;
-(BOOL)canSendDataPayloads;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(NSNumber *)itemID;
-(NSExtension *)extension;
-(BOOL)isBetaPlugin;
-(id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 ;
-(BOOL)shouldBalloonHideAppIcon;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
-(void)setCanSendDataPayloads:(BOOL)arg1 ;
-(void)setShouldBalloonHideAppIcon:(BOOL)arg1 ;
@end

