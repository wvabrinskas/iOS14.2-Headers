/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIPickerView.h>

@class PKAddressTextField, PKPickerContactFieldConfiguration;

@interface PKAddressPickerField : UIPickerView {

	PKAddressTextField* _addressTextField;
	PKPickerContactFieldConfiguration* _pickerFieldConfiguration;

}

@property (nonatomic,readonly) PKAddressTextField * addressTextField;                                     //@synthesize addressTextField=_addressTextField - In the implementation block
@property (nonatomic,readonly) PKPickerContactFieldConfiguration * pickerFieldConfiguration;              //@synthesize pickerFieldConfiguration=_pickerFieldConfiguration - In the implementation block
-(id)initWithFrame:(CGRect)arg1 addressTextField:(id)arg2 ;
-(PKAddressTextField *)addressTextField;
-(PKPickerContactFieldConfiguration *)pickerFieldConfiguration;
@end
