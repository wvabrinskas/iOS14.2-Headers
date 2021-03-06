/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface LASecureData : NSObject {

	unsigned long long _allocatedLength;
	void* _bytes;
	unsigned long long _bytesLength;

}
+(void)resetBytes:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)secureDataWithString:(id)arg1 ;
+(id)secureDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)secureDataWithData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithString:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(id)init;
-(const void*)bytes;
-(unsigned long long)length;
-(void)reset;
-(BOOL)isEqual:(id)arg1 ;
-(id)data;
-(void)resize:(unsigned long long)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)dealloc;
-(void)prepareBuffer:(unsigned long long)arg1 ;
-(BOOL)removeLastCharacter;
@end

