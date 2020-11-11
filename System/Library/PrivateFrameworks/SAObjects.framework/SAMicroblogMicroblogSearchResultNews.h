/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSURL, NSString;

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (nonatomic,copy) NSURL * articleURL; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * title; 
+(id)microblogSearchResultNews;
+(id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)articleURL;
-(void)setArticleURL:(NSURL *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
@end
