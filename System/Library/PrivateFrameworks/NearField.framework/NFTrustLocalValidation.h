/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NearField/NFTrustObject.h>
#import <libobjc.A.dylib/NFTrustLocalValidation.h>

@protocol NFTrustLocalValidation
@required
-(unsigned char)primitiveLocalValidation;

@end


@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation> {

	unsigned char _primitiveLocalValidation;

}

@property (assign,nonatomic) unsigned char primitiveLocalValidation;              //@synthesize primitiveLocalValidation=_primitiveLocalValidation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localValidationWithPassCode;
+(id)localValidationWithTouchID;
+(id)localValidationWithFaceID;
+(id)withPrimitiveLocalValidation:(unsigned char)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)primitiveLocalValidation;
-(void)setPrimitiveLocalValidation:(unsigned char)arg1 ;
@end

