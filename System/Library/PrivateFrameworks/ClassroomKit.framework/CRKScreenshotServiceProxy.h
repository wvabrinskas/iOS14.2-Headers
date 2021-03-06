/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKScreenshotServiceInterface.h>

@class CRKValidXPCConnectionProvider;

@interface CRKScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface> {

	CRKValidXPCConnectionProvider* _connectionProvider;

}

@property (nonatomic,readonly) CRKValidXPCConnectionProvider * connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
-(id)init;
-(CRKValidXPCConnectionProvider *)connectionProvider;
-(void)_fetchScreenshotDataWithMaximumSizeInPixels:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchScreenshotDataWithMaximumSizeInPixels:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
@end

