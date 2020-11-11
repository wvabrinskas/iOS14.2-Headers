/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUErrorPresentationController.h>

@interface PUEditingErrorPresentationController : PUErrorPresentationController
+(BOOL)errorIsDownloadError:(id)arg1 ;
+(id)_hardwareModelSpecificMessageForKeyPrefix:(id)arg1 ;
+(id)_mediaSpecificMessageForKeyPrefix:(id)arg1 forAsset:(id)arg2 ;
+(long long)editingErrorTypeFromError:(id)arg1 ;
-(BOOL)shouldShowFileRadarAction;
-(id)additionalRadarDescriptionLinesForAsset:(id)arg1 ;
-(void)configureRadarPropertiesFromError:(id)arg1 withAssets:(id)arg2 ;
-(void)configureAlertPropertiesFromError:(id)arg1 withAssets:(id)arg2 willShowFileRadarButton:(BOOL)arg3 alertCompletion:(/*^block*/id)arg4 ;
-(id)initWithError:(id)arg1 forAsset:(id)arg2 ;
@end
