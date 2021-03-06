/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, UITextRange, NSAttributedString;


@protocol UITextDraggableGeometrySameViewDropOperation <NSObject>
@property (nonatomic,readonly) NSArray * sourceRanges; 
@property (nonatomic,readonly) UITextRange * targetRange; 
@property (nonatomic,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) unsigned long long operation; 
@required
-(NSAttributedString *)text;
-(UITextRange *)targetRange;
-(unsigned long long)operation;
-(NSArray *)sourceRanges;

@end

