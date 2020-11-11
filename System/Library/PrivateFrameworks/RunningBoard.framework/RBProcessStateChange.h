/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RBSProcessIdentity, RBProcessState;

@interface RBProcessStateChange : NSObject {

	RBSProcessIdentity* _identity;
	RBProcessState* _originalState;
	RBProcessState* _updatedState;

}

@property (nonatomic,readonly) RBSProcessIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) RBProcessState * originalState;              //@synthesize originalState=_originalState - In the implementation block
@property (nonatomic,readonly) RBProcessState * updatedState;               //@synthesize updatedState=_updatedState - In the implementation block
-(RBProcessState *)originalState;
-(RBSProcessIdentity *)identity;
-(id)changeByApplyingChange:(id)arg1 ;
-(id)initWithIdentity:(id)arg1 originalState:(id)arg2 updatedState:(id)arg3 ;
-(RBProcessState *)updatedState;
@end
