/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreRequestContext;

@interface ICRadioLikeRequest : NSObject <NSCopying> {

	long long _storeAdamID;
	long long _likeState;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationStringID;
	long long _qualityOfService;
	ICStoreRequestContext* _requestContext;

}

@property (assign,nonatomic) long long storeAdamID;                             //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (assign,nonatomic) long long likeState;                               //@synthesize likeState=_likeState - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                              //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;                               //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationStringID;                          //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(void)setStoreAdamID:(long long)arg1 ;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(long long)qualityOfService;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)likeState;
-(void)setLikeState:(long long)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(long long)stationID;
-(long long)storeAdamID;
-(void)setStationStringID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

