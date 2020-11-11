/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSDate, NSTimeZone;

@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	NSDate* _creationDate;
	NSTimeZone* _timeZone;

}

@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithCreationDate:(id)arg1 inTimeZone:(id)arg2 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSTimeZone *)timeZone;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end
