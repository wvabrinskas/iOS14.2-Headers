/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAMultiUserInfo : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * homeMembers; 
@property (nonatomic,copy) NSArray * multiUserPitchComposition; 
@property (assign,nonatomic) BOOL voiceProfilesAreInFlight; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)multiUserInfo;
+(id)multiUserInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSArray *)homeMembers;
-(void)setHomeMembers:(NSArray *)arg1 ;
-(NSArray *)multiUserPitchComposition;
-(void)setMultiUserPitchComposition:(NSArray *)arg1 ;
-(BOOL)voiceProfilesAreInFlight;
-(void)setVoiceProfilesAreInFlight:(BOOL)arg1 ;
@end
