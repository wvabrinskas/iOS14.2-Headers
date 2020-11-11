/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber;

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {

	double _timeout;
	unsigned long long _urlType;
	NSNumber* _requestPriority;
	unsigned long long _multipathServiceType;

}
-(unsigned long long)multipathServiceType;
-(SCD_Struct_GE91)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
-(id)serviceTypeNumber;
-(id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3 ;
-(id)additionalHTTPHeaders;
-(unsigned long long)urlType;
-(double)timeout;
@end
