/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_MKAnimationStackViewDelegate.h>
#import <libobjc.A.dylib/MKPlaceSectionViewDelegate.h>

@class MKPlaceSectionView, NSString;

@interface MKPlaceSectionViewController : UIViewController <_MKAnimationStackViewDelegate, MKPlaceSectionViewDelegate> {

	MKPlaceSectionView* _sectionView;

}

@property (nonatomic,readonly) MKPlaceSectionView * sectionView;              //@synthesize sectionView=_sectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stackViewNeedsLayout:(id)arg1 ;
-(void)sectionView:(id)arg1 didSelectHeader:(id)arg2 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)sectionView:(id)arg1 didSelectFooter:(id)arg2 ;
-(void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(MKPlaceSectionView *)sectionView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_viewHostsLayoutEngineAllowsTAMIC_NO;
-(void)loadView;
-(void)dealloc;
@end
