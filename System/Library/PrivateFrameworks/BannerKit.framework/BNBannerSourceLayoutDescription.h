/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BannerKit/BannerKit-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface BNBannerSourceLayoutDescription : NSObject <BSXPCSecureCoding> {

	CGSize _containerSize;
	CGSize _presentationSize;

}

@property (nonatomic,readonly) CGSize containerSize;                 //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) CGSize presentationSize;              //@synthesize presentationSize=_presentationSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)bannerSourceLayoutDescriptionWithPresentationSize:(CGSize)arg1 containerSize:(CGSize)arg2 ;
-(CGSize)presentationSize;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(CGSize)containerSize;
-(id)_initWithPresentationSize:(CGSize)arg1 containerSize:(CGSize)arg2 ;
@end
