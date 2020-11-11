/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class CNGroupIdentity, CNVisualIdentityAvatarViewController;

@interface CNGroupAvatarViewController : UIViewController {

	CNGroupIdentity* _group;
	CNVisualIdentityAvatarViewController* _avatarViewController;

}

@property (nonatomic,retain) CNGroupIdentity * group;                                                  //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNVisualIdentityAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)log;
+(unsigned long long)maxContactAvatars;
-(void)groupIdentityDidUpdate:(id)arg1 ;
-(void)setGroup:(CNGroupIdentity *)arg1 ;
-(CNGroupIdentity *)group;
-(id)initWithGroup:(id)arg1 ;
-(void)setAvatarViewController:(CNVisualIdentityAvatarViewController *)arg1 ;
-(CNVisualIdentityAvatarViewController *)avatarViewController;
-(id)initWithGroup:(id)arg1 avatarViewControllerSettings:(id)arg2 ;
@end
