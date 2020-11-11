/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKTextInputElementsFinder.h>

@class PKTextInputElement, NSSet;

@interface PKTextInputSingleElementFinder : PKTextInputElementsFinder {

	BOOL _finished;
	PKTextInputElement* _foundElement;
	NSSet* _candidateElements;

}

@property (nonatomic,readonly) PKTextInputElement * foundElement;              //@synthesize foundElement=_foundElement - In the implementation block
@property (nonatomic,readonly) NSSet * candidateElements;                      //@synthesize candidateElements=_candidateElements - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                //@synthesize finished=_finished - In the implementation block
-(BOOL)isFinished;
-(void)_finishSingleElementSearchIfReadyAtPosition:(CGPoint)arg1 coordinateSpace:(id)arg2 candidates:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)findSingleElementCloseToPosition:(CGPoint)arg1 coordinateSpace:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKTextInputElement *)foundElement;
-(NSSet *)candidateElements;
@end
