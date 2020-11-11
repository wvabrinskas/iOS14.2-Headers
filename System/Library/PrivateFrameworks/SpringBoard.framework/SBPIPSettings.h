/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@class SBPIPInteractionSettings, SBPIPFluidTransitionsSettings;

@interface SBPIPSettings : PTSettings {

	SBPIPInteractionSettings* _interactionSettings;
	SBPIPFluidTransitionsSettings* _fluidTransitionsSettings;

}

@property (nonatomic,retain) SBPIPInteractionSettings * interactionSettings;                        //@synthesize interactionSettings=_interactionSettings - In the implementation block
@property (nonatomic,retain) SBPIPFluidTransitionsSettings * fluidTransitionsSettings;              //@synthesize fluidTransitionsSettings=_fluidTransitionsSettings - In the implementation block
+(id)settingsControllerModule;
-(SBPIPInteractionSettings *)interactionSettings;
-(SBPIPFluidTransitionsSettings *)fluidTransitionsSettings;
-(void)setInteractionSettings:(SBPIPInteractionSettings *)arg1 ;
-(void)setFluidTransitionsSettings:(SBPIPFluidTransitionsSettings *)arg1 ;
@end
