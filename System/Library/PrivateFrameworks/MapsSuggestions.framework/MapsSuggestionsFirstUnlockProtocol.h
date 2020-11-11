/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MapsSuggestionsFirstUnlockProtocol <MapsSuggestionsTrigger,MapsSuggestionsRunCondition,MapsSuggestionsTriggerObserver>
@required
-(BOOL)hasDeviceBeenUnlocked;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;

@end
