/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCloudPhotoWelcomeViewController.h>
#import <libobjc.A.dylib/PUWelcomeProtocol.h>

@class NSString;

@interface PUCloudPhotoWelcomeViewController : PXCloudPhotoWelcomeViewController <PUWelcomeProtocol> {

	/*^block*/id __completionHandler;

}

@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;              //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)resetLastPresentationInfo;
-(id)initWithDefaultTitle;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(id)_completionHandler;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

