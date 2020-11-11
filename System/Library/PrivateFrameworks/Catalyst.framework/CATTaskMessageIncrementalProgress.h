/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskMessage.h>

@interface CATTaskMessageIncrementalProgress : CATTaskMessage {

	long long _completedUnitCount;
	long long _totalUnitCount;

}

@property (assign,nonatomic) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign,nonatomic) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTotalUnitCount:(long long)arg1 ;
-(long long)completedUnitCount;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)totalUnitCount;
-(id)initWithTaskUUID:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end
