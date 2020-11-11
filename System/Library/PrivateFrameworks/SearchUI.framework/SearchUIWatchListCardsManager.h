/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHashTable, NSString, WLKCanonicalPlayablesResponse, SearchUIWatchListUtilities;

@interface SearchUIWatchListCardsManager : NSObject {

	BOOL _isInUpNext;
	NSHashTable* _rowModels;
	NSString* _watchListIdentifier;
	WLKCanonicalPlayablesResponse* _response;
	SearchUIWatchListUtilities* _watchListUtility;

}

@property (nonatomic,retain) NSHashTable * rowModels;                                    //@synthesize rowModels=_rowModels - In the implementation block
@property (nonatomic,retain) NSString * watchListIdentifier;                             //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
@property (nonatomic,retain) WLKCanonicalPlayablesResponse * response;                   //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) SearchUIWatchListUtilities * watchListUtility;              //@synthesize watchListUtility=_watchListUtility - In the implementation block
@property (assign,nonatomic) BOOL isInUpNext;                                            //@synthesize isInUpNext=_isInUpNext - In the implementation block
+(BOOL)isUpNextCardSection:(id)arg1 ;
-(void)setResponse:(WLKCanonicalPlayablesResponse *)arg1 ;
-(NSHashTable *)rowModels;
-(void)setRowModels:(NSHashTable *)arg1 ;
-(void)setWatchListUtility:(SearchUIWatchListUtilities *)arg1 ;
-(void)setIsInUpNext:(BOOL)arg1 ;
-(long long)currentUpNextButtonState;
-(id)currentUpNextTextForRowModel:(id)arg1 ;
-(SearchUIWatchListUtilities *)watchListUtility;
-(void)addWatchListRowModelObserver:(id)arg1 ;
-(void)toggleUpNextWithDelegate:(id)arg1 ;
-(BOOL)isInUpNext;
-(BOOL)isTappable;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(WLKCanonicalPlayablesResponse *)response;
-(NSString *)watchListIdentifier;
-(id)initWithWatchListIdentifier:(id)arg1 ;
@end
