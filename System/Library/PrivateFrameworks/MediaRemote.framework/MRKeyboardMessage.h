/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRTextEditingAttributes, NSData;

@interface MRKeyboardMessage : MRProtocolMessage {

	MRTextEditingAttributes* _attributes;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) NSData * encryptedTextCyphertext; 
@property (nonatomic,readonly) MRTextEditingAttributes * attributes; 
+(id)encryptedMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3 usingCryptoSession:(id)arg4 ;
-(id)decryptedTextUsingCryptoSession:(id)arg1 ;
-(unsigned long long)state;
-(id)initWithState:(unsigned long long)arg1 encryptedTextCyphertext:(id)arg2 attributes:(id)arg3 ;
-(NSData *)encryptedTextCyphertext;
-(unsigned long long)type;
-(MRTextEditingAttributes *)attributes;
@end
