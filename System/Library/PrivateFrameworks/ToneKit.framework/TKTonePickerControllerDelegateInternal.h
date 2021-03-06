/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TKTonePickerControllerDelegateInternal <NSObject>
@optional
-(void)tonePickerController:(id)arg1 didUpdateIgnoreMute:(BOOL)arg2 forTonePickerItem:(id)arg3 atIndexPath:(id)arg4;
-(id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2;
-(void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1;
-(void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(BOOL)arg3;
-(void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1;
-(void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
-(void)tonePickerController:(id)arg1 willBeginPlaybackOfToneWithIdentifier:(id)arg2;
-(void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2;
-(BOOL)tonePickerControllerShouldShowMedia:(id)arg1;
-(unsigned long long)numberOfMediaItemsInTonePickerController:(id)arg1;
-(id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2;
-(unsigned long long)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2;
-(void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
-(void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1;
-(void)tonePickerController:(id)arg1 requestsPresentingAlertWithTitle:(id)arg2 message:(id)arg3;

@end

