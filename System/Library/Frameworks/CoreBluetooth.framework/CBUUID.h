/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying> {

	unsigned char _bytes[16];
	char _type;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * UUIDString; 
+(id)UUIDWithData:(id)arg1 ;
+(id)UUIDWithCFUUID:(CFUUIDRef)arg1 ;
+(id)UUIDWithNSUUID:(id)arg1 ;
+(id)UUIDWithString:(id)arg1 ;
-(NSString *)UUIDString;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithNSUUID:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
