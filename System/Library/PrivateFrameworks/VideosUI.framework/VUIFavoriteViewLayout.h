/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUIFavoriteViewLayout : TVViewLayout {

	long long _layoutType;
	VUITextLayout* _titleTextLayout;
	TVImageLayout* _logoImageLayout;
	TVImageLayout* _accessoryImageLayout;

}

@property (nonatomic,readonly) long long layoutType;                              //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                   //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * logoImageLayout;                   //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * accessoryImageLayout;              //@synthesize accessoryImageLayout=_accessoryImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(long long)layoutType;
-(id)initWithType:(long long)arg1 ;
-(VUITextLayout *)titleTextLayout;
-(TVImageLayout *)logoImageLayout;
-(TVImageLayout *)accessoryImageLayout;
@end
