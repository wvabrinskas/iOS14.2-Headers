/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate, NSString;

@interface CMElevationData : NSObject <SRSampling, NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSDate* fStartDate;
	NSDate* fEndDate;
	unsigned long long fElevationAscended;
	unsigned long long fElevationDescended;
	long long fSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long elevationAscended; 
@property (nonatomic,readonly) unsigned long long elevationDescended; 
+(BOOL)supportsSecureCoding;
+(id)sourceName:(long long)arg1 ;
-(NSDate *)endDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)sourceId;
-(NSDate *)startDate;
-(NSString *)description;
-(unsigned long long)recordId;
-(long long)source;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(unsigned long long)elevationAscended;
-(unsigned long long)elevationDescended;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithSignificantElevationSample:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 elevationAscended:(unsigned long long)arg3 elevationDescended:(unsigned long long)arg4 source:(long long)arg5 recordId:(unsigned long long)arg6 sourceId:(id)arg7 ;
@end

