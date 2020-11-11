/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSArray.h>

@protocol SYChangeSerializer;
@class NSArray;

@interface _SYLazyChangeArray : NSArray {

	NSArray* _source;
	NSArray* _types;
	id<SYChangeSerializer> _decoder;
	BOOL _isSYObjectDataArray;
	long long _compatibilityVersion;

}

@property (assign,nonatomic) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
-(unsigned long long)count;
-(void)setCompatibilityVersion:(long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(long long)compatibilityVersion;
-(id)initWithSYObjectDataArray:(id)arg1 typeArray:(id)arg2 decoder:(id)arg3 ;
-(id)initWithSourceArray:(id)arg1 decoder:(id)arg2 ;
@end
