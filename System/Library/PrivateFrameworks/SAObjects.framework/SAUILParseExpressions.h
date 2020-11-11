/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SARemoteDevice;

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * expressions; 
@property (nonatomic,retain) SARemoteDevice * targetDevice; 
+(id)parseExpressions;
+(id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(SARemoteDevice *)targetDevice;
-(id)groupIdentifier;
-(NSArray *)expressions;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(void)setExpressions:(NSArray *)arg1 ;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
@end
