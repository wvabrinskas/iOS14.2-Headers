/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface RTIDataPayload : NSObject <NSSecureCoding> {

	unsigned long long _version;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(id)payloadWithData:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)payloadWithData:(id)arg1 version:(unsigned long long)arg2 ;
-(void)setData:(NSData *)arg1 ;
-(id)init;
-(unsigned long long)version;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 version:(unsigned long long)arg2 ;
@end
