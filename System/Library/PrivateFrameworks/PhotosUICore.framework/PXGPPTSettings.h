/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXGPPTSettings : PXSettings {

	BOOL _useAssetBadgeDecoration;
	long long _numberOfItems;
	long long _numberOfSections;
	long long _numberOfColumns;
	long long _selectionDecorationStlye;

}

@property (assign,nonatomic) long long numberOfItems;                         //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) long long numberOfSections;                      //@synthesize numberOfSections=_numberOfSections - In the implementation block
@property (assign,nonatomic) long long numberOfColumns;                       //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) BOOL useAssetBadgeDecoration;                    //@synthesize useAssetBadgeDecoration=_useAssetBadgeDecoration - In the implementation block
@property (assign,nonatomic) long long selectionDecorationStlye;              //@synthesize selectionDecorationStlye=_selectionDecorationStlye - In the implementation block
+(id)sharedInstance;
+(id)scrollingPresetNames;
+(id)allPresetNames;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(long long)numberOfSections;
-(void)setNumberOfColumns:(long long)arg1 ;
-(long long)numberOfItems;
-(long long)numberOfColumns;
-(void)setUseAssetBadgeDecoration:(BOOL)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(void)setSelectionDecorationStlye:(long long)arg1 ;
-(id)createLayout;
-(void)setNumberOfSections:(long long)arg1 ;
-(BOOL)useAssetBadgeDecoration;
-(long long)selectionDecorationStlye;
-(void)setDefaultValuesWithPresetName:(id)arg1 ;
@end
