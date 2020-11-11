/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreML/CoreML-Structs.h>
@class NSString;

@interface MLFairPlayKeyLoadingSession : NSObject {

	unsigned _sessionID;
	NSString* _keyIdentifier;
	SCD_Struct_ML58* _sessionContext;

}

@property (copy) NSString * keyIdentifier;                       //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (assign) unsigned sessionID;                           //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) SCD_Struct_ML58* sessionContext;              //@synthesize sessionContext=_sessionContext - In the implementation block
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(id)init;
-(void)setSessionContext:(SCD_Struct_ML58*)arg1 ;
-(void)setKeyIdentifier:(NSString *)arg1 ;
-(id)transformKeyIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)generateKeyRequestForKeyIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)generatePersistentKeyBlobFromKeyResponse:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_ML58*)sessionContext;
-(NSString *)keyIdentifier;
-(void)dealloc;
@end
