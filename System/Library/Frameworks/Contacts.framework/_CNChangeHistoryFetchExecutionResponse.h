/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSData;

@interface _CNChangeHistoryFetchExecutionResponse : NSObject {

	NSArray* _events;
	NSData* _token;

}

@property (copy,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
@property (copy,readonly) NSData * token;                //@synthesize token=_token - In the implementation block
-(NSArray *)events;
-(NSData *)token;
-(id)initWithEvents:(id)arg1 token:(id)arg2 ;
@end

