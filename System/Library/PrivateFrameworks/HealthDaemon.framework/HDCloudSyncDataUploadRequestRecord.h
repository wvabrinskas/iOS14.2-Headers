/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDCloudSyncSubscriptionRecord.h>

@interface HDCloudSyncDataUploadRequestRecord : HDCloudSyncSubscriptionRecord
+(id)recordType;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)requiresUnderlyingMessage;
+(id)recordIDWithZoneID:(id)arg1 ;
+(id)recordForZoneID:(id)arg1 ;
+(BOOL)isDataUploadRequestRecord:(id)arg1 ;
-(id)serializeUnderlyingMessage;
@end

