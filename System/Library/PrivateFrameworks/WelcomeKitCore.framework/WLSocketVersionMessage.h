/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WelcomeKitCore/WLSocketMessage.h>

@interface WLSocketVersionMessage : WLSocketMessage {

	unsigned long long _version;

}

@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)initWithVersion:(unsigned long long)arg1 ;
@end

