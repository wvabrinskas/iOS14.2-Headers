/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
@class NSString, NSArray;

@interface TTSBoostRuleMatch : NSObject {

	NSString* _rule;
	long long _boostRuleIndex;
	NSArray* _groupings;
	NSRange _range;

}

@property (nonatomic,retain) NSString * rule;                       //@synthesize rule=_rule - In the implementation block
@property (assign,nonatomic) NSRange range;                         //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long boostRuleIndex;              //@synthesize boostRuleIndex=_boostRuleIndex - In the implementation block
@property (nonatomic,retain) NSArray * groupings;                   //@synthesize groupings=_groupings - In the implementation block
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)description;
-(void)setRule:(NSString *)arg1 ;
-(NSString *)rule;
-(void)setGroupings:(NSArray *)arg1 ;
-(NSArray *)groupings;
-(long long)boostRuleIndex;
-(void)setBoostRuleIndex:(long long)arg1 ;
@end

