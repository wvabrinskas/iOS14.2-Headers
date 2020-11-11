/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXImageViewFactory.h>

@protocol SXImageViewFactory <NSObject>
@required
-(id)imageViewForResource:(id)arg1;
-(id)repeatableImageViewForResource:(id)arg1;

@end


@protocol SXResourceDataSourceProvider, SWReachabilityProvider;
@class NSString;

@interface SXImageViewFactory : NSObject <SXImageViewFactory> {

	id<SXResourceDataSourceProvider> _resourceDataSourceProvider;
	id<SWReachabilityProvider> _reachabilityProvider;

}

@property (nonatomic,readonly) id<SXResourceDataSourceProvider> resourceDataSourceProvider;              //@synthesize resourceDataSourceProvider=_resourceDataSourceProvider - In the implementation block
@property (nonatomic,readonly) id<SWReachabilityProvider> reachabilityProvider;                          //@synthesize reachabilityProvider=_reachabilityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageViewForResource:(id)arg1 ;
-(id)repeatableImageViewForResource:(id)arg1 ;
-(id)initWithResourceDataSourceProvider:(id)arg1 reachabilityProvider:(id)arg2 ;
-(id<SWReachabilityProvider>)reachabilityProvider;
-(id<SXResourceDataSourceProvider>)resourceDataSourceProvider;
@end
