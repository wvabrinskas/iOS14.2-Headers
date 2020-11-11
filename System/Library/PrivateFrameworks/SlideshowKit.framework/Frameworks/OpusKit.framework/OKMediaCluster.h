/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface OKMediaCluster : NSObject {

	NSString* _title;
	NSMutableArray* _items;
	BOOL _isUnknown;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL isUnknown;                               //@synthesize isUnknown=_isUnknown - In the implementation block
-(id)init;
-(BOOL)isUnknown;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(void)dealloc;
-(id)uniqueURLs;
-(void)setIsUnknown:(BOOL)arg1 ;
@end
