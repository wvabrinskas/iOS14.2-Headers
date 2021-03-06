/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HUQuickControlWheelPickerViewItem : NSObject {

	BOOL _isSelected;
	id _value;
	NSString* _text;

}

@property (nonatomic,copy,readonly) id value;                     //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL isSelected;                   //@synthesize isSelected=_isSelected - In the implementation block
-(BOOL)isSelected;
-(NSString *)text;
-(BOOL)isEqual:(id)arg1 ;
-(id)value;
-(id)initWithHFTVInputControlItemValue:(id)arg1 ;
-(id)initWithHFMultiStateControlItemValue:(id)arg1 text:(id)arg2 isSelected:(BOOL)arg3 ;
@end

