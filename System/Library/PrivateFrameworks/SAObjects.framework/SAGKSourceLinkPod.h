/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIAppPunchOut;

@interface SAGKSourceLinkPod : SAGKPodView

@property (nonatomic,copy) NSString * linkText; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
+(id)sourceLinkPod;
+(id)sourceLinkPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIAppPunchOut *)punchOut;
-(id)encodedClassName;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSString *)linkText;
-(void)setLinkText:(NSString *)arg1 ;
@end
