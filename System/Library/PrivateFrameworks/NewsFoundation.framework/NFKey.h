/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsFoundation/NewsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NFKey : NSObject <NSCopying> {

	unsigned long long _address;
	NSString* _name;
	id _type;

}

@property (nonatomic,readonly) unsigned long long address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id type;                                 //@synthesize type=_type - In the implementation block
-(id)copyWithName:(id)arg1 ;
-(unsigned long long)address;
-(unsigned long long)hash;
-(id)initWithTypeName:(id)arg1 name:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)type;
-(id)initWithAddressOfType:(id)arg1 name:(id)arg2 ;
-(id)initWithAddress:(unsigned long long)arg1 type:(id)arg2 name:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
