/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOMapServiceTraits, NSDictionary, GEODataRequestThrottlerToken;

@interface GEOAbstractTicket : NSObject {

	GEOMapServiceTraits* _traits;
	unsigned long long _cachePolicy;
	NSDictionary* _responseUserInfo;
	BOOL _cancelled;
	GEODataRequestThrottlerToken* _throttlerToken;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) unsigned long long cachePolicy;                 //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo;              //@synthesize responseUserInfo=_responseUserInfo - In the implementation block
@property (getter=isCancelled,readonly) BOOL cancelled; 
-(id)initWithTraits:(id)arg1 ;
-(GEOMapServiceTraits *)traits;
-(id)init;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)setThrottlerToken:(id)arg1 ;
-(BOOL)isCancelled;
-(NSDictionary *)responseUserInfo;
-(id)description;
-(unsigned long long)cachePolicy;
-(void)cancel;
@end

