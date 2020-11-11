/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString;

@interface CoreDAVDeleteTask : CoreDAVActionBackedTask {

	NSString* _previousETag;

}

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                              //@synthesize previousETag=_previousETag - In the implementation block
-(id)requestBody;
-(id)description;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)additionalHeaderValues;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSString *)previousETag;
@end
