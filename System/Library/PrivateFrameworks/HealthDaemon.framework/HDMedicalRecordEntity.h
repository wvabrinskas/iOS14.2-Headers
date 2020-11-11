/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSampleEntity.h>

@interface HDMedicalRecordEntity : HDSampleEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)orderingTermForSortDescriptor:(id)arg1 ;
+(id)_keyValueDomainWithProfile:(id)arg1 ;
+(id)mostRecentlyNotifiedLatestModifiedDateWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)latestCreationDateWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)storeMostRecentlyNotifiedLatestModifiedDate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)latestDateForProperty:(id)arg1 sampleTypes:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)latestModifiedDateWithProfile:(id)arg1 error:(id*)arg2 ;
@end
