/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, VCVoiceShortcutClient;

@interface AXSiriShortcutsManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _shortcuts;
	NSMutableDictionary* _updateBlocks;
	int _contentProtectionNotifyToken;
	/*^block*/id _siriShortcutsDidChangeBlock;
	VCVoiceShortcutClient* _shortcutClient;

}

@property (nonatomic,retain) VCVoiceShortcutClient * shortcutClient;              //@synthesize shortcutClient=_shortcutClient - In the implementation block
@property (nonatomic,readonly) NSArray * shortcuts; 
@property (nonatomic,copy) id siriShortcutsDidChangeBlock;                        //@synthesize siriShortcutsDidChangeBlock=_siriShortcutsDidChangeBlock - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setShortcutClient:(VCVoiceShortcutClient *)arg1 ;
-(void)handleVoiceShortcutClientDataUpdateNotification:(id)arg1 ;
-(void)_loadShortcuts;
-(VCVoiceShortcutClient *)shortcutClient;
-(id)siriShortcutsDidChangeBlock;
-(void)setSiriShortcutsDidChangeBlock:(id)arg1 ;
-(NSArray *)shortcuts;
-(id)registerShortcutsDidChangeBlock:(/*^block*/id)arg1 ;
-(void)unregisterShortcutsDidChangeBlock:(id)arg1 ;
-(id)shortcutForIdentifier:(id)arg1 ;
-(void)performShortcut:(id)arg1 ;
-(void)dealloc;
@end

