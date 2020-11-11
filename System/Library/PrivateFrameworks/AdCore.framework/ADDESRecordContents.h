/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ADVector;

@interface ADDESRecordContents : NSObject {

	BOOL _addImpression;
	BOOL _addTap;
	NSString* _adamID;
	ADVector* _appVector;
	double _pTTR;
	NSString* _obfuscationID;
	NSString* _addendum;

}

@property (nonatomic,retain) NSString * adamID;                     //@synthesize adamID=_adamID - In the implementation block
@property (assign,nonatomic) BOOL addImpression;                    //@synthesize addImpression=_addImpression - In the implementation block
@property (assign,nonatomic) BOOL addTap;                           //@synthesize addTap=_addTap - In the implementation block
@property (nonatomic,retain) ADVector * appVector;                  //@synthesize appVector=_appVector - In the implementation block
@property (assign,nonatomic) double pTTR;                           //@synthesize pTTR=_pTTR - In the implementation block
@property (nonatomic,retain) NSString * obfuscationID;              //@synthesize obfuscationID=_obfuscationID - In the implementation block
@property (nonatomic,retain) NSString * addendum;                   //@synthesize addendum=_addendum - In the implementation block
-(NSString *)adamID;
-(double)pTTR;
-(id)init;
-(BOOL)addTap;
-(NSString *)addendum;
-(void)setPTTR:(double)arg1 ;
-(void)setAdamID:(NSString *)arg1 ;
-(void)setObfuscationID:(NSString *)arg1 ;
-(void)setAddendum:(NSString *)arg1 ;
-(NSString *)obfuscationID;
-(void)overridePTTRData;
-(void)overrideObfuscationID;
-(void)overrideAppVector:(id)arg1 vector:(id)arg2 ;
-(void)collectODMLResponse:(id)arg1 ;
-(BOOL)addImpression;
-(void)setAddImpression:(BOOL)arg1 ;
-(void)setAddTap:(BOOL)arg1 ;
-(ADVector *)appVector;
-(void)setAppVector:(ADVector *)arg1 ;
@end
