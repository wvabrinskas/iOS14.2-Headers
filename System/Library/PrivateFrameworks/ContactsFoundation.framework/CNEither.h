/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNPair;

@interface CNEither : NSObject <NSSecureCoding> {

	CNPair* _pair;

}

@property (nonatomic,retain) CNPair * pair;               //@synthesize pair=_pair - In the implementation block
@property (nonatomic,readonly) BOOL isLeft; 
@property (nonatomic,readonly) BOOL isRight; 
@property (nonatomic,readonly) id left; 
@property (nonatomic,readonly) id right; 
+(id)eitherWithRight:(id)arg1 ;
+(id)eitherWithBool:(BOOL)arg1 error:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)eitherWithLeft:(id)arg1 ;
+(id)eitherWithBlock:(/*^block*/id)arg1 ;
+(id)firstLeftInLazyChain:(id)arg1 ;
+(id)eitherWithLeft:(id)arg1 right:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithLeft:(id)arg1 right:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPair:(CNPair *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isRight;
-(id)right;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLeft;
-(CNPair *)pair;
-(id)left;
@end
