/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface PKTextInputDebugTargetsView : UIView {

	double _dashLinePhase;
	NSArray* _visualizationElements;

}

@property (nonatomic,copy) NSArray * visualizationElements;              //@synthesize visualizationElements=_visualizationElements - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSArray *)visualizationElements;
-(void)setVisualizationElements:(NSArray *)arg1 ;
@end

