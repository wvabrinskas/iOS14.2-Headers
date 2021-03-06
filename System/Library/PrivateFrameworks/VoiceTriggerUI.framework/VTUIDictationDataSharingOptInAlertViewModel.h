/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VTUIDictationDataSharingOptInAlertViewModel : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _optInButtonTitle;
	NSString* _learnMoreButtonTitle;
	NSString* _optOutButtonTitle;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * optInButtonTitle;                  //@synthesize optInButtonTitle=_optInButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * learnMoreButtonTitle;              //@synthesize learnMoreButtonTitle=_learnMoreButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * optOutButtonTitle;                 //@synthesize optOutButtonTitle=_optOutButtonTitle - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)learnMoreButtonTitle;
-(void)setOptInButtonTitle:(NSString *)arg1 ;
-(void)setLearnMoreButtonTitle:(NSString *)arg1 ;
-(void)setOptOutButtonTitle:(NSString *)arg1 ;
-(NSString *)optInButtonTitle;
-(NSString *)optOutButtonTitle;
@end

