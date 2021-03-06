/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOLocationShifterProxy.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSNumber, NSString;

@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy> {

	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _shiftingEnabled;
	NSNumber* _shiftingFxnVersion;
	NSCache* _shiftFunctionCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSCache * memoryCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)flushDiskCache;
-(NSCache *)memoryCache;
-(BOOL)isLocationShiftRequiredForCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(unsigned)locationShiftFunctionVersion;
-(BOOL)_isLocationShiftRequiredForCoordinateViaProxy:(GEOCoarseLocationLatLng)arg1 ;
-(BOOL)_isLocationShiftRequiredForCoordinateInProcess:(GEOCoarseLocationLatLng)arg1 ;
-(BOOL)isLocationShiftEnabled;
-(NSObject*<OS_dispatch_queue>)queue;
@end

