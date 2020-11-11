/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ICPlayActivityEnqueuerProperties;

@interface MPCReportingIdentityProperties : NSObject {

	BOOL _hasSubscriptionPlaybackCapability;
	NSString* _householdID;
	unsigned long long _storeAccountID;
	NSString* _storeFrontID;
	ICPlayActivityEnqueuerProperties* _enqueuerProperties;

}

@property (nonatomic,copy) NSString * householdID;                                             //@synthesize householdID=_householdID - In the implementation block
@property (assign,nonatomic) unsigned long long storeAccountID;                                //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                                            //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionPlaybackCapability;                           //@synthesize hasSubscriptionPlaybackCapability=_hasSubscriptionPlaybackCapability - In the implementation block
@property (nonatomic,copy) ICPlayActivityEnqueuerProperties * enqueuerProperties;              //@synthesize enqueuerProperties=_enqueuerProperties - In the implementation block
-(NSString *)householdID;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(unsigned long long)storeAccountID;
-(NSString *)storeFrontID;
-(void)setEnqueuerProperties:(ICPlayActivityEnqueuerProperties *)arg1 ;
-(void)setHouseholdID:(NSString *)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(ICPlayActivityEnqueuerProperties *)enqueuerProperties;
-(void)setHasSubscriptionPlaybackCapability:(BOOL)arg1 ;
-(BOOL)hasSubscriptionPlaybackCapability;
@end
