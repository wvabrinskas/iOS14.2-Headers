/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSDictionary;

@interface GEOURLWithHeaders : NSObject {

	NSURL* _URL;
	NSDictionary* _headerFields;

}

@property (nonatomic,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
-(id)init;
-(NSDictionary *)headerFields;
-(id)initWithURL:(id)arg1 headerFields:(id)arg2 ;
-(NSURL *)URL;
@end
