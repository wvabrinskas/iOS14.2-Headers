/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewInProcessAnimationState.h>

@class _UICompoundObjectMap;

@interface UIViewPropertyCollectingAnimationState : UIViewInProcessAnimationState {

	_UICompoundObjectMap* _capturedProperties;

}

@property (nonatomic,retain) _UICompoundObjectMap * capturedProperties;              //@synthesize capturedProperties=_capturedProperties - In the implementation block
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(id)init;
-(void)setCapturedProperties:(_UICompoundObjectMap *)arg1 ;
-(_UICompoundObjectMap *)capturedProperties;
@end

