/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary;

@interface MRTransactionPacketizer : NSObject {

	NSMutableArray* _outgoingPackets;
	NSMutableDictionary* _incomingPackets;

}
-(BOOL)isEmpty;
-(void)packetize:(id)arg1 packageSize:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)unpacketize:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

