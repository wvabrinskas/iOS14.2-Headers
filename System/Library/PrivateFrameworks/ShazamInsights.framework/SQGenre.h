/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SQGenre : NSObject {

	float _score;
	NSString* _label;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) float score;                 //@synthesize score=_score - In the implementation block
+(id)genreWithLabel:(id)arg1 score:(float)arg2 ;
-(NSString *)label;
-(void)setScore:(float)arg1 ;
-(float)score;
-(void)setLabel:(NSString *)arg1 ;
@end

