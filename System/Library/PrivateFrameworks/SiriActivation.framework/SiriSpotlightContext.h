/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriContext.h>

@class NSString;

@interface SiriSpotlightContext : SiriContext {

	NSString* _utteranceText;
	long long _source;

}

@property (nonatomic,copy) NSString * utteranceText;              //@synthesize utteranceText=_utteranceText - In the implementation block
@property (assign,nonatomic) long long source;                    //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(id)description;
-(long long)source;
-(id)initWithCoder:(id)arg1 ;
-(void)setUtteranceText:(NSString *)arg1 ;
-(NSString *)utteranceText;
@end
