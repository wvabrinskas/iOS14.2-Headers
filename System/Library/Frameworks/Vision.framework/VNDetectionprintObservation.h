/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class VNDetectionprint;

@interface VNDetectionprintObservation : VNObservation {

	VNDetectionprint* _detectionprint;

}

@property (copy,readonly) VNDetectionprint * detectionprint;              //@synthesize detectionprint=_detectionprint - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDetectionprint:(id)arg1 requestRevision:(unsigned long long)arg2 ;
-(VNDetectionprint *)detectionprint;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
