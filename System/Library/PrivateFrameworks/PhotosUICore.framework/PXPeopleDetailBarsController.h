/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXPhotosDetailsBarsController.h>

@class UIButton, PHPerson;

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController {

	UIButton* _peopleTitleView;
	PHPerson* _person;

}

@property (nonatomic,retain) UIButton * peopleTitleView;              //@synthesize peopleTitleView=_peopleTitleView - In the implementation block
@property (nonatomic,retain) PHPerson * person;                       //@synthesize person=_person - In the implementation block
-(void)setPerson:(PHPerson *)arg1 ;
-(PHPerson *)person;
-(id)createTitleView;
-(id)createAssetActionManager;
-(UIButton *)peopleTitleView;
-(void)setPeopleTitleView:(UIButton *)arg1 ;
@end
