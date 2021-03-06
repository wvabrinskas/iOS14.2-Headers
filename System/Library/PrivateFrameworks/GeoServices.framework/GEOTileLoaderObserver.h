/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOTileLoaderObserver <NSObject>
@required
-(void)tileLoader:(id)arg1 loadedTileKey:(const GEOTileKey*)arg2 fromSource:(long long)arg3 withOptions:(unsigned long long)arg4;
-(void)tileLoader:(id)arg1 failedTileKey:(const GEOTileKey*)arg2 error:(id)arg3 withOptions:(unsigned long long)arg4;

@end

