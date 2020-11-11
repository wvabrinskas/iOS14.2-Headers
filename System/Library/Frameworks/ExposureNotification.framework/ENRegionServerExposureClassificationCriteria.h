/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface ENRegionServerExposureClassificationCriteria : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _index;
	unsigned _perDaySumERVThreshold;
	unsigned _perDayMaxERVThreshold;
	unsigned _weightedDurationAtAttenuationThreshold;
	NSString* _classificationName;
	NSDictionary* _perDaySumERVThresholdsByDiagnosisReportType;

}

@property (nonatomic,copy,readonly) NSString * classificationName;                                           //@synthesize classificationName=_classificationName - In the implementation block
@property (nonatomic,readonly) unsigned char index;                                                          //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned perDaySumERVThreshold;                                               //@synthesize perDaySumERVThreshold=_perDaySumERVThreshold - In the implementation block
@property (nonatomic,readonly) unsigned perDayMaxERVThreshold;                                               //@synthesize perDayMaxERVThreshold=_perDayMaxERVThreshold - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * perDaySumERVThresholdsByDiagnosisReportType;              //@synthesize perDaySumERVThresholdsByDiagnosisReportType=_perDaySumERVThresholdsByDiagnosisReportType - In the implementation block
@property (nonatomic,readonly) unsigned weightedDurationAtAttenuationThreshold;                              //@synthesize weightedDurationAtAttenuationThreshold=_weightedDurationAtAttenuationThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)getCriteria:(id*)arg1 fromDictionary:(id)arg2 index:(unsigned char)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned char)index;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)classificationName;
-(unsigned)perDaySumERVThreshold;
-(unsigned)perDayMaxERVThreshold;
-(NSDictionary *)perDaySumERVThresholdsByDiagnosisReportType;
-(unsigned)weightedDurationAtAttenuationThreshold;
@end
