/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError, NSMutableArray, NSDate;

@interface MBStateInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCloud;
	BOOL _isBackground;
	int _state;
	float _progress;
	unsigned long long _estimatedTimeRemaining;
	NSError* _error;
	NSMutableArray* _errors;
	NSDate* _date;

}

@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isBackground;                                      //@synthesize isBackground=_isBackground - In the implementation block
@property (assign,nonatomic) BOOL isCloud;                                           //@synthesize isCloud=_isCloud - In the implementation block
@property (assign,nonatomic) float progress;                                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
@property (nonatomic,retain) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * errors;                                //@synthesize errors=_errors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isBackground;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setState:(int)arg1 ;
-(unsigned long long)estimatedTimeRemaining;
-(NSError *)error;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsCloud:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(int)state;
-(void)setError:(NSError *)arg1 ;
-(NSDate *)date;
-(id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 error:(id)arg4 errors:(id)arg5 ;
-(void)setEstimatedTimeRemaining:(unsigned long long)arg1 ;
-(float)progress;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsBackground:(BOOL)arg1 ;
-(BOOL)isCloud;
-(void)setProgress:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 isCloud:(BOOL)arg4 isBackground:(BOOL)arg5 error:(id)arg6 errors:(id)arg7 ;
-(NSMutableArray *)errors;
@end
