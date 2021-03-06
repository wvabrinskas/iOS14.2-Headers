/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SSVPlatformRequestOperation, SKUIItemResourceRequest;

@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation {

	SSVPlatformRequestOperation* _underlyingOperation;

}

@property (__weak) SSVPlatformRequestOperation * underlyingOperation;              //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
@property (copy,readonly) SKUIItemResourceRequest * resourceRequest; 
-(void)main;
-(void)setUnderlyingOperation:(SSVPlatformRequestOperation *)arg1 ;
-(SSVPlatformRequestOperation *)underlyingOperation;
-(void)cancel;
-(id)initWithResourceRequest:(id)arg1 ;
@end

