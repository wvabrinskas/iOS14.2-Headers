/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SPQueryTask, NSArray, NSString;

@interface SPQueryResponse : NSObject {

	int _kind;
	int _state;
	SPQueryTask* _task;
	NSArray* _resultSections;
	NSString* _sessionEntityString;

}

@property (assign,nonatomic) int kind;                                    //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) int state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SPQueryTask * task;                          //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSArray * resultSections;                    //@synthesize resultSections=_resultSections - In the implementation block
@property (nonatomic,retain) NSString * sessionEntityString;              //@synthesize sessionEntityString=_sessionEntityString - In the implementation block
-(void)setResultSections:(NSArray *)arg1 ;
-(int)kind;
-(id)initWithTask:(id)arg1 ;
-(void)setKind:(int)arg1 ;
-(id)init;
-(void)setState:(int)arg1 ;
-(NSArray *)resultSections;
-(NSString *)sessionEntityString;
-(int)state;
-(SPQueryTask *)task;
-(id)description;
-(void)setTask:(SPQueryTask *)arg1 ;
-(void)setSessionEntityString:(NSString *)arg1 ;
-(id)copy;
@end
