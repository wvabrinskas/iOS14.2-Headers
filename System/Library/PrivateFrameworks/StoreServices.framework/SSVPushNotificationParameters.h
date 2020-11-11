/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface SSVPushNotificationParameters : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _environmentName;
	NSMutableDictionary* _parameterDictionary;
	long long _requestType;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy) NSArray * mediaKinds; 
@property (nonatomic,copy) NSString * notificationType; 
@property (nonatomic,copy) NSDictionary * putParameters; 
@property (assign,nonatomic) long long requestType;                   //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)environmentName;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setNotificationType:(NSString *)arg1 ;
-(void)setRequestType:(long long)arg1 ;
-(NSNumber *)accountIdentifier;
-(id)copyXPCEncoding;
-(id)init;
-(NSString *)notificationType;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(long long)requestType;
-(NSArray *)mediaKinds;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(void)setMediaKinds:(NSArray *)arg1 ;
-(id)_copyParametersDictionary;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(id)valueForParameter:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)putParameters;
-(void)setPutParameters:(NSDictionary *)arg1 ;
@end
