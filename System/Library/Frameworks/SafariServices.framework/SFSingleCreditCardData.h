/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/WBSSingleCreditCardData.h>

@class NSString;

@interface SFSingleCreditCardData : WBSSingleCreditCardData {

	NSString* _headerText;
	NSString* _displayText;

}

@property (nonatomic,copy,readonly) NSString * headerText;               //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayText;              //@synthesize displayText=_displayText - In the implementation block
-(id)initWithHeaderText:(id)arg1 displayText:(id)arg2 type:(long long)arg3 value:(id)arg4 ;
-(NSString *)headerText;
-(NSString *)displayText;
@end

