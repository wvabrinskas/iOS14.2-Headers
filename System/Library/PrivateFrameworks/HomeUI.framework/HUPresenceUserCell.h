/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol CNAvatarViewController;
@class NSString, HFUserHandle, UIImageView, HUTitleDescriptionContentView, HULayoutContainerView;

@interface HUPresenceUserCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _checked;
	BOOL _locationUnavailable;
	NSString* _userName;
	NSString* _deviceName;
	HFUserHandle* _userHandle;
	UIImageView* _checkmarkImageView;
	HUTitleDescriptionContentView* _titleDescriptionView;
	id<CNAvatarViewController> _avatarViewController;
	HULayoutContainerView* _avatarContainerView;

}

@property (nonatomic,readonly) UIImageView * checkmarkImageView;                                  //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (nonatomic,readonly) HUTitleDescriptionContentView * titleDescriptionView;              //@synthesize titleDescriptionView=_titleDescriptionView - In the implementation block
@property (nonatomic,readonly) id<CNAvatarViewController> avatarViewController;                   //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,readonly) HULayoutContainerView * avatarContainerView;                       //@synthesize avatarContainerView=_avatarContainerView - In the implementation block
@property (nonatomic,copy) NSString * userName;                                                   //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                                 //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) HFUserHandle * userHandle;                                           //@synthesize userHandle=_userHandle - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked;                                       //@synthesize checked=_checked - In the implementation block
@property (assign,getter=isLocationUnavailable,nonatomic) BOOL locationUnavailable;               //@synthesize locationUnavailable=_locationUnavailable - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                     //@synthesize disabled=_disabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)userName;
-(void)_setupConstraints;
-(NSString *)deviceName;
-(BOOL)isDisabled;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HULayoutContainerView *)avatarContainerView;
-(void)setUserName:(NSString *)arg1 ;
-(BOOL)isChecked;
-(void)setChecked:(BOOL)arg1 ;
-(id<CNAvatarViewController>)avatarViewController;
-(UIImageView *)checkmarkImageView;
-(void)prepareForReuse;
-(HFUserHandle *)userHandle;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setUserHandle:(HFUserHandle *)arg1 ;
-(HUTitleDescriptionContentView *)titleDescriptionView;
-(void)setLocationUnavailable:(BOOL)arg1 ;
-(void)_updateCustomSeparatorInset;
-(void)_updateDescriptionText;
-(BOOL)isLocationUnavailable;
@end

