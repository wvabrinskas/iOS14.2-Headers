/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUImageStackItemView.h>

@class UIImageView, MPUBorderConfiguration, MPUBorderDrawingCache;

@interface MPUBorderedImageStackItemView : MPUImageStackItemView {

	UIImageView* _borderImageView;
	MPUBorderConfiguration* _borderConfiguration;
	MPUBorderDrawingCache* _borderDrawingCache;

}

@property (nonatomic,copy) MPUBorderConfiguration * borderConfiguration;              //@synthesize borderConfiguration=_borderConfiguration - In the implementation block
@property (nonatomic,retain) MPUBorderDrawingCache * borderDrawingCache;              //@synthesize borderDrawingCache=_borderDrawingCache - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)_updateBorderImageView;
-(void)_borderDrawingCacheWasInvalidated:(id)arg1 ;
-(void)setBorderConfiguration:(MPUBorderConfiguration *)arg1 ;
-(void)setBorderDrawingCache:(MPUBorderDrawingCache *)arg1 ;
-(MPUBorderConfiguration *)borderConfiguration;
-(MPUBorderDrawingCache *)borderDrawingCache;
@end

