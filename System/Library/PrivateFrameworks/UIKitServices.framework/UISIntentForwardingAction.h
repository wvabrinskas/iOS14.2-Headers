/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class INIntent, INIntentForwardingAction;

@interface UISIntentForwardingAction : BSAction {

	INIntent* _cachedIntent;
	INIntentForwardingAction* _cachedIntentForwardingAction;

}

@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) INIntentForwardingAction * intentForwardingAction; 
-(INIntent *)intent;
-(id)initWithIntentForwardingAction:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)initWithIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(INIntentForwardingAction *)intentForwardingAction;
-(long long)UIActionType;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
@end
