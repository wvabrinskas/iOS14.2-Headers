/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/ML3Predicate.h>

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate {

	NSString* _property;

}

@property (nonatomic,copy) NSString * property;              //@synthesize property=_property - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 ;
-(NSString *)property;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProperty:(id)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
@end
