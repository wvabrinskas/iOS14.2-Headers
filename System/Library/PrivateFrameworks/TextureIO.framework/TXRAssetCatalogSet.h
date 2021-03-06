/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray, NSArray;

@interface TXRAssetCatalogSet : NSObject {

	unsigned long long _interpretation;
	unsigned long long _origin;
	NSString* _name;
	BOOL _cubemap;
	NSMutableArray* _configs;

}

@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long interpretation;              //@synthesize interpretation=_interpretation - In the implementation block
@property (assign,nonatomic) unsigned long long origin;                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL cubemap;                                 //@synthesize cubemap=_cubemap - In the implementation block
@property (readonly) NSArray * configs;                                      //@synthesize configs=_configs - In the implementation block
-(unsigned long long)origin;
-(void)setOrigin:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)cubemap;
-(unsigned long long)interpretation;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSArray *)configs;
-(void)setName:(NSString *)arg1 ;
-(id)exportAtLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)addConfig:(id)arg1 error:(id*)arg2 ;
-(void)setInterpretation:(unsigned long long)arg1 ;
@end

