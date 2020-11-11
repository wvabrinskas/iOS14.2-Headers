/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhoneNumberResolver.framework/PhoneNumberResolver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PNRStringsFileReaderResult : NSObject {

	NSString* _country;
	NSString* _region;
	NSString* _city;

}

@property (nonatomic,retain) NSString * country;              //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * region;               //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSString * city;                 //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) long long score; 
+(long long)maxPossibleScore;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)city;
-(NSString *)region;
-(void)setRegion:(NSString *)arg1 ;
-(long long)score;
-(NSString *)country;
-(BOOL)isEqualTo:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)shouldOrderCityFirstForLanguage:(id)arg1 phoneNumberInCC:(id)arg2 ;
-(id)separatorForLanguage:(id)arg1 ;
-(id)initWithCountry:(id)arg1 region:(id)arg2 city:(id)arg3 ;
-(id)aggregateStringWhileInCountry:(id)arg1 forLanguage:(id)arg2 ccOfNumber:(id)arg3 ;
-(BOOL)isPlaceHolderForEmpty;
@end
