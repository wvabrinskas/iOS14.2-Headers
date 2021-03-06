/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface FCFeedCursor : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _order;

}

@property (assign,nonatomic) unsigned long long order;              //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) BOOL isTopOfFeed; 
@property (nonatomic,readonly) BOOL isBottomOfFeed; 
@property (nonatomic,copy,readonly) NSDate * date; 
+(id)cursorForOrder:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)cursorForBottomOfFeed;
+(id)cursorForCurrentDate;
+(id)cursorForTopOfFeed;
+(id)cursorForDate:(id)arg1 ;
-(id)bottommostCursor:(id)arg1 ;
-(long long)compareToCursor:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)description;
-(unsigned long long)order;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isTopOfFeed;
-(void)setOrder:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)topmostCursor:(id)arg1 ;
-(BOOL)isBottomOfFeed;
-(BOOL)isEqualToCursor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasReachedCursor:(id)arg1 ;
@end

