/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, MailAccount;

@interface MFDebugAccountState : NSObject {

	NSString* _identifier;
	NSArray* _lastKnownCapabilities;
	MailAccount* _mailAccount;

}

@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * lastKnownCapabilities;              //@synthesize lastKnownCapabilities=_lastKnownCapabilities - In the implementation block
@property (nonatomic,retain) MailAccount * mailAccount;                    //@synthesize mailAccount=_mailAccount - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)identifier;
-(MailAccount *)mailAccount;
-(void)setLastKnownCapabilities:(NSArray *)arg1 ;
-(void)setMailAccount:(MailAccount *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)lastKnownCapabilities;
-(id)initWithStateEventDictionary:(id)arg1 identifier:(id)arg2 lastKnownCapabilities:(id)arg3 ;
@end

