/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPDOctagonTrustProxy.h>

@class CDPContext, NSString;

@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy> {

	CDPContext* _cdpContext;

}

@property (nonatomic,retain) CDPContext * cdpContext;               //@synthesize cdpContext=_cdpContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CDPContext *)cdpContext;
-(id)initWithContext:(id)arg1 ;
-(void)setCdpContext:(CDPContext *)arg1 ;
-(id)fetchEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3 ;
-(id)fetchAllEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3 ;
@end
