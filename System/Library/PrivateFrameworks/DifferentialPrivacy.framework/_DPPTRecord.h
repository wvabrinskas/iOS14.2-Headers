/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/_DPJSONString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPPTRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding> {

	BOOL _submitted;
	NSString* _key;
	NSString* _privateValue;
	double _creationDate;
	long long _reportVersion;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * privateValue;                     //@synthesize privateValue=_privateValue - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (assign,nonatomic) long long reportVersion;                   //@synthesize reportVersion=_reportVersion - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)entityName;
-(NSString *)key;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)reportVersion;
-(void)setReportVersion:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSManagedObjectID *)objectId;
-(id)jsonString;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(double)creationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(id)initWithKey:(id)arg1 privateValue:(id)arg2 creationDate:(double)arg3 submitted:(BOOL)arg4 objectId:(id)arg5 ;
-(NSString *)privateValue;
-(BOOL)isEqualToPTRecord:(id)arg1 ;
-(void)setPrivateValue:(NSString *)arg1 ;
@end

