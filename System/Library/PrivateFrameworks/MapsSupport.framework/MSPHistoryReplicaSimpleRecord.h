/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSPHistoryReplicaRecord.h>

@class NSDate, NSData, MSPVectorTimestamp, NSString;

@interface MSPHistoryReplicaSimpleRecord : NSObject <MSPHistoryReplicaRecord> {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	NSDate* _modificationDate;

}

@property (nonatomic,copy,readonly) NSDate * modificationDate;                           //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2 ;
+(id)recordWithContentsOfRecord:(id)arg1 ;
-(MSPVectorTimestamp *)contentsTimestamp;
-(id)init;
-(NSData *)contents;
-(NSString *)description;
-(id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2 ;
-(NSDate *)modificationDate;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3 ;
-(id)derivedRecordWithModificationDate:(id)arg1 ;
@end
