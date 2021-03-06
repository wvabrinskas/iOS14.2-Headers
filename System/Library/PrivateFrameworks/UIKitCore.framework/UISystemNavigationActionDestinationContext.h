/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString, NSURL;

@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding> {

	NSString* _title;
	NSString* _bundleId;
	NSURL* _URL;
	NSString* _sceneIdentifier;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * sceneIdentifier;              //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)systemNavigationActionContextWithURL:(id)arg1 ;
+(id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2 ;
+(id)systemNavigationActionContextWithTitle:(id)arg1 bundleId:(id)arg2 ;
+(id)systemNavigationActionContextWithTitle:(id)arg1 sceneIdentifier:(id)arg2 ;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(NSString *)sceneIdentifier;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)debugDescription;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)title;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)URL;
@end

