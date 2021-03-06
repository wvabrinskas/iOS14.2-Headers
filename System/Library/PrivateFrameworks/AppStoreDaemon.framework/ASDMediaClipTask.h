/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class NSString, AMSProcessInfo, NSNumber;

@interface ASDMediaClipTask : AMSTask <AMSBagConsumer> {

	id<AMSBagProtocol> _bag;
	NSString* _clientID;
	NSString* _logKey;
	unsigned long long _signpostID;
	NSString* _bundleID;
	AMSProcessInfo* _clientInfo;
	NSNumber* _externalVersionID;

}

@property (nonatomic,retain) NSNumber * externalVersionID;              //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;               //@synthesize clientInfo=_clientInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createBagForSubProfile;
+(id)bagSubProfile;
+(id)bagKeySet;
+(id)bagSubProfileVersion;
-(id)perform;
-(NSString *)bundleID;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setBundleID:(NSString *)arg1 ;
-(NSNumber *)externalVersionID;
-(id)_componentsPromise;
-(id)initWithClientID:(id)arg1 bag:(id)arg2 ;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
@end

