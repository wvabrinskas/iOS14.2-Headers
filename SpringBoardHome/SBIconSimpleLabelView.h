//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <SpringBoardHome/SBIconLabelView-Protocol.h>

@class SBIconLabelImageParameters, SBIconView, UIImage;

@interface SBIconSimpleLabelView : UIImageView <SBIconLabelView>
{
    SBIconView *_iconView;
}


// Remaining properties
@property(nonatomic) __weak SBIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) SBIconLabelImageParameters *imageParameters;
@end
