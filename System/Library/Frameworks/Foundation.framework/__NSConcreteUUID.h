/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUUID.h>

@interface __NSConcreteUUID : NSUUID {

	unsigned char _uuidBytes[16];

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)UUIDString;
-(id)init;
-(id)debugDescription;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUIDString:(id)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

