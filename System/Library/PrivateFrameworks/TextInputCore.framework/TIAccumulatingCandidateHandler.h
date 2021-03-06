/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TICandidateHandler.h>

@class TIAutocorrectionList;

@interface TIAccumulatingCandidateHandler : NSObject <TICandidateHandler> {

	unsigned long long _status;
	/*^block*/id _candidateHandler;
	TIAutocorrectionList* _candidates;

}

@property (nonatomic,retain) TIAutocorrectionList * candidates;              //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,copy,readonly) id candidateHandler;                     //@synthesize candidateHandler=_candidateHandler - In the implementation block
@property (nonatomic,readonly) BOOL asynchronous; 
-(void)open;
-(void)close;
-(TIAutocorrectionList *)candidates;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
-(BOOL)asynchronous;
-(void)setCandidates:(TIAutocorrectionList *)arg1 ;
-(void)dealloc;
-(void)pushCandidates:(id)arg1 ;
-(id)candidateHandler;
@end

