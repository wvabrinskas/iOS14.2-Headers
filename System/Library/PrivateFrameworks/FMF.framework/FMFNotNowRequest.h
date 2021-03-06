/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FMFHandle, NSSet, NSString;

@interface FMFNotNowRequest : NSObject <NSCopying, NSSecureCoding> {

	FMFHandle* _fromHandle;
	NSSet* _toHandles;
	NSString* _requestId;

}

@property (nonatomic,retain) NSString * requestId;                //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) FMFHandle * fromHandle;              //@synthesize fromHandle=_fromHandle - In the implementation block
@property (nonatomic,retain) NSSet * toHandles;                   //@synthesize toHandles=_toHandles - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)notNowRequestToHandles:(id)arg1 fromHandle:(id)arg2 ;
-(NSString *)requestId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequestId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FMFHandle *)fromHandle;
-(void)setFromHandle:(FMFHandle *)arg1 ;
-(void)setToHandles:(NSSet *)arg1 ;
-(NSSet *)toHandles;
-(id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 requestId:(id)arg3 ;
@end

