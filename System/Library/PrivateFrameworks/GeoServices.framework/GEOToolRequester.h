/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOToolProxy.h>

@interface GEOToolRequester : NSObject <GEOToolProxy>
+(id)sharedRequester;
-(void)lockDBs;
-(void)unlockDBs;
-(id)getDefault:(id)arg1 source:(long long*)arg2 ;
-(unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1 ;
-(unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2 ;
-(BOOL)notifyNetworkDefaultsChanged;
-(void)invalidateTileCache;
-(id)ping;
@end

