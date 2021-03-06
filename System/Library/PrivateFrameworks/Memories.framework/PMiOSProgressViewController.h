/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString, UILabel, PMRoundProgressView, NSLayoutConstraint, UIButton;

@interface PMiOSProgressViewController : UIViewController <UIGestureRecognizerDelegate> {

	BOOL _showCancelButton;
	NSString* _stageDescription;
	unsigned long long _cancelStyle;
	UILabel* _label;
	UILabel* _stageLabel;
	PMRoundProgressView* _progressView;
	NSLayoutConstraint* _verticalProgressLabelSpace;
	NSLayoutConstraint* _verticalCenteredLabel;
	NSLayoutConstraint* _horizontalCenteredLabel;
	NSLayoutConstraint* _nonCompactRoundProgressCenterY;
	NSLayoutConstraint* _cancelButtonTopConstraint;
	NSLayoutConstraint* _cancelButtonLeadingConstraint;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UILabel * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * stageLabel;                                             //@synthesize stageLabel=_stageLabel - In the implementation block
@property (nonatomic,retain) PMRoundProgressView * progressView;                               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalProgressLabelSpace;                  //@synthesize verticalProgressLabelSpace=_verticalProgressLabelSpace - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalCenteredLabel;                       //@synthesize verticalCenteredLabel=_verticalCenteredLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * horizontalCenteredLabel;                     //@synthesize horizontalCenteredLabel=_horizontalCenteredLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonCompactRoundProgressCenterY;              //@synthesize nonCompactRoundProgressCenterY=_nonCompactRoundProgressCenterY - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cancelButtonTopConstraint;                   //@synthesize cancelButtonTopConstraint=_cancelButtonTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cancelButtonLeadingConstraint;               //@synthesize cancelButtonLeadingConstraint=_cancelButtonLeadingConstraint - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * stageDescription;                                        //@synthesize stageDescription=_stageDescription - In the implementation block
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) BOOL showCancelButton;                                            //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (assign,nonatomic) unsigned long long cancelStyle;                                   //@synthesize cancelStyle=_cancelStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UILabel *)label;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)showCancelButton;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setProgressView:(PMRoundProgressView *)arg1 ;
-(float)progress;
-(NSString *)description;
-(void)viewDidLoad;
-(PMRoundProgressView *)progressView;
-(void)setLabel:(UILabel *)arg1 ;
-(void)loadView;
-(void)setProgress:(float)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)setCancelTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setVerticalProgressLabelSpace:(NSLayoutConstraint *)arg1 ;
-(void)setVerticalCenteredLabel:(NSLayoutConstraint *)arg1 ;
-(void)setHorizontalCenteredLabel:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)verticalProgressLabelSpace;
-(NSLayoutConstraint *)horizontalCenteredLabel;
-(void)setStageLabel:(UILabel *)arg1 ;
-(UILabel *)stageLabel;
-(void)attachCancelButton;
-(void)updateLayoutWithTraitCollection:(id)arg1 ;
-(NSLayoutConstraint *)nonCompactRoundProgressCenterY;
-(NSLayoutConstraint *)cancelButtonTopConstraint;
-(NSLayoutConstraint *)cancelButtonLeadingConstraint;
-(unsigned long long)cancelStyle;
-(void)setCancelButtonTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCancelButtonLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStageDescription:(NSString *)arg1 ;
-(void)setCancelStyle:(unsigned long long)arg1 ;
-(NSString *)stageDescription;
-(NSLayoutConstraint *)verticalCenteredLabel;
-(void)setNonCompactRoundProgressCenterY:(NSLayoutConstraint *)arg1 ;
@end

