/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAKOverlayAdaptor.h>

@class PDFAKOverlayAdaptorPrivate_ios;

@interface PDFAKOverlayAdaptor_ios : PDFAKOverlayAdaptor {

	PDFAKOverlayAdaptorPrivate_ios* _privateIOS;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dealloc;
-(id)initWithPDFView:(id)arg1 ;
-(void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2 ;
-(void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2 ;
-(void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_uninstallOverlayAtIndex:(unsigned long long)arg1 ;
-(void)_resetAnimationProperties;
-(void)annotationWillBeginEditing:(id)arg1 ;
-(void)annotationDidEndEditing:(id)arg1 ;
-(void)adjustScrollViewForKeyboardNotification:(id)arg1 ;
-(void)updatePDFScrollViewMinimumNumberOfTouches;
-(void)_setupGestureRecognizersForPageAtIndex:(unsigned long long)arg1 ;
-(void)_teardownGestureRecognizersForPageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_scrollViewMinimumNumberOfTouches;
-(id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)arg1 ;
-(void)_adjustScrollViewWithAnimationProperties:(SCD_Struct_PD21)arg1 delta:(double)arg2 ;
-(unsigned long long)pageIndexForAnnotation:(id)arg1 ;
-(void)addDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 ;
-(void)removeDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 ;
-(void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(BOOL)arg3 ;
@end

