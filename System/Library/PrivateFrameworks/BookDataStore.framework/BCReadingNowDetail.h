/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookDataStore/BCCloudData.h>
#import <libobjc.A.dylib/BCReadingNowDetail.h>
@class NSString, NSDate;


@protocol BCReadingNowDetail <BCCloudData>
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,readonly) BOOL isTrackedAsRecent; 
@property (nonatomic,copy,readonly) NSDate * lastEngagedDate; 
@required
-(NSDate *)lastEngagedDate;
-(NSString *)assetID;
-(BOOL)isTrackedAsRecent;

@end


@class NSString, NSDate, CKRecord, NSData;

@interface BCReadingNowDetail : BCCloudData <BCReadingNowDetail>

@property (nonatomic,copy) NSString * assetID; 
@property (assign,nonatomic) BOOL isTrackedAsRecent; 
@property (nonatomic,copy) NSDate * lastEngagedDate; 
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyIDKey;
-(id)zoneName;
-(id)mutableCopy;
-(id)recordType;
-(NSString *)debugDescription;
-(id)identifier;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(void)_configureFromReadingNowDetail:(id)arg1 withMergers:(id)arg2 ;
@end
