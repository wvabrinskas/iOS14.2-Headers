/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class SAUIConfirmationOptions, SAUISash, NSString;

@interface SAUISnippet : SAAceView

@property (assign,nonatomic) long long category; 
@property (nonatomic,retain) SAUIConfirmationOptions * confirmationOptions; 
@property (nonatomic,retain) SAUISash * sash; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * summaryTitle; 
@property (nonatomic,copy) NSString * title; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(long long)category;
-(SAUISash *)sash;
-(void)setCategory:(long long)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setSash:(SAUISash *)arg1 ;
-(SAUIConfirmationOptions *)confirmationOptions;
-(void)setConfirmationOptions:(SAUIConfirmationOptions *)arg1 ;
-(NSString *)summaryTitle;
-(void)setSummaryTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
@end
