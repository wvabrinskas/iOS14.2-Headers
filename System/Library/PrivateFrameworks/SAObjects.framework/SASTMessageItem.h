/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSURL, NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSURL * audioMessageURL; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,retain) SAUIDecoratedText * content; 
@property (nonatomic,retain) SAUIDecoratedText * recipient; 
@property (nonatomic,copy) NSString * serviceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageItem;
+(id)messageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)audioMessageURL;
-(void)setAudioMessageURL:(NSURL *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setContent:(SAUIDecoratedText *)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setRecipient:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)recipient;
-(SAUIDecoratedText *)content;
@end

