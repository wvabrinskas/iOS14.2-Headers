/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData, NSData;

@interface WFSSHKeyEncoder : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,readonly) NSMutableData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) NSData * encodedData; 
-(id)init;
-(NSMutableData *)data;
-(void)encodeString:(id)arg1 ;
-(void)encodeData:(id)arg1 ;
-(unsigned long long)encodedLength;
-(NSData *)encodedData;
-(void)encodeChar:(char)arg1 ;
-(void)encodeInteger:(unsigned)arg1 ;
-(void)encodeStringWithPreceedingLength:(id)arg1 ;
-(void)encodeDataWithPreceedingLength:(id)arg1 ;
@end
