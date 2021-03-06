/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBLocalNotificationReturn : PBCodable <NSCopying> {

	long long _localNotificationSentTimestamp;
	int _localNoticationNumberReceived;
	int _localNotificationDirectOpenNumber;
	int _localNotificationType;
	BOOL _localNotificationDirectOpen;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) BOOL hasLocalNotificationDirectOpen; 
@property (assign,nonatomic) BOOL localNotificationDirectOpen;                       //@synthesize localNotificationDirectOpen=_localNotificationDirectOpen - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNoticationNumberReceived; 
@property (assign,nonatomic) int localNoticationNumberReceived;                      //@synthesize localNoticationNumberReceived=_localNoticationNumberReceived - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNotificationType; 
@property (assign,nonatomic) int localNotificationType;                              //@synthesize localNotificationType=_localNotificationType - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNotificationSentTimestamp; 
@property (assign,nonatomic) long long localNotificationSentTimestamp;               //@synthesize localNotificationSentTimestamp=_localNotificationSentTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNotificationDirectOpenNumber; 
@property (assign,nonatomic) int localNotificationDirectOpenNumber;                  //@synthesize localNotificationDirectOpenNumber=_localNotificationDirectOpenNumber - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)setLocalNotificationDirectOpen:(BOOL)arg1 ;
-(void)setHasLocalNotificationDirectOpen:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationDirectOpen;
-(void)setLocalNoticationNumberReceived:(int)arg1 ;
-(void)setHasLocalNoticationNumberReceived:(BOOL)arg1 ;
-(BOOL)hasLocalNoticationNumberReceived;
-(int)localNotificationType;
-(void)setLocalNotificationType:(int)arg1 ;
-(void)setHasLocalNotificationType:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationType;
-(void)setLocalNotificationSentTimestamp:(long long)arg1 ;
-(void)setHasLocalNotificationSentTimestamp:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationSentTimestamp;
-(void)setLocalNotificationDirectOpenNumber:(int)arg1 ;
-(void)setHasLocalNotificationDirectOpenNumber:(BOOL)arg1 ;
-(BOOL)hasLocalNotificationDirectOpenNumber;
-(BOOL)localNotificationDirectOpen;
-(int)localNoticationNumberReceived;
-(long long)localNotificationSentTimestamp;
-(int)localNotificationDirectOpenNumber;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

