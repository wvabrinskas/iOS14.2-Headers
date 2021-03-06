/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKOfficialAppViewDelegate;
@class UIImageView, UIView, _MKUILabel, UIButton, NSMutableArray, GEOAppStoreApp, UIImage;

@interface MKOfficialAppView : MKPlaceSectionRowView {

	UIImageView* _storeAppImageView;
	UIView* _labelContainerView;
	_MKUILabel* _appNameLabel;
	_MKUILabel* _descriptionLabel;
	UIButton* _punchOutButton;
	NSMutableArray* _constraintArray;
	BOOL _layoutShouldStack;
	BOOL _isAppInstalled;
	GEOAppStoreApp* _appStoreApp;
	UIImage* _image;
	id<MKOfficialAppViewDelegate> _delegate;

}

@property (nonatomic,retain) GEOAppStoreApp * appStoreApp;                               //@synthesize appStoreApp=_appStoreApp - In the implementation block
@property (nonatomic,retain) UIImage * image;                                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic,__weak) id<MKOfficialAppViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAppInstalled;                                        //@synthesize isAppInstalled=_isAppInstalled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKOfficialAppViewDelegate>)delegate;
-(void)infoCardThemeChanged;
-(void)_createConstraints;
-(void)setImage:(UIImage *)arg1 ;
-(void)_updateFonts;
-(UIImage *)image;
-(BOOL)isAppInstalled;
-(void)setDelegate:(id<MKOfficialAppViewDelegate>)arg1 ;
-(void)_updateShouldLayoutStack;
-(void)_punchOutButtonSelected:(id)arg1 ;
-(void)_contentSizeDidChangeNotificationHandler;
-(GEOAppStoreApp *)appStoreApp;
-(void)updateButtonText;
-(void)_updateLabelText;
-(void)setAppStoreApp:(GEOAppStoreApp *)arg1 ;
-(void)setIsAppInstalled:(BOOL)arg1 ;
-(void)_commonInit;
@end

