/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ATXProactiveSuggestionClientModel, TPSTipStatusController, NSArray;

@interface TPSProactiveSuggestion : NSObject {

	ATXProactiveSuggestionClientModel* _clientModel;
	TPSTipStatusController* _tipStatusController;
	NSArray* _eligibleTips;

}

@property (nonatomic,retain) NSArray * eligibleTips;              //@synthesize eligibleTips=_eligibleTips - In the implementation block
-(id)suggestions;
-(void)invalidateSuggestions;
-(id)initWithTipStatusController:(id)arg1 ;
-(NSArray *)eligibleTips;
-(id)suggestionFromTip:(id)arg1 ;
-(void)sendSuggestions:(id)arg1 ;
-(long long)frequencyControlledConfidenceRatingForTip:(id)arg1 withScore:(float)arg2 ;
-(float)scoreForTip:(id)arg1 ;
-(void)sendSuggestions;
-(void)setEligibleTips:(NSArray *)arg1 ;
@end

