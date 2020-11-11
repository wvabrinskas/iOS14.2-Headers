/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion

@property (nonatomic,readonly) CLLocationCoordinate2D center; 
@property (nonatomic,readonly) double radius; 
+(BOOL)supportsSecureCoding;
-(CLLocationCoordinate2D)center;
-(BOOL)containsCoordinate:(CLLocationCoordinate2D)arg1 ;
-(double)radius;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLowPower;
-(id)initWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initNearbyAllowedWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(id)initForLowPowerWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
@end
