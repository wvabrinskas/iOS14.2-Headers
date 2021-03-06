/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIMenuSystem;


@protocol UIMenuBuilder
@property (nonatomic,readonly) UIMenuSystem * system; 
@required
-(void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(/*^block*/id)arg2;
-(id)commandForAction:(SEL)arg1 propertyList:(id)arg2;
-(void)removeMenuForIdentifier:(id)arg1;
-(void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2;
-(id)actionForIdentifier:(id)arg1;
-(id)menuForIdentifier:(id)arg1;
-(void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2;
-(void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2;
-(void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2;
-(void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2;
-(UIMenuSystem *)system;

@end

