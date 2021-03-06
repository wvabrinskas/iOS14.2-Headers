/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItem.h>

@class HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption;

@interface HUSiriLanguageOptionItem : HFItem {

	unsigned long long _optionStyle;
	HFAccessorySettingSiriLanguageAdapter* _adapter;
	HFSiriLanguageOption* _languageOption;

}

@property (nonatomic,readonly) unsigned long long optionStyle;                               //@synthesize optionStyle=_optionStyle - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingSiriLanguageAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,retain) HFSiriLanguageOption * languageOption;                          //@synthesize languageOption=_languageOption - In the implementation block
+(id)selectionKeyForLanguageOption:(id)arg1 withOptionStyle:(unsigned long long)arg2 ;
-(HFAccessorySettingSiriLanguageAdapter *)adapter;
-(void)setLanguageOption:(HFSiriLanguageOption *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFSiriLanguageOption *)languageOption;
-(unsigned long long)optionStyle;
-(id)initWithStyle:(unsigned long long)arg1 adapter:(id)arg2 languageOption:(id)arg3 ;
@end

