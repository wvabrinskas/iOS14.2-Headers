/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController;

@interface HUViewControllerDismissalRequest : NSObject {

	BOOL _animated;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) BOOL animated;                                    //@synthesize animated=_animated - In the implementation block
+(id)requestWithViewController:(id)arg1 ;
-(BOOL)animated;
-(id)initWithViewController:(id)arg1 ;
-(UIViewController *)viewController;
-(void)setAnimated:(BOOL)arg1 ;
@end

