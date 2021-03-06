/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PCInterfaceMonitorProtocol <NSObject>
@property (nonatomic,readonly) long long interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) BOOL isInterfaceUsable; 
@property (nonatomic,readonly) BOOL isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) BOOL isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) BOOL isPoorLinkQuality; 
@property (nonatomic,readonly) BOOL isBadLinkQuality; 
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (nonatomic,readonly) BOOL isNetworkingPowerExpensiveToUse; 
@property (nonatomic,readonly) int currentRAT; 
@property (nonatomic,readonly) BOOL isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (nonatomic,readonly) NSString * networkCode; 
@optional
-(int)currentRAT;
-(BOOL)isLTEWithCDRX;
-(NSString *)networkCode;
-(CFStringRef)wwanInterfaceName;

@required
-(BOOL)isNetworkingPowerExpensiveToUse;
-(NSString *)linkQualityString;
-(BOOL)isInternetReachable;
-(BOOL)isPoorLinkQuality;
-(BOOL)isBadLinkQuality;
-(long long)interfaceIdentifier;
-(BOOL)isInterfaceHistoricallyUsable;
-(BOOL)isRadioHot;
-(BOOL)isInterfaceUsable;
-(int)linkQuality;

@end

