/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIImageView.h>

@class NSLayoutConstraint;

@interface CPSAspectFitImageView : UIImageView {

	NSLayoutConstraint* _aspectConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * aspectConstraint;              //@synthesize aspectConstraint=_aspectConstraint - In the implementation block
-(id)init;
-(void)setImage:(id)arg1 ;
-(void)_updateConstraints;
-(NSLayoutConstraint *)aspectConstraint;
-(void)setAspectConstraint:(NSLayoutConstraint *)arg1 ;
@end
