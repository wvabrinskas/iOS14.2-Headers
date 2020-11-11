/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataDetectorsUI/DDAction.h>

@class DDRemoteActionViewController;

@interface DDAddEventAction : DDAction {

	DDRemoteActionViewController* viewController;

}

@property (nonatomic,retain) DDRemoteActionViewController * viewController; 
+(id)cachedEventForICSString:(id)arg1 ;
+(BOOL)actionAvailableForEvent:(id)arg1 ;
-(void)setViewController:(DDRemoteActionViewController *)arg1 ;
-(DDRemoteActionViewController *)viewController;
-(id)icon;
-(id)notificationTitle;
-(id)localizedName;
-(void)invalidate;
-(int)interactionType;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
@end
