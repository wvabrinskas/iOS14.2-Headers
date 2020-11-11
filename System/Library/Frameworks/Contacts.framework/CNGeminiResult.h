/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNGeminiChannel, NSArray;

@interface CNGeminiResult : NSObject <NSSecureCoding> {

	CNGeminiChannel* _channel;
	long long _usage;
	NSArray* _availableChannels;

}

@property (nonatomic,readonly) CNGeminiChannel * channel;                //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) long long usage;                          //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) NSArray * availableChannels;              //@synthesize availableChannels=_availableChannels - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)usage;
-(CNGeminiChannel *)channel;
-(id)init;
-(id)initWithChannel:(id)arg1 usage:(long long)arg2 availableChannels:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)availableChannels;
-(id)initWithCoder:(id)arg1 ;
@end
