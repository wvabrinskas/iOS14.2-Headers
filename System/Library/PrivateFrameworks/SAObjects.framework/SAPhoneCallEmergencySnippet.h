/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAPhoneCallSnippet.h>

@class SAUIColor;

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet

@property (nonatomic,retain) SAUIColor * bodyBackgroundColor; 
@property (nonatomic,retain) SAUIColor * bodyTextColor; 
@property (assign,nonatomic) long long countDownSeconds; 
@property (nonatomic,retain) SAUIColor * headerBackgroundColor; 
@property (nonatomic,retain) SAUIColor * headerTextColor; 
+(id)callEmergencySnippet;
+(id)callEmergencySnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setHeaderBackgroundColor:(SAUIColor *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIColor *)headerBackgroundColor;
-(void)setHeaderTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)bodyBackgroundColor;
-(void)setBodyBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerTextColor;
-(SAUIColor *)bodyTextColor;
-(void)setBodyTextColor:(SAUIColor *)arg1 ;
-(long long)countDownSeconds;
-(void)setCountDownSeconds:(long long)arg1 ;
@end
