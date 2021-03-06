/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ATMessageLink.h>
@class NSString;


@protocol ATMessageLink <NSObject>
@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(int)endpointType;
-(BOOL)isInitialized;
-(void)removeObserver:(id)arg1;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)isOpen;
-(NSString *)identifier;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addObserver:(id)arg1;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
-(void)removeRequestHandlerForDataClass:(id)arg1;
-(void)sendResponse:(id)arg1 withProgress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;

@end


@class NSString;

@interface ATMessageLink : NSObject <ATMessageLink>

@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)endpointType;
-(BOOL)isInitialized;
-(void)removeObserver:(id)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)isOpen;
-(NSString *)identifier;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
-(void)sendResponse:(id)arg1 withProgress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

