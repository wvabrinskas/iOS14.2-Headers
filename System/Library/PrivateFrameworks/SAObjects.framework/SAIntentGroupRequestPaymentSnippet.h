/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUISnippet.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupRequestPaymentSnippet : SAUISnippet

@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentResponse; 
+(id)requestPaymentSnippet;
+(id)requestPaymentSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)intent;
-(id)encodedClassName;
-(SAIntentGroupProtobufMessage *)intentResponse;
-(void)setIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
@end

