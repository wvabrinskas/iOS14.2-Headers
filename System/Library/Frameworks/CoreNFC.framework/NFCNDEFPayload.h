/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NFCNDEFPayload : NSObject <NSSecureCoding> {

	unsigned long long _chunkSize;
	unsigned char _typeNameFormat;
	NSData* _type;
	NSData* _identifier;
	NSData* _payload;

}

@property (assign,nonatomic) unsigned char typeNameFormat;              //@synthesize typeNameFormat=_typeNameFormat - In the implementation block
@property (nonatomic,copy) NSData * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSData * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * payload;                            //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)wellKnownTypeURIPayloadWithString:(id)arg1 ;
+(id)wellKnownTypeURIPayloadWithURL:(id)arg1 ;
+(id)wellKnowTypeTextPayloadWithString:(id)arg1 locale:(id)arg2 ;
+(id)wellKnownTypeTextPayloadWithString:(id)arg1 locale:(id)arg2 ;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(id)asData;
-(unsigned long long)chunkSize;
-(void)setChunkSize:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)identifier;
-(void)setType:(NSData *)arg1 ;
-(id)description;
-(NSData *)type;
-(void)setIdentifier:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)typeNameFormat;
-(void)setTypeNameFormat:(unsigned char)arg1 ;
-(id)initWithFormatType:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5 ;
-(id)wellKnownTypeURIPayload;
-(id)initWithFormat:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 ;
-(id)initWithFormat:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4 chunkSize:(unsigned long long)arg5 ;
-(id)resolveURIString:(id)arg1 ;
-(id)wellKnownTypeTextPayloadWithLocale:(id*)arg1 ;
@end
