/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TBFetchResponseTileItem.h>

@protocol TBTile;
@class NSError, NSArray, NSString;

@interface TBLocalFetchTileItem : NSObject <TBFetchResponseTileItem> {

	NSError* _error;
	NSArray* _networks;
	unsigned long long _status;
	id<TBTile> _tile;

}

@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) id<TBTile> tile;                        //@synthesize tile=_tile - In the implementation block
@property (nonatomic,readonly) NSArray * networks;                     //@synthesize networks=_networks - In the implementation block
@property (nonatomic,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)networks;
-(id<TBTile>)tile;
-(unsigned long long)status;
-(NSError *)error;
-(id)initWithTile:(id)arg1 error:(id)arg2 ;
@end
