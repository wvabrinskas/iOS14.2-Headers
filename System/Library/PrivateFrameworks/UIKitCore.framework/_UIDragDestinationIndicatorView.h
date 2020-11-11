/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIDragDestinationIndicatorView : UIView {

	BOOL _isSourceList;
	double _scaleFactor;

}

@property (assign,nonatomic) BOOL isSourceList;                 //@synthesize isSourceList=_isSourceList - In the implementation block
@property (nonatomic,readonly) double scaleFactor;              //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(double)scaleFactor;
-(BOOL)isSourceList;
-(void)positionOnCellFrame:(CGRect)arg1 above:(BOOL)arg2 ;
-(void)setIsSourceList:(BOOL)arg1 ;
-(id)initWithSourceListStyle:(BOOL)arg1 ;
-(void)positionVerticallyCenteredInFrame:(CGRect)arg1 ;
-(void)positionHorizontallyCenteredInFrame:(CGRect)arg1 ;
@end
