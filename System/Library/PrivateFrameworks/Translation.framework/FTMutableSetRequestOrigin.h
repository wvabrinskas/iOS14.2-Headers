/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTSetRequestOrigin.h>

@interface FTMutableSetRequestOrigin : FTSetRequestOrigin

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL enable_geo_location_features; 
-(double)latitude;
-(id)init;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)longitude;
-(BOOL)enable_geo_location_features;
-(void)setEnable_geo_location_features:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

