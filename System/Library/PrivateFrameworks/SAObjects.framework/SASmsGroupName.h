/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASmsGroupName : SADomainObject

@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * groupNameId; 
+(id)groupName;
+(id)groupNameWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)groupNameId;
-(void)setGroupNameId:(NSString *)arg1 ;
@end
