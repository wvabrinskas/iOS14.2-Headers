/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface STCandyBarView : UIView {

	BOOL _useVibrancy;
	NSArray* _usageItems;
	NSArray* _viewItems;

}

@property (readonly) BOOL useVibrancy;                        //@synthesize useVibrancy=_useVibrancy - In the implementation block
@property (nonatomic,copy) NSArray * viewItems;               //@synthesize viewItems=_viewItems - In the implementation block
@property (nonatomic,copy) NSArray * usageItems;              //@synthesize usageItems=_usageItems - In the implementation block
-(BOOL)useVibrancy;
-(CGSize)intrinsicContentSize;
-(void)setUsageItems:(NSArray *)arg1 ;
-(void)updateSectionViewImages;
-(NSArray *)usageItems;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setUsageItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(id)capImageWithHeight:(double)arg1 leadingLineCap:(int)arg2 trailingLineCap:(int)arg3 ;
-(id)initWithVibrancy:(BOOL)arg1 ;
-(NSArray *)viewItems;
-(void)setViewItems:(NSArray *)arg1 ;
-(void)updateConstraints;
@end

