/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _HKStreamingDestination;
#import <HealthKit/HealthKit-Structs.h>
@class NSMutableData;

@interface _HKCompressionEngine : NSObject {

	int _operation;
	int _algorithm;
	NSMutableData* _sinkContent;
	id<_HKStreamingDestination> _destination;
	NSMutableData* _destinationBuffer;
	SCD_Struct_HK24* _stream;

}

@property (assign,nonatomic) int operation;                                               //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) int algorithm;                                               //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic,__weak) id<_HKStreamingDestination> destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSMutableData * destinationBuffer;                           //@synthesize destinationBuffer=_destinationBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_HK24* stream;                                     //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSMutableData * sinkContent;                               //@synthesize sinkContent=_sinkContent - In the implementation block
+(id)processDataWithFunction:(long long)arg1 algorithm:(long long)arg2 content:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)setAlgorithm:(int)arg1 ;
-(SCD_Struct_HK24*)stream;
-(void)setOperation:(int)arg1 ;
-(id<_HKStreamingDestination>)destination;
-(BOOL)_processIncomingData:(const void*)arg1 length:(unsigned long long)arg2 flags:(int)arg3 ;
-(NSMutableData *)sinkContent;
-(void)_decodeEngineFunction:(long long)arg1 algorithm:(long long)arg2 ;
-(BOOL)_initializeStream;
-(void)_gatherReadSinkContent:(id)arg1 ;
-(NSMutableData *)destinationBuffer;
-(unsigned long long)_deliverDestinationContent;
-(void)setDestinationBuffer:(NSMutableData *)arg1 ;
-(int)operation;
-(void)setStream:(SCD_Struct_HK24*)arg1 ;
-(void)setDestination:(id<_HKStreamingDestination>)arg1 ;
-(id)initWithFunction:(long long)arg1 algorithm:(long long)arg2 destination:(id)arg3 ;
-(void)sourceContentFinished;
-(void)writeSourceContent:(id)arg1 ;
-(int)algorithm;
-(void)dealloc;
@end
