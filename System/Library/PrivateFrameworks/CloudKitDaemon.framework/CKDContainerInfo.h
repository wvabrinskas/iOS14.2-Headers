/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _publicCloudDBURL;
	NSURL* _publicShareServiceURL;
	NSURL* _publicDeviceServiceURL;
	NSURL* _publicCodeServiceURL;
	NSURL* _publicMetricsServiceURL;
	NSString* _containerScopedUserID;
	NSString* _orgAdminUserID;
	long long _environment;

}

@property (nonatomic,copy) NSURL * publicCloudDBURL;                      //@synthesize publicCloudDBURL=_publicCloudDBURL - In the implementation block
@property (nonatomic,copy) NSURL * publicShareServiceURL;                 //@synthesize publicShareServiceURL=_publicShareServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicDeviceServiceURL;                //@synthesize publicDeviceServiceURL=_publicDeviceServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicCodeServiceURL;                  //@synthesize publicCodeServiceURL=_publicCodeServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicMetricsServiceURL;               //@synthesize publicMetricsServiceURL=_publicMetricsServiceURL - In the implementation block
@property (nonatomic,copy) NSString * containerScopedUserID;              //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
@property (nonatomic,copy) NSString * orgAdminUserID;                     //@synthesize orgAdminUserID=_orgAdminUserID - In the implementation block
@property (assign,nonatomic) long long environment;                       //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPublicShareServiceURL:(NSURL *)arg1 ;
-(NSURL *)publicDeviceServiceURL;
-(id)CKPropertiesDescription;
-(void)setEnvironment:(long long)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(NSURL *)publicMetricsServiceURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)containerScopedUserID;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)publicCloudDBURL;
-(void)setPublicMetricsServiceURL:(NSURL *)arg1 ;
-(long long)environment;
-(void)setOrgAdminUserID:(NSString *)arg1 ;
-(NSString *)orgAdminUserID;
-(void)setPublicDeviceServiceURL:(NSURL *)arg1 ;
-(void)setPublicCloudDBURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)publicCodeServiceURL;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
-(void)setPublicCodeServiceURL:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)publicShareServiceURL;
@end
