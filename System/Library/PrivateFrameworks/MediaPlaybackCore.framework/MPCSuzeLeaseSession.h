/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ICSuzeLeaseSession;

@interface MPCSuzeLeaseSession : NSObject {

	ICSuzeLeaseSession* _icSuzeLeaseSession;

}

@property (nonatomic,readonly) ICSuzeLeaseSession * icSuzeLeaseSession;              //@synthesize icSuzeLeaseSession=_icSuzeLeaseSession - In the implementation block
-(void)beginAutomaticallyRefreshingLease;
-(void)endAutomaticallyRefreshingLease;
-(ICSuzeLeaseSession *)icSuzeLeaseSession;
-(id)initWithICSuzeLeaseSession:(id)arg1 ;
@end
