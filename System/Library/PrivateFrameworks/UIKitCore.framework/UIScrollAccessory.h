/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIScrollView;


@protocol UIScrollAccessory
@property (assign,nonatomic,__weak) UIScrollView * scrollView; 
@property (assign,nonatomic) long long edge; 
@property (nonatomic,readonly) BOOL overlay; 
@required
-(BOOL)overlay;
-(void)setEdge:(long long)arg1;
-(long long)edge;
-(UIScrollView *)scrollView;
-(void)update;
-(void)setScrollView:(id)arg1;

@end
