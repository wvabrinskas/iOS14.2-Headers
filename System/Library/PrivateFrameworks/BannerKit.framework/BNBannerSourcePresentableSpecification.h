/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BannerKit/BannerKit-Structs.h>
#import <BannerKit/BNPresentableIdentification.h>
#import <libobjc.A.dylib/BNPresentableSpecifying.h>

@class NSUUID, NSString;

@interface BNBannerSourcePresentableSpecification : BNPresentableIdentification <BNPresentableSpecifying> {

	long long _presentableType;
	CGSize _preferredContentSize;
	UIEdgeInsets _contentOutsets;

}

@property (assign,nonatomic) long long presentableType;                          //@synthesize presentableType=_presentableType - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                        //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentOutsets;                        //@synthesize contentOutsets=_contentOutsets - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (nonatomic,copy,readonly) NSString * requestIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(NSString *)description;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(CGSize)preferredContentSize;
-(long long)presentableType;
-(void)setPresentableType:(long long)arg1 ;
-(void)setContentOutsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentOutsets;
@end

