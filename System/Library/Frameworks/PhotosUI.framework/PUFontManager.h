/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>

@class UIFont;

@interface PUFontManager : PXObservable {

	UIFont* _albumListTitleLabelFont;
	UIFont* _albumListSubtitleLabelFont;
	UIFont* _albumListSectionTitleLabelFont;

}

@property (nonatomic,retain) UIFont * albumListTitleLabelFont;                     //@synthesize albumListTitleLabelFont=_albumListTitleLabelFont - In the implementation block
@property (nonatomic,retain) UIFont * albumListSubtitleLabelFont;                  //@synthesize albumListSubtitleLabelFont=_albumListSubtitleLabelFont - In the implementation block
@property (nonatomic,retain) UIFont * albumListSectionTitleLabelFont;              //@synthesize albumListSectionTitleLabelFont=_albumListSectionTitleLabelFont - In the implementation block
-(id)init;
-(void)setAlbumListSectionTitleLabelFont:(UIFont *)arg1 ;
-(void)setAlbumListSubtitleLabelFont:(UIFont *)arg1 ;
-(UIFont *)albumListTitleLabelFont;
-(UIFont *)albumListSubtitleLabelFont;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(id)mutableChangeObject;
-(UIFont *)albumListSectionTitleLabelFont;
-(void)setAlbumListTitleLabelFont:(UIFont *)arg1 ;
-(void)_setNeedsUpdate;
-(void)invalidateFonts;
-(void)dealloc;
@end

