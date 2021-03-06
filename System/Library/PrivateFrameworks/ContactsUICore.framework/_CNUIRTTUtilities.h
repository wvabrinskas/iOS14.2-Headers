/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNUIRTTUtilities.h>

@class RTTTelephonyUtilities, NSString;

@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities> {

	RTTTelephonyUtilities* _utilityProvider;

}

@property (nonatomic,retain) RTTTelephonyUtilities * utilityProvider;              //@synthesize utilityProvider=_utilityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(id)init;
-(BOOL)relayIsSupported;
-(id)initWithUtilityProvider:(id)arg1 ;
-(id)nts_lazyUtilityProvider;
-(RTTTelephonyUtilities *)utilityProvider;
-(void)setUtilityProvider:(RTTTelephonyUtilities *)arg1 ;
@end

