/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class NSDictionary;

@interface NMSMediaSyncInfoUpdaterOperation : MPAsyncOperation {

	NSDictionary* _syncInfo;

}

@property (nonatomic,readonly) NSDictionary * syncInfo;              //@synthesize syncInfo=_syncInfo - In the implementation block
+(id)sharedLibraryRequestQueue;
-(void)execute;
-(NSDictionary *)syncInfo;
@end

