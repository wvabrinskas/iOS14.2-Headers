/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject, SSMetricsPageEvent, NSURLRequest;

@interface SKUILoadProductPageOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _itemID;
	SSMetricsPageEvent* _metricsPageEvent;
	/*^block*/id _outputBlock;
	NSURLRequest* _urlRequest;

}

@property (copy) id outputBlock; 
@property (readonly) SSMetricsPageEvent * metricsPageEvent; 
-(void)setOutputBlock:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(SSMetricsPageEvent *)metricsPageEvent;
-(id)initWithItemIdentifier:(long long)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageURLRequest:(id)arg1 clientContext:(id)arg2 ;
-(id)_initSKUILoadProductPageOperation;
@end

