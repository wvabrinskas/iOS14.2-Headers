/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@protocol NSCopyingNSSecureCodingNSObject;
@class NSString, NSFormatter;

@interface _NSStringProxyForContext : NSString {

	NSString* _string;
	NSFormatter* _formatter;
	id<NSCopying><NSSecureCoding><NSObject> _item;

}

@property (copy) NSString * string;                    //@synthesize string=_string - In the implementation block
@property (copy) NSFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (copy) id item;                              //@synthesize item=_item - In the implementation block
-(id)_dynamicContextEvaluation:(id)arg1 patternString:(id)arg2 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)item;
-(NSFormatter *)formatter;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(void)setItem:(id)arg1 ;
-(void)setFormatter:(NSFormatter *)arg1 ;
-(void)_retainFormatter:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)dealloc;
@end

