/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface PUSectionedGridLayoutData : NSObject {

	long long _numberOfPagesToCache;
	CGRect _currentContentBounds;
	NSMutableArray* _headerLayoutAttributes;
	NSMutableDictionary* _headerLayoutAttributesByVisualSection;

}

@property (nonatomic,readonly) long long numberOfPagesToCache;                                           //@synthesize numberOfPagesToCache=_numberOfPagesToCache - In the implementation block
@property (assign,nonatomic) CGRect currentContentBounds;                                                //@synthesize currentContentBounds=_currentContentBounds - In the implementation block
@property (nonatomic,readonly) NSMutableArray * headerLayoutAttributes;                                  //@synthesize headerLayoutAttributes=_headerLayoutAttributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headerLayoutAttributesByVisualSection;              //@synthesize headerLayoutAttributesByVisualSection=_headerLayoutAttributesByVisualSection - In the implementation block
-(id)init;
-(long long)numberOfPagesToCache;
-(NSMutableArray *)headerLayoutAttributes;
-(NSMutableDictionary *)headerLayoutAttributesByVisualSection;
-(CGRect)currentContentBounds;
-(void)setCurrentContentBounds:(CGRect)arg1 ;
-(void)invalidate;
@end

