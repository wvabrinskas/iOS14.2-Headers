/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <JasperDepth/JasperDepth-Structs.h>
@interface DNNEspressoModel : NSObject {

	int _engine;
	int _storage;
	void* _plan;
	void* _ctx;
	SCD_Struct_DN67* _net;

}

@property (assign,nonatomic) int engine;                        //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) void* plan;                        //@synthesize plan=_plan - In the implementation block
@property (assign,nonatomic) void* ctx;                         //@synthesize ctx=_ctx - In the implementation block
@property (assign,nonatomic) SCD_Struct_DN67* net;              //@synthesize net=_net - In the implementation block
@property (assign) int storage;                                 //@synthesize storage=_storage - In the implementation block
-(void)setStorage:(int)arg1 ;
-(void*)ctx;
-(SCD_Struct_DN67*)net;
-(void)setEngine:(int)arg1 ;
-(int)engine;
-(void)setCtx:(void*)arg1 ;
-(void)setPlan:(void*)arg1 ;
-(void)setNet:(SCD_Struct_DN67*)arg1 ;
-(int)storage;
-(void)dealloc;
-(void*)plan;
-(BOOL)initializeInputOutputBlobs;
-(BOOL)loadNetworkWithName:(id)arg1 runningMode:(long long)arg2 ;
@end
