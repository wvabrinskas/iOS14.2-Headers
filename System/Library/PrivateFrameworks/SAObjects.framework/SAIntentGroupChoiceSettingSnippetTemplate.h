/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAIntentGroupSettingSnippetTemplate.h>

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate

@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,retain) id<SAServerBoundCommand> updateSlotCommand; 
+(id)choiceSettingSnippetTemplate;
+(id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)groupIdentifier;
-(BOOL)selected;
-(id)encodedClassName;
-(id<SAServerBoundCommand>)updateSlotCommand;
-(void)setUpdateSlotCommand:(id<SAServerBoundCommand>)arg1 ;
@end
