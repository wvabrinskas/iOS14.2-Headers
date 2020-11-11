/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface CRKSetAirPlayRouteRequest : CATTaskRequest {

	BOOL _suppressPasscodePrompt;
	NSString* _routeUID;
	NSString* _password;

}

@property (nonatomic,copy) NSString * routeUID;                        //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL suppressPasscodePrompt;              //@synthesize suppressPasscodePrompt=_suppressPasscodePrompt - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRouteUID:(NSString *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)routeUID;
-(BOOL)suppressPasscodePrompt;
-(void)setSuppressPasscodePrompt:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
