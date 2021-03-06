/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSString;

@interface _EntitlementCheckResult : NSObject {

	BOOL _entitled;
	NSError* _error;
	NSString* _group;
	NSString* _entitlement;

}

@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * group;                               //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * entitlement;                         //@synthesize entitlement=_entitlement - In the implementation block
@property (assign,getter=isEntitled,nonatomic) BOOL entitled;              //@synthesize entitled=_entitled - In the implementation block
-(void)setEntitled:(BOOL)arg1 ;
-(void)setGroup:(NSString *)arg1 ;
-(BOOL)isEntitled;
-(NSError *)error;
-(NSString *)entitlement;
-(id)initWithEntitlement:(id)arg1 group:(id)arg2 ;
-(void)setError:(NSError *)arg1 ;
-(void)setEntitlement:(NSString *)arg1 ;
-(NSString *)group;
@end

