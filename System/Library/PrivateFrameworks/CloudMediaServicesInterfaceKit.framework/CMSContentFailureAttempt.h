/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CMSCoding.h>

@class NSDate, NSString;

@interface CMSContentFailureAttempt : NSObject <CMSCoding> {

	unsigned long long _failure;
	NSDate* _timestamp;
	NSString* _result;
	NSString* _body;

}

@property (nonatomic,readonly) unsigned long long failure;              //@synthesize failure=_failure - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * body;                             //@synthesize body=_body - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBody:(NSString *)arg1 ;
-(void)setResult:(NSString *)arg1 ;
-(NSString *)body;
-(unsigned long long)failure;
-(NSDate *)timestamp;
-(NSString *)result;
-(id)initWithFailure:(unsigned long long)arg1 ;
-(id)cmsCoded;
@end
