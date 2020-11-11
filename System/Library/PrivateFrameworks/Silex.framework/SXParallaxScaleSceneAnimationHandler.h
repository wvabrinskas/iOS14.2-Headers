/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXSceneComponentAnimationHandler.h>

@class SXContainerComponentView;

@interface SXParallaxScaleSceneAnimationHandler : SXSceneComponentAnimationHandler {

	SXContainerComponentView* _headerComponent;
	unsigned long long _attachmentType;

}

@property (assign,nonatomic,__weak) SXContainerComponentView * headerComponent;              //@synthesize headerComponent=_headerComponent - In the implementation block
@property (assign,nonatomic) unsigned long long attachmentType;                              //@synthesize attachmentType=_attachmentType - In the implementation block
-(void)setAttachmentType:(unsigned long long)arg1 ;
-(unsigned long long)attachmentType;
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(BOOL)shouldFinishAtEndOfScrollView;
-(double)factorForVisibileBounds:(CGRect)arg1 andAbsoluteComponentRect:(CGRect)arg2 ;
-(void)setHeaderComponent:(SXContainerComponentView *)arg1 ;
-(void)ensureScalabilityOfHeaderComponentFill;
-(SXContainerComponentView *)headerComponent;
-(CGRect)fillContentFrameForScale:(double)arg1 andTranslation:(double)arg2 ;
@end
