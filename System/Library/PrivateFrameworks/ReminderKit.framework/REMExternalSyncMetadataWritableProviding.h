/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol REMExternalSyncMetadataWritableProviding
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
@required
-(void)setDaSyncToken:(id)arg1;
-(void)setExternalIdentifier:(id)arg1;
-(void)setDaPushKey:(id)arg1;
-(NSString *)daSyncToken;
-(void)setExternalModificationTag:(id)arg1;
-(NSString *)externalIdentifier;
-(NSString *)externalModificationTag;
-(NSString *)daPushKey;

@end

