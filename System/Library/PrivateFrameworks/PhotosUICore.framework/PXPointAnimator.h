/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutablePointAnimator.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXNumberAnimatorDisplayLinkTarget.h>

@protocol PXMutableNumberAnimator;
@class PXNumberAnimator, NSString;

@interface PXPointAnimator : PXObservable <PXMutablePointAnimator, PXChangeObserver, PXNumberAnimatorDisplayLinkTarget> {

	PXNumberAnimator*<PXMutableNumberAnimator> _xAnimator;
	PXNumberAnimator*<PXMutableNumberAnimator> _yAnimator;
	BOOL _isAnimating;
	NSString* _label;
	CGPoint _value;
	CGPoint _presentationValue;

}

@property (assign,nonatomic) BOOL isAnimating;                                                    //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) CGPoint presentationValue;                                           //@synthesize presentationValue=_presentationValue - In the implementation block
@property (nonatomic,readonly) CGPoint value;                                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double epsilon; 
@property (nonatomic,copy) NSString * label;                                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PXNumberAnimator*<PXMutableNumberAnimator> xAnimator; 
@property (nonatomic,readonly) PXNumberAnimator*<PXMutableNumberAnimator> yAnimator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPresentationValue:(CGPoint)arg1 ;
-(NSString *)label;
-(id)init;
-(void)_handleDisplayLink:(id)arg1 ;
-(id)initWithValue:(CGPoint)arg1 ;
-(void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(CGPoint)arg3 changes:(/*^block*/id)arg4 ;
-(CGPoint)presentationValue;
-(id)initWithValue:(CGPoint)arg1 epsilon:(double)arg2 ;
-(void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(CGPoint)arg1 changes:(/*^block*/id)arg2 ;
-(NSString *)description;
-(void)performChangesWithoutAnimation:(/*^block*/id)arg1 ;
-(double)epsilon;
-(void)_setInternalValue:(CGPoint)arg1 ;
-(void)setIsAnimating:(BOOL)arg1 ;
-(id)mutableChangeObject;
-(void)didPerformChanges;
-(CGPoint)value;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)isAnimating;
-(CGPoint)approximateVelocity;
-(void)setValue:(CGPoint)arg1 ;
-(void)performChangesWithDuration:(double)arg1 curve:(long long)arg2 changes:(/*^block*/id)arg3 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_update;
-(PXNumberAnimator*<PXMutableNumberAnimator>)yAnimator;
-(PXNumberAnimator*<PXMutableNumberAnimator>)xAnimator;
@end

