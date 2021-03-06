/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

@interface PDFPageLayerEffect : CALayer {

	PDFPageLayerEffectPrivate* _private;

}
+(id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3 ;
+(id)createPDFSelectionLayerEffectsForSelections:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2 ;
+(id)createPDFCoachmarkLayerEffectsWithFrame:(CGRect)arg1 withLayer:(id)arg2 ;
+(id)createPDFNoteLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2 ;
-(void)update;
-(id)UUID;
-(void)updateColor:(unsigned long long)arg1 ;
-(id)annotation;
-(void)addSelection:(id)arg1 ;
-(CGRect)pageFrame;
-(BOOL)shouldRotateContent;
-(void)setSelections:(id)arg1 ;
-(id)pdfResult;
-(id)initWithPDFPageLayer:(id)arg1 ;
-(void)setPageFrame:(CGRect)arg1 ;
@end

