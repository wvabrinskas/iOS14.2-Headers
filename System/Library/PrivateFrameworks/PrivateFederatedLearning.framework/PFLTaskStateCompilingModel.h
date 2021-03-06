/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSURL;

@interface PFLTaskStateCompilingModel : NSObject <PFLTaskState> {

	NSURL* _modelURL;

}

@property (nonatomic,readonly) NSURL * modelURL;              //@synthesize modelURL=_modelURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)suspend;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)modelURL;
-(unsigned long long)tag;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithModelURL:(id)arg1 ;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

