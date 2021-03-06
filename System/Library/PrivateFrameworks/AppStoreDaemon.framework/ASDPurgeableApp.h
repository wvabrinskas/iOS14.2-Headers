/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding> {

	BOOL _systemApp;
	NSString* _bundleID;
	NSString* _purgeableReason;
	long long _staticDiskUsage;
	NSNumber* _storeItemID;

}

@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * purgeableReason;                       //@synthesize purgeableReason=_purgeableReason - In the implementation block
@property (assign,nonatomic) long long staticDiskUsage;                      //@synthesize staticDiskUsage=_staticDiskUsage - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemID;                           //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp;              //@synthesize systemApp=_systemApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)staticDiskUsage;
-(BOOL)isSystemApp;
-(NSString *)bundleID;
-(NSNumber *)storeItemID;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setSystemApp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)purgeableReason;
-(void)setPurgeableReason:(NSString *)arg1 ;
-(void)setStaticDiskUsage:(long long)arg1 ;
-(id)diagnosticDescription;
@end

