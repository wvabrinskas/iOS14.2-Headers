/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFChecksum : NSObject <NSCopying> {

	PFChecksumBytes _bytes;

}
-(id)initWithString:(id)arg1 ;
-(id)initWithBytes:(PFChecksumBytes)arg1 ;
-(id)initWithChecksumAsData:(id)arg1 ;
-(PFChecksumBytes)checksumBytes;
-(BOOL)isEqualToBytes:(PFChecksumBytes)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
@end
