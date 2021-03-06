/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, UIPDFPageView;

@interface UIPDFPlacementController : NSObject {

	NSMutableArray* _popups;
	CGSize _viewSize;
	UIPDFPageView* pageView;

}

@property (assign,nonatomic) UIPDFPageView * pageView; 
-(UIPDFPageView *)pageView;
-(id)viewAtIndex:(unsigned long long)arg1 ;
-(void)shift:(double)arg1 ;
-(void)dealloc;
-(void)setPageView:(UIPDFPageView *)arg1 ;
-(id)initWithAnnotations:(id)arg1 viewSize:(CGSize)arg2 ;
-(void)layoutViews:(double)arg1 ;
-(CGRect)boundsForObjectAtIndex:(unsigned long long)arg1 ;
-(double)yForObjectAtIndex:(unsigned long long)arg1 ;
@end

