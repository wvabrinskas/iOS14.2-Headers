/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SXPresentableMessage : NSObject {

	NSString* _recipient;
	NSString* _message;

}

@property (nonatomic,copy,readonly) NSString * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                //@synthesize message=_message - In the implementation block
-(NSString *)message;
-(NSString *)recipient;
-(id)initWithRecipient:(id)arg1 message:(id)arg2 ;
@end

