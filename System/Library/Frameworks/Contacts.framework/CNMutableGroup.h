/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNGroup.h>

@class NSString, NSData, NSDate, CNGroup;

@interface CNMutableGroup : CNGroup

@property (nonatomic,copy) NSString * externalURI; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSData * externalRepresentation; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * externalUUID; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) CNGroup * snapshot; 
@property (nonatomic,copy) NSString * name; 
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setSnapshot:(CNGroup *)arg1 ;
-(id)freeze;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSString *)externalUUID;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSString *)identifier;
-(void)setExternalUUID:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)externalIdentifier;
-(id)freezeWithSelfAsSnapshot;
-(NSString *)name;
-(int)iOSLegacyIdentifier;
-(void)setExternalURI:(NSString *)arg1 ;
-(NSData *)externalRepresentation;
-(void)adoptValuesFromAndSetSnapshot:(id)arg1 ;
-(NSDate *)modificationDate;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(NSDate *)creationDate;
-(id)copy;
-(void)setName:(NSString *)arg1 ;
@end
