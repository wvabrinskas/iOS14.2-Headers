/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, CKRecord;

@interface FCReadingListEntry : NSObject {

	NSString* _identifier;
	NSString* _articleID;
	NSDate* _dateAdded;
	unsigned long long _origin;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;               //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                      //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,readonly) unsigned long long origin;               //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) CKRecord * asCKRecord; 
-(unsigned long long)origin;
-(NSString *)articleID;
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(CKRecord *)asCKRecord;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(NSDate *)dateAdded;
-(id)initWithEntryID:(id)arg1 articleID:(id)arg2 dateAdded:(id)arg3 origin:(unsigned long long)arg4 ;
@end

