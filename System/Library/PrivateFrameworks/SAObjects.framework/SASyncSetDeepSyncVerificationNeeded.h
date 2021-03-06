/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncSetDeepSyncVerificationNeeded : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * keys; 
+(id)setDeepSyncVerificationNeeded;
+(id)setDeepSyncVerificationNeededWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)keys;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(void)setKeys:(NSArray *)arg1 ;
@end

