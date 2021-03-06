/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString, NSArray;

@interface SAMLAttribute : SAMLBaseElement

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * nameFormat; 
@property (nonatomic,readonly) NSString * friendlyName; 
@property (nonatomic,readonly) NSArray * values; 
+(id)createElement:(id*)arg1 ;
-(NSString *)nameFormat;
-(NSArray *)values;
-(NSString *)name;
-(NSString *)friendlyName;
-(void)setName:(NSString *)arg1 ;
-(void)addAttributeValue:(id)arg1 ;
@end

