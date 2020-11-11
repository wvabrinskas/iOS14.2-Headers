/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLGeocoder, CLLocation, CLPlacemark, CLInUseAssertion, NSMutableArray;

@interface NWCComplicationGeocoder : NSObject {

	CLGeocoder* _geocoder;
	CLLocation* _cachedLocation;
	CLPlacemark* _cachedPlacemark;
	CLInUseAssertion* _locationInUseAssertion;
	NSMutableArray* _handlers;

}
+(id)sharedGeocoder;
-(id)init;
-(id)cachedPlacemarkForLocation:(id)arg1 ;
-(void)_handlePlacemarks:(id)arg1 fromLocation:(id)arg2 error:(id)arg3 ;
-(void)placemarkForLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
