//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SBFMagnifyMode, SBFWallpaperConfiguration;
@protocol SBFProceduralWallpaperProvider, SBFWallpaperConfigurationManagerDelegate;

@interface SBFWallpaperConfigurationManager : NSObject <BSDescriptionProviding>
{
    NSMutableDictionary *_wallpaperImageCache;
    int _externalNotificationToken;
    unsigned long long _batchChangeCount;
    long long _batchNotifyVariants;
    _Bool _enableWallpaperDimming;
    _Bool _cachedVariantsShareWallpaperConfiguration;
    _Bool _cachedVariantsShareWallpaperConfigurationValid;
    NSArray *_dataStores;
    id <SBFWallpaperConfigurationManagerDelegate> _delegate;
    double _wallpaperScale;
    long long _wallpaperMode;
    long long _wallpaperSizeType;
    id <SBFProceduralWallpaperProvider> _proceduralWallpaperProvider;
    SBFMagnifyMode *_magnifyMode;
    struct CGSize _wallpaperSize;
}


// Remaining properties
@property(nonatomic) _Bool cachedVariantsShareWallpaperConfiguration; // @synthesize cachedVariantsShareWallpaperConfiguration=_cachedVariantsShareWallpaperConfiguration;
@property(nonatomic, getter=isCachedVariantsShareWallpaperConfigurationValid) _Bool cachedVariantsShareWallpaperConfigurationValid; // @synthesize cachedVariantsShareWallpaperConfigurationValid=_cachedVariantsShareWallpaperConfigurationValid;
@property(readonly, copy, nonatomic) NSArray *dataStores; // @synthesize dataStores=_dataStores;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBFWallpaperConfigurationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enableWallpaperDimming; // @synthesize enableWallpaperDimming=_enableWallpaperDimming;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) SBFWallpaperConfiguration *homeScreenWallpaperConfiguration;
@property(readonly, copy, nonatomic) SBFWallpaperConfiguration *lockScreenWallpaperConfiguration;
@property(retain, nonatomic) SBFMagnifyMode *magnifyMode; // @synthesize magnifyMode=_magnifyMode;
@property(readonly, nonatomic) unsigned long long numberOfCachedStaticImages;
@property(readonly, nonatomic) long long parallaxDeviceType;
@property(nonatomic) __weak id <SBFProceduralWallpaperProvider> proceduralWallpaperProvider; // @synthesize proceduralWallpaperProvider=_proceduralWallpaperProvider;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool variantsShareWallpaperConfiguration;
@property(nonatomic) long long wallpaperMode; // @synthesize wallpaperMode=_wallpaperMode;
@property(readonly, nonatomic) double wallpaperScale; // @synthesize wallpaperScale=_wallpaperScale;
@property(readonly, nonatomic) struct CGSize wallpaperSize; // @synthesize wallpaperSize=_wallpaperSize;
@property(readonly, nonatomic) struct CGSize wallpaperSizeIncludingParallaxOverhang;
@property(readonly, nonatomic) long long wallpaperSizeType; // @synthesize wallpaperSizeType=_wallpaperSizeType;
@end
