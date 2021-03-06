/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIWindow.h>

@class NSString, ICViewControllerManager;

@interface ICWindow : UIWindow {

	NSString* _windowIdentifier;
	ICViewControllerManager* _viewControllerManager;

}

@property (nonatomic,retain) NSString * windowIdentifier;                                  //@synthesize windowIdentifier=_windowIdentifier - In the implementation block
@property (nonatomic,retain) ICViewControllerManager * viewControllerManager;              //@synthesize viewControllerManager=_viewControllerManager - In the implementation block
-(id)initWithWindowScene:(id)arg1 ;
-(NSString *)windowIdentifier;
-(id)ic_viewControllerManager;
-(ICViewControllerManager *)viewControllerManager;
-(void)setWindowIdentifier:(NSString *)arg1 ;
-(void)setViewControllerManager:(ICViewControllerManager *)arg1 ;
@end

