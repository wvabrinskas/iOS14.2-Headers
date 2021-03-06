/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSMutableData;

@interface JournalRecordInfo : NSObject {

	NSString* _journalName;
	NSDate* _lastUpdate;
	NSMutableData* _journalData;

}

@property (readonly) NSString * journalName;                   //@synthesize journalName=_journalName - In the implementation block
@property (readonly) NSDate * lastUpdate;                      //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (readonly) NSMutableData * journalData;              //@synthesize journalData=_journalData - In the implementation block
-(NSDate *)lastUpdate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)journalName;
-(NSMutableData *)journalData;
-(id)initWithJournalName:(id)arg1 lastUpdate:(id)arg2 journalData:(id)arg3 ;
@end

