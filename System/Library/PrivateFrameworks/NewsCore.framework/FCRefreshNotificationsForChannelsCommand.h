/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCCommand.h>

@class NSArray, NSString;

@interface FCRefreshNotificationsForChannelsCommand : FCCommand {

	NSArray* _channelIDs;
	NSArray* _paidChannelIDs;
	NSString* _userID;
	NSString* _deviceToken;
	NSString* _storefrontID;

}

@property (nonatomic,copy) NSArray * channelIDs;                  //@synthesize channelIDs=_channelIDs - In the implementation block
@property (nonatomic,copy) NSArray * paidChannelIDs;              //@synthesize paidChannelIDs=_paidChannelIDs - In the implementation block
@property (nonatomic,copy) NSString * userID;                     //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * deviceToken;                //@synthesize deviceToken=_deviceToken - In the implementation block
@property (nonatomic,copy) NSString * storefrontID;               //@synthesize storefrontID=_storefrontID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)storefrontID;
-(void)setStorefrontID:(NSString *)arg1 ;
-(NSString *)userID;
-(NSString *)deviceToken;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceToken:(NSString *)arg1 ;
-(NSArray *)channelIDs;
-(id)initWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 ;
-(NSArray *)paidChannelIDs;
-(void)setUserID:(NSString *)arg1 ;
-(void)setChannelIDs:(NSArray *)arg1 ;
-(void)setPaidChannelIDs:(NSArray *)arg1 ;
@end

