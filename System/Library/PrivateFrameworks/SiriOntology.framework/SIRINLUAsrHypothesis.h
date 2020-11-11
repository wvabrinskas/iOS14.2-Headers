/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface SIRINLUAsrHypothesis : NSObject <NSSecureCoding> {

	NSString* _utterance;
	double _probability;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSString * utterance;              //@synthesize utterance=_utterance - In the implementation block
@property (assign,nonatomic) double probability;                //@synthesize probability=_probability - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)utterance;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUtterance:(NSString *)arg1 ;
-(id)description;
-(NSUUID *)uuid;
-(double)probability;
-(id)initWithCoder:(id)arg1 ;
-(void)setProbability:(double)arg1 ;
-(id)initWithUtterance:(id)arg1 probability:(double)arg2 uuid:(id)arg3 ;
@end
