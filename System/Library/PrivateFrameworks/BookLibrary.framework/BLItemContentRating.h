/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface BLItemContentRating : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * contentRatingDictionary; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * ratingDescription; 
@property (nonatomic,copy) NSString * ratingLabel; 
@property (assign,nonatomic) long long ratingSystem; 
+(long long)ratingSystemFromString:(id)arg1 ;
+(id)stringForRatingSystem:(long long)arg1 ;
-(long long)rank;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setRank:(long long)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(void)setRatingLabel:(NSString *)arg1 ;
-(long long)ratingSystem;
-(void)setRatingSystem:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ratingLabel;
-(NSDictionary *)contentRatingDictionary;
-(void)_setValueCopy:(id)arg1 forProperty:(id)arg2 ;
@end

