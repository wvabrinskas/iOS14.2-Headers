/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_voucher;
@class NSObject;

@interface UMUserPersonaContext : NSObject <NSCopying> {

	NSObject*<OS_voucher> _voucher;

}
+(id)currentPersonaContext;
-(id)init;
-(id)copyPersonaContext:(id*)arg1 ;
-(void)contextAdopt;
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

