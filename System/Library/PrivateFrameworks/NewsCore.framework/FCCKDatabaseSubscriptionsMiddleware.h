/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCCKDatabaseRecordMiddleware.h>

@class NSString;

@interface FCCKDatabaseSubscriptionsMiddleware : NSObject <FCCKDatabaseRecordMiddleware>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
-(id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(BOOL)_shouldMapZoneID:(id)arg1 inDatabase:(id)arg2 ;
-(id)_secureZoneID;
-(id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
-(id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
@end
