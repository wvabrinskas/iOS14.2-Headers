/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVRUIDeviceDelegate <NSObject>
@required
-(void)deviceBeganConnecting:(id)arg1;
-(void)deviceDidConnect:(id)arg1;
-(void)deviceDidDisconnect:(id)arg1 reason:(long long)arg2 error:(id)arg3;
-(void)deviceDidEncounterAuthenticationChallenge:(id)arg1 passwordType:(unsigned long long)arg2 passcode:(id)arg3;
-(void)device:(id)arg1 didEncounterAuthenticationThrottle:(long long)arg2;
-(void)device:(id)arg1 beganTextEditingWithAttributes:(id)arg2 initialText:(id)arg3;
-(void)device:(id)arg1 endedTextEditingWithAttributes:(id)arg2 endingText:(id)arg3;
-(void)device:(id)arg1 didUpdateText:(id)arg2;
-(void)device:(id)arg1 didUpdateAttributes:(id)arg2;
-(void)device:(id)arg1 needsMediaControls:(id)arg2;
-(void)device:(id)arg1 hidesMediaControls:(id)arg2;
-(void)device:(id)arg1 hasCaptionsEnabled:(BOOL)arg2;
-(void)device:(id)arg1 supportsVolumeControl:(BOOL)arg2;

@end

