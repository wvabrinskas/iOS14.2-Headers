/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreNFC/CoreNFC-Structs.h>
#import <CoreNFC/NFCTagCommandConfiguration.h>

@class NSData;

@interface NFCISO15693CustomCommandConfiguration : NFCTagCommandConfiguration {

	unsigned char _flags;
	unsigned long long _manufacturerCode;
	unsigned long long _customCommandCode;
	NSData* _requestParameters;

}

@property (assign,nonatomic) unsigned char flags;                               //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long manufacturerCode;               //@synthesize manufacturerCode=_manufacturerCode - In the implementation block
@property (assign,nonatomic) unsigned long long customCommandCode;              //@synthesize customCommandCode=_customCommandCode - In the implementation block
@property (nonatomic,copy) NSData * requestParameters;                          //@synthesize requestParameters=_requestParameters - In the implementation block
-(void)setRequestParameters:(NSData *)arg1 ;
-(unsigned char)flags;
-(void)setFlags:(unsigned char)arg1 ;
-(NSData *)requestParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setManufacturerCode:(unsigned long long)arg1 ;
-(void)setCustomCommandCode:(unsigned long long)arg1 ;
-(id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3 maximumRetries:(unsigned long long)arg4 retryInterval:(double)arg5 ;
-(id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3 ;
-(id)asNSDataWithError:(id*)arg1 ;
-(unsigned long long)manufacturerCode;
-(unsigned long long)customCommandCode;
@end
