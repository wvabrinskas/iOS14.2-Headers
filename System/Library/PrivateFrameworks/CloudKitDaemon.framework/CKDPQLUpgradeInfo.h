/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CKDPQLUpgradeInfo : NSObject {

	BOOL _shouldVacuum;
	BOOL _shouldTruncateDatabase;
	unsigned long long _version;
	/*function pointer*/void* _upgradeFunction;

}

@property (assign,nonatomic) unsigned long long version;                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* upgradeFunction;              //@synthesize upgradeFunction=_upgradeFunction - In the implementation block
@property (assign,nonatomic) BOOL shouldVacuum;                                      //@synthesize shouldVacuum=_shouldVacuum - In the implementation block
@property (assign,nonatomic) BOOL shouldTruncateDatabase;                            //@synthesize shouldTruncateDatabase=_shouldTruncateDatabase - In the implementation block
+(id)upgradeInfoWithVersion:(unsigned long long)arg1 function:(/*function pointer*/void*)arg2 shouldVacuum:(BOOL)arg3 shouldTruncate:(BOOL)arg4 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setShouldTruncateDatabase:(BOOL)arg1 ;
-(void)setShouldVacuum:(BOOL)arg1 ;
-(unsigned long long)version;
-(/*function pointer*/void*)upgradeFunction;
-(id)initWithVersion:(unsigned long long)arg1 function:(/*function pointer*/void*)arg2 shouldVacuum:(BOOL)arg3 shouldTruncate:(BOOL)arg4 ;
-(BOOL)shouldVacuum;
-(BOOL)shouldTruncateDatabase;
-(void)setUpgradeFunction:(/*function pointer*/void*)arg1 ;
@end

