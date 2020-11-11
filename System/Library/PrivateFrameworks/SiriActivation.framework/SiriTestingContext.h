/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriContext.h>

@class NSDictionary;

@interface SiriTestingContext : SiriContext {

	NSDictionary* _testingContext;

}

@property (nonatomic,readonly) NSDictionary * testingContext;              //@synthesize testingContext=_testingContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)testingContext;
-(BOOL)containsRecognitionStrings;
-(BOOL)containsAudioInput;
-(id)initWithPPTContext:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithRecognitionStrings:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithAudioInput:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithPPTContext:(id)arg1 ;
-(id)initWithRecognitionStrings:(id)arg1 ;
-(id)initWithAudioInput:(id)arg1 ;
@end
