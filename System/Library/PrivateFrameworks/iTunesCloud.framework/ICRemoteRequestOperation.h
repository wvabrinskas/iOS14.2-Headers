/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRequestOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@interface ICRemoteRequestOperation : ICRequestOperation <NSSecureCoding> {

	BOOL __shadowOperationForRemoteExecution;
	id<NSSecureCoding> _response;

}

@property (assign,setter=_setShadowOperationForRemoteExecution:,getter=_isShadowOperationForRemoteExecution,nonatomic) BOOL _shadowOperationForRemoteExecution;              //@synthesize _shadowOperationForRemoteExecution=__shadowOperationForRemoteExecution - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding> response;                                                                                                                    //@synthesize response=_response - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_execute;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResponse:(id<NSSecureCoding>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isShadowOperationForRemoteExecution;
-(void)_setShadowOperationForRemoteExecution:(BOOL)arg1 ;
-(id<NSSecureCoding>)response;
@end

