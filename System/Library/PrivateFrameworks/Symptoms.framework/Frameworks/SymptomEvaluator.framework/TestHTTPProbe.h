/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/TestProbe.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSURLSessionDataTask, NSURL, NSString;

@interface TestHTTPProbe : TestProbe <NSURLSessionDelegate> {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _urlSessionTask;
	NSURL* _urlToTest;

}

@property (nonatomic,retain) NSURL * urlToTest;                     //@synthesize urlToTest=_urlToTest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)stopTest;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)urlToTest;
-(void)testURL:(id)arg1 timeout:(double)arg2 interfaceName:(id)arg3 userAgent:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)setUrlToTest:(NSURL *)arg1 ;
@end

