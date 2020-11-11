/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LTLanguageInstallationStatus : NSObject <NSSecureCoding> {

	BOOL _isStalled;
	long long _progress;
	NSString* _localeIdentifier;
	unsigned long long _offlineState;
	long long _totalExpected;
	long long _totalWritten;
	double _expectedTimeRemaining;

}

@property (assign,nonatomic) long long progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                    //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long offlineState;              //@synthesize offlineState=_offlineState - In the implementation block
@property (assign,nonatomic) long long totalExpected;                      //@synthesize totalExpected=_totalExpected - In the implementation block
@property (assign,nonatomic) long long totalWritten;                       //@synthesize totalWritten=_totalWritten - In the implementation block
@property (assign,nonatomic) BOOL isStalled;                               //@synthesize isStalled=_isStalled - In the implementation block
@property (assign,nonatomic) double expectedTimeRemaining;                 //@synthesize expectedTimeRemaining=_expectedTimeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localeIdentifier;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isStalled;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(long long)progress;
-(id)description;
-(void)setTotalWritten:(long long)arg1 ;
-(void)setTotalExpected:(long long)arg1 ;
-(void)setExpectedTimeRemaining:(double)arg1 ;
-(void)setIsStalled:(BOOL)arg1 ;
-(long long)totalExpected;
-(id)initWithCoder:(id)arg1 ;
-(long long)totalWritten;
-(double)expectedTimeRemaining;
-(unsigned long long)offlineState;
-(void)setOfflineState:(unsigned long long)arg1 ;
-(void)setProgress:(long long)arg1 ;
@end
