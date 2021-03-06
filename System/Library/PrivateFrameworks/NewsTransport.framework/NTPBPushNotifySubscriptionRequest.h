/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDeviceInfo, NSMutableArray, NSString;

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying> {

	NTPBDeviceInfo* _deviceInfo;
	NSMutableArray* _notificationEntitys;
	NSString* _notificationUserId;
	NSString* _userStorefrontId;

}

@property (nonatomic,readonly) BOOL hasNotificationUserId; 
@property (nonatomic,retain) NSString * notificationUserId;                     //@synthesize notificationUserId=_notificationUserId - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfo; 
@property (nonatomic,retain) NTPBDeviceInfo * deviceInfo;                       //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationEntitys;              //@synthesize notificationEntitys=_notificationEntitys - In the implementation block
@property (nonatomic,readonly) BOOL hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                       //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
+(Class)notificationEntityType;
-(void)mergeFrom:(id)arg1 ;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(NSString *)userStorefrontId;
-(BOOL)hasUserStorefrontId;
-(NTPBDeviceInfo *)deviceInfo;
-(unsigned long long)hash;
-(void)setDeviceInfo:(NTPBDeviceInfo *)arg1 ;
-(unsigned long long)notificationEntitysCount;
-(NSString *)notificationUserId;
-(id)dictionaryRepresentation;
-(void)clearNotificationEntitys;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNotificationEntitys:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDeviceInfo;
-(BOOL)hasNotificationUserId;
-(NSMutableArray *)notificationEntitys;
-(id)notificationEntityAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNotificationUserId:(NSString *)arg1 ;
-(void)addNotificationEntity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

