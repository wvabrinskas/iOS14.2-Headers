/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _UIStatusBarDisplayItemPlacementGroup : NSObject {

	NSArray* _placements;
	long long _minimumPriority;
	long long _maximumPriority;

}

@property (nonatomic,copy) NSArray * placements;                       //@synthesize placements=_placements - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) long long minimumPriority;              //@synthesize minimumPriority=_minimumPriority - In the implementation block
@property (nonatomic,readonly) long long maximumPriority;              //@synthesize maximumPriority=_maximumPriority - In the implementation block
+(id)groupWithPriority:(long long)arg1 placements:(id)arg2 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSArray *)placements;
-(void)setPlacements:(NSArray *)arg1 ;
-(long long)minimumPriority;
-(long long)maximumPriority;
@end

