/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNManipulableItem.h>

@interface SCNNodeManipulableItem : SCNManipulableItem
+(void)removeItemsFromScene:(id)arg1 ;
+(void)addItems:(id)arg1 toScene:(id)arg2 ;
+(id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2 ;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(SCNMatrix4)transform;
-(void)setPosition:(SCNVector3)arg1 ;
-(SCNVector3)scale;
-(id)parentItem;
-(SCNMatrix4)worldTransform;
-(void)setWorldTransform:(SCNMatrix4)arg1 ;
-(void)validateClone;
-(id)cloneForManipulators;
-(BOOL)isNodeManipulator;
@end
