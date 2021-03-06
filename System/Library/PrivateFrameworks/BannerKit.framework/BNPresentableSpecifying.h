/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BNPresentableSpecifying <BNPresentableUniquelyIdentifying>
@property (nonatomic,readonly) long long presentableType; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,readonly) UIEdgeInsets contentOutsets; 
@required
-(CGSize)preferredContentSize;
-(long long)presentableType;
-(UIEdgeInsets)contentOutsets;

@end

