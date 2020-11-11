/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class NSString;

@interface _BPSMapInner : NSObject <BPSSubscriber> {

	id<BPSSubscriber> _downstream;
	/*^block*/id _transform;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,copy) id transform;                                //@synthesize transform=_transform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(void)setTransform:(id)arg1 ;
-(id)transform;
-(void)receiveSubscription:(id)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)receiveCompletion:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 transform:(/*^block*/id)arg2 ;
@end
