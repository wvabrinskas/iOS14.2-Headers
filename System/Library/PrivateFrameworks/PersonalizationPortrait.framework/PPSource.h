/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class PPSourceMetadata, NSDate, NSArray, NSString, NSSet;

@interface PPSource : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	PPSourceMetadata* _metadata;
	NSDate* _relevanceDate;
	NSArray* _contactHandles;
	NSString* _language;
	NSString* _bundleId;
	NSString* _groupId;
	NSString* _documentId;
	NSDate* _date;

}

@property (nonatomic,readonly) PPSourceMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDate * relevanceDate;                   //@synthesize relevanceDate=_relevanceDate - In the implementation block
@property (nonatomic,readonly) NSString * language;                      //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSArray * contactHandles;                 //@synthesize contactHandles=_contactHandles - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                      //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * groupId;                       //@synthesize groupId=_groupId - In the implementation block
@property (nonatomic,readonly) NSString * documentId;                    //@synthesize documentId=_documentId - In the implementation block
@property (nonatomic,readonly) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(NSArray *)contactHandles;
-(unsigned long long)hash;
-(NSString *)bundleId;
-(BOOL)isEqualToSource:(id)arg1 ;
-(id)sha256;
-(NSSet *)featureNames;
-(void)encodeWithCoder:(id)arg1 ;
-(PPSourceMetadata *)metadata;
-(NSString *)language;
-(NSDate *)date;
-(id)featureValueForName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)relevanceDate;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4 ;
-(NSString *)documentId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)groupId;
-(id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4 relevanceDate:(id)arg5 contactHandles:(id)arg6 language:(id)arg7 metadata:(id)arg8 ;
@end
