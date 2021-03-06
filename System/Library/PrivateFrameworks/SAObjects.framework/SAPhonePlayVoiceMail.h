/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class SARemoteDevice, NSURL;

@interface SAPhonePlayVoiceMail : SADomainCommand

@property (nonatomic,retain) SARemoteDevice * targetDevice; 
@property (nonatomic,copy) NSURL * voiceMailId; 
+(id)playVoiceMail;
+(id)playVoiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
-(SARemoteDevice *)targetDevice;
-(NSURL *)voiceMailId;
-(id)groupIdentifier;
-(void)setVoiceMailId:(NSURL *)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
@end

