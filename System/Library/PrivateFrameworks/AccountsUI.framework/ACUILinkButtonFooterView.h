/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView> {

	ACUILinkButton* _linkButton;
	long long _desiredTextAlignment;

}

@property (assign,nonatomic) long long alignment;              //@synthesize desiredTextAlignment=_desiredTextAlignment - In the implementation block
-(void)setAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeightForWidth:(double)arg1 ;
-(long long)alignment;
-(id)initWithSpecifier:(id)arg1 ;
-(id)initWithButton:(id)arg1 ;
@end

