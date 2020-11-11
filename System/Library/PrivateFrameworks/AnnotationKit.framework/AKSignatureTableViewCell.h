/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class AKSignature, UIImageView;

@interface AKSignatureTableViewCell : UITableViewCell {

	AKSignature* _signature;
	UIImageView* _signatureImageView;

}

@property (nonatomic,retain) AKSignature * signature;                       //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) UIImageView * signatureImageView;              //@synthesize signatureImageView=_signatureImageView - In the implementation block
-(AKSignature *)signature;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)setSignature:(AKSignature *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(UIImageView *)signatureImageView;
-(void)setSignatureImageView:(UIImageView *)arg1 ;
-(void)_setImageFromSignature;
@end
