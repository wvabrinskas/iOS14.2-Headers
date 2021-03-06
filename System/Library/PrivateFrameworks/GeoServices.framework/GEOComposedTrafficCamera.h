/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOComposedEnrouteNotice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <NSSecureCoding> {

	GEOTrafficCamera* _trafficCamera;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned highlightDistance; 
@property (nonatomic,readonly) BOOL hasSpeedLimitText; 
@property (nonatomic,readonly) NSString * speedLimitText; 
@property (nonatomic,readonly) BOOL hasSpeedThreshold; 
@property (nonatomic,readonly) double speedThreshold; 
@property (nonatomic,readonly) BOOL hasCameraPriority; 
@property (nonatomic,readonly) unsigned cameraPriority; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(double)speedThreshold;
-(NSString *)speedLimitText;
-(id)description;
-(unsigned)highlightDistance;
-(id)titleFormatForLocation:(id)arg1 ;
-(id)detailFormatForLocation:(id)arg1 ;
-(id)position;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasSpeedLimitText;
-(BOOL)hasSpeedThreshold;
-(unsigned)cameraPriority;
-(BOOL)hasCameraPriority;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 trafficCamera:(id)arg4 onRoute:(id)arg5 ;
@end

