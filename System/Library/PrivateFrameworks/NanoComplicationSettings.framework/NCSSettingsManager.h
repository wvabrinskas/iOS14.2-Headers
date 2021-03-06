/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoComplicationSettings/NCSInternalSettingsManager.h>

@protocol NCSSettingsManagerDelegate;
@interface NCSSettingsManager : NCSInternalSettingsManager {

	id<NCSSettingsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NCSSettingsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedSettingsManager;
-(id)init;
-(id<NCSSettingsManagerDelegate>)delegate;
-(void)loadSettings;
-(void)setDelegate:(id<NCSSettingsManagerDelegate>)arg1 ;
-(void)dealloc;
-(void)_handleLocaleChange:(id)arg1 ;
-(void)_updateSockPuppetComplications;
-(id)_fetchSockPuppetComplications;
@end

