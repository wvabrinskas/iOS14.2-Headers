/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSDate;

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding> {

	BOOL _fromRequest;
	unsigned short _messageID;
	NSString* _idsIdentifier;
	NSString* _deviceIdentifier;
	NSDictionary* _userInfo;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned short messageID;                           //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                             //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,getter=isFromRequest,nonatomic) BOOL fromRequest;              //@synthesize fromRequest=_fromRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDate *)date;
-(id)description;
-(NSString *)idsIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)messageID;
-(void)setFromRequest:(BOOL)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setMessageID:(unsigned short)arg1 ;
-(BOOL)isFromRequest;
@end

