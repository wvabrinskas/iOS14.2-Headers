/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol AMSUIDAirplaneModeInquiryDelegate;
@class RadiosPreferences;

@interface AMSUIDAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate> {

	id<AMSUIDAirplaneModeInquiryDelegate> _delegate;
	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;                            //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIDAirplaneModeInquiryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
+(id)settingsURL;
-(void)airplaneModeChanged;
-(id)init;
-(id<AMSUIDAirplaneModeInquiryDelegate>)delegate;
-(void)setDelegate:(id<AMSUIDAirplaneModeInquiryDelegate>)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(BOOL)isEnabled;
@end

