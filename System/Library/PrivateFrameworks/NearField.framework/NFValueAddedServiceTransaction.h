/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSNumber, NSError;

@interface NFValueAddedServiceTransaction : NSObject <NSSecureCoding> {

	unsigned _result;
	NSData* _merchantId;
	NSString* _signupUrl;
	NSNumber* _terminalAppVersion;
	NSNumber* _terminalMode;
	NSNumber* _didSucceed;
	NSData* _passData;
	NSData* _token;
	NSError* _error;
	NSNumber* _filter;
	NSNumber* _filterType;

}

@property (nonatomic,retain,readonly) NSData * merchantId;                        //@synthesize merchantId=_merchantId - In the implementation block
@property (nonatomic,retain,readonly) NSString * signupUrl;                       //@synthesize signupUrl=_signupUrl - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * terminalAppVersion;              //@synthesize terminalAppVersion=_terminalAppVersion - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * terminalMode;                    //@synthesize terminalMode=_terminalMode - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * didSucceed;                      //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,retain,readonly) NSData * passData;                          //@synthesize passData=_passData - In the implementation block
@property (nonatomic,retain,readonly) NSData * token;                             //@synthesize token=_token - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * filter;                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * filterType;                      //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) unsigned result;                                   //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(NSNumber *)filter;
-(NSNumber *)filterType;
-(NSError *)error;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)token;
-(NSString *)signupUrl;
-(NSData *)merchantId;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)terminalMode;
-(unsigned)result;
-(NSNumber *)didSucceed;
-(NSNumber *)terminalAppVersion;
-(NSData *)passData;
@end

