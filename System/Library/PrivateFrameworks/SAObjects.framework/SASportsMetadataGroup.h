/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSNumber;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * groupTitle; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) NSNumber * selected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataGroup;
+(id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSelected:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSNumber *)selected;
-(NSString *)groupTitle;
-(void)setGroupTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)metadata;
@end
