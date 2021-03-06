/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PUAssetPickerActivityProgressViewController, UIAlertController, UIView, NSString, NSProgress;

@interface PUAssetPickerActivityProgressController : NSObject {

	PUAssetPickerActivityProgressViewController* _progressViewController;
	UIAlertController* _alertController;
	UIView* _containerView;
	UIView* _progressContainerView;
	BOOL _isShowing;
	NSString* _title;
	NSString* _message;
	/*^block*/id _cancellationHandler;
	NSProgress* _progress;

}

@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id cancellationHandler;               //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL isShowing;                     //@synthesize isShowing=_isShowing - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(id)cancellationHandler;
-(id)init;
-(NSString *)message;
-(NSProgress *)progress;
-(BOOL)isShowing;
-(void)setCancellationHandler:(id)arg1 ;
-(void)_setupAlertController;
-(NSString *)title;
-(void)setIsShowing:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)showAnimated:(BOOL)arg1 sourceViewController:(id)arg2 ;
@end

