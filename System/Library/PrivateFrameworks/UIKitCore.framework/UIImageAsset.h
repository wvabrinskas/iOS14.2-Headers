/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIAssetManager, NSBundle, UITraitCollection, CUINamedLayerStack, NSString;

@interface UIImageAsset : NSObject <NSSecureCoding> {

	_UIAssetManager* _assetManager;
	NSBundle* _containingBundle;
	BOOL _cacheContents;
	UITraitCollection* _defaultTraitCollection;
	SCD_Struct_UI62 _assetFlags;
	CUINamedLayerStack* _layerStack;
	id _unpinObserver;
	/*^block*/id _rebuildStackImage;
	/*^block*/id _creationBlock;
	NSString* _assetName;

}

@property (nonatomic,copy) id creationBlock;                                                       //@synthesize creationBlock=_creationBlock - In the implementation block
@property (assign,setter=_setUnpinObserver:,nonatomic,__weak) id _unpinObserver;                   //@synthesize unpinObserver=_unpinObserver - In the implementation block
@property (nonatomic,copy) NSString * assetName;                                                   //@synthesize assetName=_assetName - In the implementation block
@property (nonatomic,__weak,readonly) _UIAssetManager * _assetManager;                             //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,readonly) UITraitCollection * _defaultTraitCollection; 
@property (setter=_setRebuildStackImage:,nonatomic,copy) id _rebuildStackImage;                    //@synthesize rebuildStackImage=_rebuildStackImage - In the implementation block
@property (setter=_setLayerStack:,nonatomic,retain) CUINamedLayerStack * _layerStack;              //@synthesize layerStack=_layerStack - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_dynamicAssetNamed:(id)arg1 generator:(/*^block*/id)arg2 ;
-(void)_setUnpinObserver:(id)arg1 ;
-(_UIAssetManager *)_assetManager;
-(id)imageWithTraitCollection:(id)arg1 ;
-(id)_registeredAppearanceNames;
-(void)_registerImage:(id)arg1 withConfiguration:(id)arg2 ;
-(id)_initWithAssetName:(id)arg1 forManager:(id)arg2 ;
-(id)_symbolConfiguration;
-(id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
-(void)_setRebuildStackImage:(/*^block*/id)arg1 ;
-(void)unregisterImageWithConfiguration:(id)arg1 ;
-(id)creationBlock;
-(id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2 ;
-(id)_rebuildStackImage;
-(id)_cachedRenditionWithSize:(CGSize)arg1 tintColor:(id)arg2 traitCollection:(id)arg3 bold:(BOOL)arg4 letterpress:(BOOL)arg5 drawMode:(unsigned)arg6 ;
-(id)init;
-(id)_renditionCache:(BOOL)arg1 ;
-(void)_cacheRendition:(id)arg1 forSize:(CGSize)arg2 tintColor:(id)arg3 traitCollection:(id)arg4 bold:(BOOL)arg5 letterpress:(BOOL)arg6 drawMode:(unsigned)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CUINamedLayerStack *)_layerStack;
-(void)setCreationBlock:(id)arg1 ;
-(void)_registerImage:(id)arg1 withTraitCollection:(id)arg2 ;
-(id)imageWithConfiguration:(id)arg1 ;
-(void)registerImage:(id)arg1 withConfiguration:(id)arg2 ;
-(id)_unpinObserver;
-(id)_lookUpRegisteredObjectForTraitCollection:(id)arg1 withAccessorWithAppearanceName:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)unregisterImageWithTraitCollection:(id)arg1 ;
-(UITraitCollection *)_defaultTraitCollection;
-(void)_setLayerStack:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)assetName;
-(void)_disconnectFromAssetManager;
-(void)registerImage:(id)arg1 withTraitCollection:(id)arg2 ;
-(id)_updateAssetFromBlockGenerationWithConfiguration:(id)arg1 resolvedCatalogImage:(id)arg2 ;
-(void)setAssetName:(NSString *)arg1 ;
-(void)_clearResolvedImageResources;
-(void)dealloc;
-(id)_mutableCatalog;
-(BOOL)_containsImagesInPath:(id)arg1 ;
@end
