/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject, NSMutableArray;

@interface FigNSURLSessionRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _sessionArray;

}
-(id)init;
-(void)_checkForDoom:(id)arg1 ;
-(void)copySessionAndAssertionForClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2 outSession:(id*)arg3 outAssertion:(FigOpaqueAssertion*)arg4 ;
-(void)releaseSession:(id)arg1 ;
-(void)dealloc;
@end
