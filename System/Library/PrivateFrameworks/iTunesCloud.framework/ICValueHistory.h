/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _items;

}

@property (nonatomic,readonly) long long count; 
+(BOOL)supportsSecureCoding;
-(void)removeAllValues;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)lastValue;
-(long long)count;
-(void)addValue:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1 ;
-(void)removeValuesBeforeTimestamp:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)firstValueBeforeTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addValuesFromHistory:(id)arg1 ;
@end

