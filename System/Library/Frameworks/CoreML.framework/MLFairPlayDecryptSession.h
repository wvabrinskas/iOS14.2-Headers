/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CoreMLModelSecurityProtocol;
@class NSString, NSXPCConnection, NSObject;

@interface MLFairPlayDecryptSession : NSObject {

	NSString* _modelPath;
	NSXPCConnection* _xpcConnection;
	NSObject*<CoreMLModelSecurityProtocol> _xpcProxy;

}

@property (nonatomic,copy) NSString * modelPath;                                           //@synthesize modelPath=_modelPath - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<CoreMLModelSecurityProtocol> xpcProxy;              //@synthesize xpcProxy=_xpcProxy - In the implementation block
+(id)decryptSessionForModelAtPath:(id)arg1 keyBlob:(id)arg2 error:(id*)arg3 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<CoreMLModelSecurityProtocol>)xpcProxy;
-(NSString *)modelPath;
-(void)setXpcProxy:(NSObject*<CoreMLModelSecurityProtocol>)arg1 ;
-(void)setModelPath:(NSString *)arg1 ;
-(void)dealloc;
@end

