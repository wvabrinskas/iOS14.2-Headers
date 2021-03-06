/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageCGImageContent.h>

@class CUINamedVectorImage;

@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent {

	CUINamedVectorImage* _vectorImage;
	SCD_Struct_UI36 coreFlags;

}
-(CGPDFPageRef)CGPDFPage;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(unsigned long long)hash;
-(CGImageRef)_CGImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(BOOL)_canProvideCGImageDirectly;
-(id)contentWithCGImage:(CGImageRef)arg1 ;
-(BOOL)isCGPDFPage;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isCGSVGDocument;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(double)vectorScale;
-(id)initWithCGImage:(CGImageRef)arg1 CUIVectorImage:(id)arg2 scale:(double)arg3 ;
-(CGSVGDocumentRef)CGSVGDocument;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
@end

