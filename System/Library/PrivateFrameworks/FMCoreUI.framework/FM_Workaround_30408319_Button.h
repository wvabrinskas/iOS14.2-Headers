/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint;

@interface FM_Workaround_30408319_Button : UIButton {

	NSLayoutConstraint* _fm_workaround_height_constraint;

}

@property (nonatomic,retain) NSLayoutConstraint * fm_workaround_height_constraint;              //@synthesize fm_workaround_height_constraint=_fm_workaround_height_constraint - In the implementation block
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)updateConstraints;
-(NSLayoutConstraint *)fm_workaround_height_constraint;
-(void)setFm_workaround_height_constraint:(NSLayoutConstraint *)arg1 ;
@end

