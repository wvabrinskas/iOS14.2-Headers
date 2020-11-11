/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIIdentifierDiffer, _UIDiffableDataSourceState;
@class NSSet;

@interface _UIDiffableSectionBoundaryMoveDetector : NSObject {

	id<_UIIdentifierDiffer> _differ;
	id<_UIDiffableDataSourceState> _beforeState;
	id<_UIDiffableDataSourceState> _afterState;
	NSSet* _movePairs;
	BOOL _didShortCircuit;

}

@property (nonatomic,readonly) NSSet * movePairs;                 //@synthesize movePairs=_movePairs - In the implementation block
@property (nonatomic,readonly) BOOL didShortCircuit;              //@synthesize didShortCircuit=_didShortCircuit - In the implementation block
-(id)initWithItemDiffer:(id)arg1 beforeDataSourceState:(id)arg2 afterDataSourceState:(id)arg3 ;
-(NSSet *)movePairs;
-(id)_computeMovePairsFoundation;
-(id)_computeMovePairsSTL;
-(BOOL)didShortCircuit;
@end
