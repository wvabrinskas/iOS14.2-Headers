/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Symbolication/Symbolication-Structs.h>
@interface __VMULeaksMarkerObject : NSObject {

	SCD_Struct_VM11* _region;
	unsigned _entryIndex;

}

@property (assign,nonatomic) SCD_Struct_VM11* region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned entryIndex;                  //@synthesize entryIndex=_entryIndex - In the implementation block
-(SCD_Struct_VM11*)region;
-(unsigned)entryIndex;
-(void)setRegion:(SCD_Struct_VM11*)arg1 ;
-(void)setEntryIndex:(unsigned)arg1 ;
-(void)dealloc;
@end

