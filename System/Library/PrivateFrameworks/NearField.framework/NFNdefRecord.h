/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NFNdefRecord.h>
@class NSData;


@protocol NFNdefRecord <NSObject>
@property (assign,nonatomic) unsigned char header; 
@property (assign,nonatomic) BOOL messageBegin; 
@property (assign,nonatomic) BOOL messageEnd; 
@property (assign,nonatomic) BOOL shortRecord; 
@property (assign,nonatomic) BOOL chunked; 
@property (assign,nonatomic) unsigned char typeNameFormat; 
@property (nonatomic,retain) NSData * type; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,retain) NSData * identifier; 
@required
-(NSData *)payload;
-(void)setPayload:(id)arg1;
-(void)setHeader:(unsigned char)arg1;
-(unsigned char)header;
-(id)asData;
-(NSData *)identifier;
-(void)setType:(id)arg1;
-(BOOL)chunked;
-(NSData *)type;
-(void)setIdentifier:(id)arg1;
-(unsigned char)typeNameFormat;
-(id)decode;
-(id)initWithNDEFRecord:(id)arg1;
-(void)setTypeNameFormat:(unsigned char)arg1;
-(void)setShortRecord:(BOOL)arg1;
-(BOOL)messageBegin;
-(BOOL)messageEnd;
-(BOOL)shortRecord;
-(BOOL)isURIRecord;
-(void)setMessageBegin:(BOOL)arg1;
-(void)setMessageEnd:(BOOL)arg1;
-(void)setChunked:(BOOL)arg1;

@end


@class NSData, NSString;

@interface NFNdefRecord : NSObject <NSSecureCoding, NFNdefRecord> {

	unsigned char _firstOctet;
	NSData* _identifier;
	NSData* _type;
	NSData* _payload;

}

@property (assign,nonatomic) unsigned char header; 
@property (assign,nonatomic) BOOL messageBegin; 
@property (assign,nonatomic) BOOL messageEnd; 
@property (assign,nonatomic) BOOL shortRecord; 
@property (assign,nonatomic) BOOL chunked; 
@property (assign,nonatomic) unsigned char typeNameFormat; 
@property (nonatomic,retain) NSData * type; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,retain) NSData * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emptyRecord;
+(BOOL)supportsSecureCoding;
+(id)recordWithURI:(id)arg1 ;
+(id)recordsFromBytes:(const void*)arg1 length:(unsigned)arg2 ;
+(id)recordWithText:(id)arg1 lang:(id)arg2 ;
+(id)recordWithTelephone:(id)arg1 ;
-(NSData *)payload;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)setPayload:(NSData *)arg1 ;
-(void)setHeader:(unsigned char)arg1 ;
-(unsigned char)header;
-(id)asData;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)identifier;
-(void)setType:(NSData *)arg1 ;
-(NSString *)description;
-(BOOL)chunked;
-(NSData *)type;
-(void)setIdentifier:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)typeNameFormat;
-(id)decode;
-(id)initWithNDEFRecord:(id)arg1 ;
-(void)setTypeNameFormat:(unsigned char)arg1 ;
-(void)setShortRecord:(BOOL)arg1 ;
-(void)_setIdLengthPresent:(BOOL)arg1 ;
-(BOOL)messageBegin;
-(BOOL)messageEnd;
-(BOOL)shortRecord;
-(BOOL)isURIRecord;
-(void)setMessageBegin:(BOOL)arg1 ;
-(void)setMessageEnd:(BOOL)arg1 ;
-(void)setChunked:(BOOL)arg1 ;
-(BOOL)_idLengthPresent;
@end

