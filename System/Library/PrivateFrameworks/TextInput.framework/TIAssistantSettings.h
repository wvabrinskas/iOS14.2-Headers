/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TIAssistantSettings : NSObject
+(void)presentDialogForType:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)dismissDialog;
+(void)launchKeyboardSettings;
+(void)setTestBlock:(/*^block*/id)arg1 ;
+(void)promptToEnableDictationWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)dismissEnableDictationPrompt;
+(void)dismissEnableDataSharingPrompt;
+(void)launchDictationSettings;
+(void)promptToRemindDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)promptReminderDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)dismissedDataSharingWithResponse:(long long)arg1 ;
+(void)connectForOperations:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
+(void)promptToEnableDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
@end
