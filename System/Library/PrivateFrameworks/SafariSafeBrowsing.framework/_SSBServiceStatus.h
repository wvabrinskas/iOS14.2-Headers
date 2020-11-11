/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
@class NSString, NSArray;

@interface _SSBServiceStatus : NSObject {

	ServiceStatus* _serviceStatus;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) int processIdentifier; 
@property (nonatomic,copy,readonly) NSArray * activeTransactions; 
@property (nonatomic,readonly) NSArray * databaseUpdatersStatuses; 
@property (nonatomic,readonly) unsigned long long connectionCount; 
@property (nonatomic,readonly) unsigned long long databaseUpdaterState; 
-(unsigned long long)connectionCount;
-(NSString *)name;
-(int)processIdentifier;
-(id)initWithServiceStatus:(ServiceStatus*)arg1 ;
-(int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1 ;
-(NSArray *)databaseUpdatersStatuses;
-(unsigned long long)databaseUpdaterState;
-(NSArray *)activeTransactions;
@end
