/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TUDTMFSoundPlayer : NSObject {

	/*^block*/id _playSystemSoundHandler;

}

@property (nonatomic,copy) id playSystemSoundHandler;              //@synthesize playSystemSoundHandler=_playSystemSoundHandler - In the implementation block
-(id)init;
-(void)setPlaySystemSoundHandler:(id)arg1 ;
-(BOOL)attemptToPlayKey:(unsigned char)arg1 ;
-(id)playSystemSoundHandler;
-(void)attemptToPlaySoundType:(long long)arg1 ;
@end

