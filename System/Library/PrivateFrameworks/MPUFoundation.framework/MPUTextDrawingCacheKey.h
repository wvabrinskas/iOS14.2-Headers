/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPUTextDrawingCacheKey : NSObject <NSCopying> {

	NSString* _text;
	CGSize _allowedSize;

}

@property (assign,nonatomic) CGSize allowedSize;              //@synthesize allowedSize=_allowedSize - In the implementation block
@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
-(void)setText:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)text;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)allowedSize;
-(void)setAllowedSize:(CGSize)arg1 ;
@end

