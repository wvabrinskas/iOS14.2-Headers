/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconListLayout.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, UIFont, SBIconListGridLayoutConfiguration, SBHIconAccessoryVisualConfiguration, SBHFolderIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHSidebarVisualConfiguration, SBHAppLibraryVisualConfiguration, SBHRootFolderVisualConfiguration, NSString;

@interface SBIconListGridLayout : NSObject <SBIconListLayout, BSDescriptionProviding> {

	NSMutableDictionary* _labelFonts;
	UIFont* _accessoryFont;
	UIFont* _accessoryBoldFont;
	SBIconListGridLayoutConfiguration* _layoutConfiguration;

}

@property (nonatomic,copy,readonly) SBIconListGridLayoutConfiguration * layoutConfiguration;                             //@synthesize layoutConfiguration=_layoutConfiguration - In the implementation block
@property (nonatomic,readonly) SBIconImageInfo iconImageInfo; 
@property (nonatomic,copy,readonly) SBHIconAccessoryVisualConfiguration * iconAccessoryVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHFolderIconVisualConfiguration * folderIconVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHFloatyFolderVisualConfiguration * floatyFolderVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHSidebarVisualConfiguration * sidebarVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHAppLibraryVisualConfiguration * appLibraryVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHRootFolderVisualConfiguration * rootFolderVisualConfiguration; 
@property (nonatomic,readonly) SBHIconGridSizeClassSizes iconGridSizeClassSizes; 
@property (nonatomic,readonly) unsigned long long supportedIconGridSizeClasses; 
@property (nonatomic,readonly) BOOL usesAlternateLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBIconImageInfo)iconImageInfoForGridSizeClass:(unsigned long long)arg1 ;
-(id)succinctDescription;
-(SBHFloatyFolderVisualConfiguration *)floatyFolderVisualConfiguration;
-(UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1 ;
-(BOOL)usesAlternateLayout;
-(id)init;
-(SBIconImageInfo)iconImageInfo;
-(SBHAppLibraryVisualConfiguration *)appLibraryVisualConfiguration;
-(void)noteIcons:(id)arg1 didDropAtCoordinate:(SBIconCoordinate)arg2 inList:(id)arg3 ;
-(unsigned long long)supportedIconGridSizeClasses;
-(SBHIconGridSizeClassSizes)iconGridSizeClassSizes;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBHIconAccessoryVisualConfiguration *)iconAccessoryVisualConfiguration;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(SBHFolderIconVisualConfiguration *)folderIconVisualConfiguration;
-(unsigned long long)numberOfColumnsForOrientation:(long long)arg1 ;
-(unsigned long long)numberOfRowsForOrientation:(long long)arg1 ;
-(id)labelVisualConfigurationForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithLayoutConfiguration:(id)arg1 ;
-(SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
-(id)accessoryFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2 ;
-(id)labelFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2 ;
-(id)accessoryFont;
-(id)accessoryBoldFont;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(SBHRootFolderVisualConfiguration *)rootFolderVisualConfiguration;
-(id)succinctDescriptionBuilder;
-(SBIconListGridLayoutConfiguration *)layoutConfiguration;
@end
