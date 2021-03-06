/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _CDInteractionStore, BMMiningTaskConfig;

@interface BMInteractionProvider : NSObject {

	_CDInteractionStore* _interactionStore;
	id _contextKitClient;
	BMMiningTaskConfig* _bmMiningTaskConfig;

}

@property (nonatomic,retain) id contextKitClient;                                   //@synthesize contextKitClient=_contextKitClient - In the implementation block
@property (retain) BMMiningTaskConfig * bmMiningTaskConfig;                         //@synthesize bmMiningTaskConfig=_bmMiningTaskConfig - In the implementation block
@property (nonatomic,readonly) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(id)initWithInteractionStore:(id)arg1 ;
-(BMMiningTaskConfig *)bmMiningTaskConfig;
-(id)initWithBMMiningTaskConfig:(id)arg1 ;
-(void)setBmMiningTaskConfig:(BMMiningTaskConfig *)arg1 ;
-(id)interactionEventsForTypes:(id)arg1 error:(id*)arg2 ;
-(id)initWithInteractionStore:(id)arg1 bmMiningTaskConfig:(id)arg2 ;
-(id)batchFetchedPhotoSuggestionsForInteractions:(id)arg1 ;
-(id)contextKitClient;
-(id)getResultsForRequest:(id)arg1 ;
-(void)setContextKitClient:(id)arg1 ;
@end

