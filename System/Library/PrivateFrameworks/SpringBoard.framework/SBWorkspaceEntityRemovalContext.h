/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SBWorkspaceEntityRemovalContext : NSObject {

	unsigned long long _animationStyle;
	unsigned long long _removalActionType;

}

@property (nonatomic,readonly) unsigned long long animationStyle;                 //@synthesize animationStyle=_animationStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long removalActionType;              //@synthesize removalActionType=_removalActionType - In the implementation block
-(unsigned long long)animationStyle;
-(id)initWithAnimationStyle:(unsigned long long)arg1 removalActionType:(unsigned long long)arg2 ;
-(unsigned long long)removalActionType;
@end
