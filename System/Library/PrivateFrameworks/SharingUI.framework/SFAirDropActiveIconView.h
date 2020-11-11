/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIView;

@interface SFAirDropActiveIconView : UIImageView {

	UIView* _circleMaskView;
	BOOL _masked;

}

@property (assign,getter=isMasked,nonatomic) BOOL masked;              //@synthesize masked=_masked - In the implementation block
+(id)baseImage;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 grayscale:(BOOL)arg2 ;
-(void)setMasked:(BOOL)arg1 ;
-(BOOL)isMasked;
@end
