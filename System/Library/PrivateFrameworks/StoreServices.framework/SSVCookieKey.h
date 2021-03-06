/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface SSVCookieKey : NSObject <NSCopying> {

	NSNumber* _identifier;
	long long _scope;

}

@property (nonatomic,copy) NSNumber * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long scope;                  //@synthesize scope=_scope - In the implementation block
+(id)keyWithIdentifier:(id)arg1 scope:(long long)arg2 ;
-(void)setScope:(long long)arg1 ;
-(NSNumber *)identifier;
-(long long)scope;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

