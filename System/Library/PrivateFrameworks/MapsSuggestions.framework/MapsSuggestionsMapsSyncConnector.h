/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MapsSuggestionsMapsSyncConnector <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate; 
@required
-(id<MapsSuggestionsMapsSyncConnectorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)allContentOfType:(long long)arg1 handler:(/*^block*/id)arg2;
-(id)newReviewedPlace;
-(id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg1;

@end

