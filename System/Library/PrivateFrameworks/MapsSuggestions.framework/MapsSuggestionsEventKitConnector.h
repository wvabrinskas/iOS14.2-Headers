/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MapsSuggestionsEventKitConnector <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsEventKitConnectorDelegate> delegate; 
@required
-(void)startListeningForChanges;
-(id<MapsSuggestionsEventKitConnectorDelegate>)delegate;
-(void)stopListeningForChanges;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
-(void)setDelegate:(id)arg1;
-(id)eventWithIdentifier:(id)arg1;
-(id)calendarsForEntityType:(unsigned long long)arg1;
-(id)visibleCalendars;
-(id)eventsMatchingPredicate:(id)arg1;

@end

