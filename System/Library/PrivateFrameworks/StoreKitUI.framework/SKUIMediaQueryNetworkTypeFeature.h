/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIMediaQueryFeature.h>

@class NSString;

@interface SKUIMediaQueryNetworkTypeFeature : SKUIMediaQueryFeature {

	NSString* _value;

}
+(BOOL)supportsFeatureName:(id)arg1 ;
-(id)description;
-(id)notificationNames;
-(id)requiredKeys;
-(id)initWithFeatureName:(id)arg1 value:(id)arg2 ;
-(BOOL)evaluateWithValues:(id)arg1 ;
@end

