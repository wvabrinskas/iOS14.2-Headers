/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDSupportedRTPConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSArray* _srtpCryptoSuites;

}

@property (nonatomic,copy,readonly) NSArray * srtpCryptoSuites;              //@synthesize srtpCryptoSuites=_srtpCryptoSuites - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(NSArray *)srtpCryptoSuites;
-(id)initWithCryptoSuites:(id)arg1 ;
@end

