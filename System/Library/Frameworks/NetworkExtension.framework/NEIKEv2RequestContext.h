/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NEIKEv2RequestContext : NSObject {

	BOOL _requestInitiator;
	int _requestType;

}

@property (assign,nonatomic) int requestType;                    //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) BOOL requestInitiator;              //@synthesize requestInitiator=_requestInitiator - In the implementation block
-(void)setRequestType:(int)arg1 ;
-(id)initWithRequestType:(int)arg1 ;
-(void)setRequestInitiator:(BOOL)arg1 ;
-(BOOL)requestInitiator;
-(int)requestType;
-(id)description;
-(void)sendCallbackSuccess:(BOOL)arg1 session:(id)arg2 ;
@end

