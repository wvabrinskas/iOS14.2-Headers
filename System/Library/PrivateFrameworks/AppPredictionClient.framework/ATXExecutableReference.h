/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface ATXExecutableReference : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldClearOnEngagement;
	BOOL _shouldPurge;
	BOOL _suggestionIsHidden;
	NSString* _clientModelId;
	NSDate* _date;

}

@property (nonatomic,copy,readonly) NSString * clientModelId;              //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL shouldClearOnEngagement;               //@synthesize shouldClearOnEngagement=_shouldClearOnEngagement - In the implementation block
@property (assign,nonatomic) BOOL shouldPurge;                             //@synthesize shouldPurge=_shouldPurge - In the implementation block
@property (assign,nonatomic) BOOL suggestionIsHidden;                      //@synthesize suggestionIsHidden=_suggestionIsHidden - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clientModelId;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)jsonDict;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldClearOnEngagement;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithClientModelId:(id)arg1 date:(id)arg2 shouldClearOnEngagement:(BOOL)arg3 shouldPurge:(BOOL)arg4 suggestionIsHidden:(BOOL)arg5 ;
-(id)initWithClientModelId:(id)arg1 date:(id)arg2 shouldClearOnEngagement:(BOOL)arg3 ;
-(void)updateDateTo:(id)arg1 ;
-(BOOL)shouldPurge;
-(void)setShouldPurge:(BOOL)arg1 ;
-(BOOL)suggestionIsHidden;
-(void)setSuggestionIsHidden:(BOOL)arg1 ;
@end

