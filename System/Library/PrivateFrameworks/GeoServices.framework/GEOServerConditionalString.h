/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOServerConditionalString <NSObject,NSCoding>
@property (nonatomic,readonly) id<GEOServerFormattedString> formattedString; 
@property (nonatomic,readonly) id<GEOServerCondition> condition; 
@required
-(id<GEOServerCondition>)condition;
-(id<GEOServerFormattedString>)formattedString;

@end

