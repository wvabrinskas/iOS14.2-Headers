/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIDividerViewElement;

@interface SKUIDividerPageComponent : SKUIPageComponent {

	NSString* _title;

}

@property (nonatomic,readonly) SKUIDividerViewElement * viewElement; 
@property (nonatomic,readonly) NSString * dividerTitle;                           //@synthesize title=_title - In the implementation block
-(long long)componentType;
-(id)initWithViewElement:(id)arg1 ;
-(NSString *)dividerTitle;
-(id)initWithCustomPageContext:(id)arg1 ;
-(id)initWithDividerTitle:(id)arg1 ;
@end
