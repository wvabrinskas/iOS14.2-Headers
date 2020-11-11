/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSLocale, NSString;


@protocol HKConceptIndexable <HKCodedObject>
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@required
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
-(NSLocale *)locale;
-(NSString *)country;
-(NSUUID *)UUID;

@end
