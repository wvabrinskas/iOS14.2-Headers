/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA1 : MBDigest {

	CC_SHA1state_st _context;

}
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)final;
-(id)init;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
@end

