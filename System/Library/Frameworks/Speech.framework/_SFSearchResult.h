/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Speech.framework/Speech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSHTTPURLResponse, NSData;

@interface _SFSearchResult : NSObject {

	NSHTTPURLResponse* _response;
	NSData* _data;
	long long _searchType;

}

@property (nonatomic,readonly) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long searchType;                      //@synthesize searchType=_searchType - In the implementation block
-(id)description;
-(NSData *)data;
-(long long)searchType;
-(NSHTTPURLResponse *)response;
-(id)initWithVoiceSearchResult:(id)arg1 ;
@end

