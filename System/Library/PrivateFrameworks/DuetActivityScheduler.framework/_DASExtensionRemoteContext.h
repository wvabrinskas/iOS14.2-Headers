/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_DASRemoteExtensionContextProtocol.h>

@protocol OS_os_log;
@class NSObject, _DASExtension, NSString;

@interface _DASExtensionRemoteContext : NSExtensionContext <_DASRemoteExtensionContextProtocol> {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
@property (readonly) _DASExtension * extension; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
+(id)extensionRunnerClassWhitelist;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)init;
-(void)suspend;
-(NSObject*<OS_os_log>)log;
-(id)hostContextWithError:(id*)arg1 ;
-(void)performActivity:(id)arg1 ;
-(_DASExtension *)extension;
-(id)createExtensionRunnerWithClassName:(id)arg1 ;
@end
