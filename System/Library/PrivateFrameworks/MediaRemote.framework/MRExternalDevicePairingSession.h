/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRCoreUtilsPairingSession, MRCryptoPairingSessionBlockDelegate;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession {

	MRCoreUtilsPairingSession* _pairingSession;
	MRCryptoPairingSessionBlockDelegate* _pairingDelegate;

}

@property (nonatomic,retain) MRCoreUtilsPairingSession * pairingSession;                         //@synthesize pairingSession=_pairingSession - In the implementation block
@property (nonatomic,retain) MRCryptoPairingSessionBlockDelegate * pairingDelegate;              //@synthesize pairingDelegate=_pairingDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasExchangedMessage; 
@property (getter=isUsingSystemPairing,nonatomic,readonly) BOOL usingSystemPairing; 
@property (nonatomic,readonly) unsigned long long state; 
-(void)open;
-(BOOL)isPaired;
-(id)initWithDevice:(id)arg1 ;
-(void)close;
-(MRCoreUtilsPairingSession *)pairingSession;
-(id)pairedDevices;
-(unsigned long long)state;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(BOOL)isUsingSystemPairing;
-(void)setDelegate:(id)arg1 ;
-(BOOL)hasExchangedMessage;
-(id)removePeer;
-(id)updatePeer;
-(BOOL)isValid;
-(void)setPairingDelegate:(MRCryptoPairingSessionBlockDelegate *)arg1 ;
-(void)setPairingSession:(MRCoreUtilsPairingSession *)arg1 ;
-(MRCryptoPairingSessionBlockDelegate *)pairingDelegate;
@end

