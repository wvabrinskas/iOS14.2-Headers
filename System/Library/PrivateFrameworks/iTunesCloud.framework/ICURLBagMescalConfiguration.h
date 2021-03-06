/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject {

	BOOL _shouldSignBody;
	NSArray* _fields;
	NSArray* _headers;

}

@property (assign,nonatomic) BOOL shouldSignBody;              //@synthesize shouldSignBody=_shouldSignBody - In the implementation block
@property (nonatomic,copy) NSArray * fields;                   //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSArray * headers;                  //@synthesize headers=_headers - In the implementation block
-(BOOL)shouldSignBody;
-(void)setShouldSignBody:(BOOL)arg1 ;
-(NSArray *)headers;
-(NSArray *)fields;
-(id)description;
-(void)setHeaders:(NSArray *)arg1 ;
-(void)setFields:(NSArray *)arg1 ;
@end

