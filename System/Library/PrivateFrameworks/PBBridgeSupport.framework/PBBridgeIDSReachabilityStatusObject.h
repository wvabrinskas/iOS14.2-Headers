/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface PBBridgeIDSReachabilityStatusObject : NSObject <NSCopying> {

	NSUUID* _idsDeviceID;
	unsigned long long _reachability;

}

@property (nonatomic,retain) NSUUID * idsDeviceID;                         //@synthesize idsDeviceID=_idsDeviceID - In the implementation block
@property (assign,nonatomic) unsigned long long reachability;              //@synthesize reachability=_reachability - In the implementation block
+(id)connectivityString:(unsigned long long)arg1 ;
-(void)setIdsDeviceID:(NSUUID *)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)idsDeviceID;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setReachability:(unsigned long long)arg1 ;
-(unsigned long long)reachability;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

