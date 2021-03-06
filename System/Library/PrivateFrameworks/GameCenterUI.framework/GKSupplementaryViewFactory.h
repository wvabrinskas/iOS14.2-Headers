/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GKSupplementaryViewFactory : NSObject {

	id _target;
	Class _reusableViewClass;
	SEL _configurator;
	SEL _selector;

}

@property (assign,nonatomic,__weak) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                         //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) Class reusableViewClass;              //@synthesize reusableViewClass=_reusableViewClass - In the implementation block
@property (nonatomic,readonly) SEL configurator;                   //@synthesize configurator=_configurator - In the implementation block
+(id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 ;
+(id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(SEL)configurator;
-(void)setReusableViewClass:(Class)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)initWithClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4 ;
-(SEL)selector;
-(Class)reusableViewClass;
@end

