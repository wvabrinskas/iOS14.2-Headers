/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMCoreLite/FMPromise.h>

@class FMFuture, NSString;

@interface FMPromise : NSObject <FMPromise> {

	FMFuture* _future;

}

@property (readonly) FMFuture * future;                             //@synthesize future=_future - In the implementation block
@property (nonatomic,copy) NSString * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDescriptor:(NSString *)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)init;
-(NSString *)descriptor;
-(BOOL)finishWithNoResult;
-(BOOL)finishWithResult:(id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(id)initWithFuture:(id)arg1 ;
-(FMFuture *)future;
@end

