/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsCore/TPSSerializableObject.h>

@class NSString;

@interface TPSInstalledAppInfo : TPSSerializableObject {

	NSString* _bundleID;
	NSString* _minVersion;
	NSString* _maxVersion;

}

@property (nonatomic,copy) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * minVersion;              //@synthesize minVersion=_minVersion - In the implementation block
@property (nonatomic,copy) NSString * maxVersion;              //@synthesize maxVersion=_maxVersion - In the implementation block
-(NSString *)bundleID;
-(void)setMinVersion:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)minVersion;
-(void)setMaxVersion:(NSString *)arg1 ;
-(NSString *)maxVersion;
@end

