/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIRotationGestureRecognizer.h>

@class AKController;

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer {

	unsigned long long tries;
	AKController* _annotationController;

}

@property (assign,nonatomic,__weak) AKController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
-(void)setState:(long long)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(AKController *)annotationController;
-(void)setAnnotationController:(AKController *)arg1 ;
@end
