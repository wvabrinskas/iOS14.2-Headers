/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsUI/SGReminderSuggestionBase.h>
#import <libobjc.A.dylib/REMReminderCreationDelegate.h>

@class NSAttributedString, NSDateComponents, CLLocation, NSString, NSURL, NSUserActivity;

@interface SGReminderSuggestion : SGReminderSuggestionBase <REMReminderCreationDelegate>

@property (nonatomic,readonly) NSAttributedString * title; 
@property (nonatomic,readonly) NSAttributedString * notes; 
@property (nonatomic,readonly) NSDateComponents * dueDateComponents; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSString * locationString; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (nonatomic,readonly) BOOL wantsExtendedDetailOnlyView; 
@property (nonatomic,readonly) BOOL titleIsGeneratedSuggestion; 
@property (nonatomic,readonly) long long locationProximity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remindersImage;
-(id)suggestionPrimaryAction;
-(id)suggestionImage;
-(id)suggestionCategoryImage;
-(void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(BOOL)arg2 ;
-(void)reminderCreationViewController:(id)arg1 didCreateReminder:(BOOL)arg2 error:(id)arg3 ;
@end
