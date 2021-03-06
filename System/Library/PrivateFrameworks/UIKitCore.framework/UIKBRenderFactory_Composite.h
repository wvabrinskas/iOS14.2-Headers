/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBRenderFactoryiPhone.h>

@class UIKBRenderFactory;

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {

	UIKBRenderFactory* _overlayFactory;

}
-(CGPoint)popupSymbolTextOffset;
-(UIEdgeInsets)variantSymbolFrameInsets;
-(UIEdgeInsets)variantPaddedFrameInsets;
-(id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2 ;
-(double)popupFontSize;
-(UIEdgeInsets)wideShadowPaddleInsets;
-(UIEdgeInsets)wideShadowPopupMenuInsets;
-(Class)_overlayFactoryClass;
-(BOOL)isTallPopup;
-(CGPoint)variantSymbolTextOffset;
-(CGPoint)variantAnnotationTextOffset;
-(void)dealloc;
@end

