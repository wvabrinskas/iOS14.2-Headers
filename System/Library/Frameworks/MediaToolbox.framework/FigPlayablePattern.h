/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CHHapticAdvancedPatternPlayerExtended;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class AVHapticSequence;

@interface FigPlayablePattern : NSObject {

	BOOL _usingCoreHaptics;
	id<CHHapticAdvancedPatternPlayerExtended> _player;
	AVHapticSequence* _sequence;
	SCD_Struct_Fi17 _timeRange;
	SCD_Struct_Fi17 _outputTimeRange;

}

@property (assign,nonatomic) BOOL usingCoreHaptics;                                         //@synthesize usingCoreHaptics=_usingCoreHaptics - In the implementation block
@property (nonatomic,retain) id<CHHapticAdvancedPatternPlayerExtended> player;              //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVHapticSequence * sequence;                                   //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi17 timeRange;                                     //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi17 outputTimeRange;                               //@synthesize outputTimeRange=_outputTimeRange - In the implementation block
-(void)setPlayer:(id<CHHapticAdvancedPatternPlayerExtended>)arg1 ;
-(void)setTimeRange:(SCD_Struct_Fi17)arg1 ;
-(id<CHHapticAdvancedPatternPlayerExtended>)player;
-(SCD_Struct_Fi17)timeRange;
-(AVHapticSequence *)sequence;
-(void)setUsingCoreHaptics:(BOOL)arg1 ;
-(void)setOutputTimeRange:(SCD_Struct_Fi17)arg1 ;
-(id)initWithSBuf:(opaqueCMSampleBufferRef)arg1 chEngine:(id)arg2 ;
-(id)initWithSBuf:(opaqueCMSampleBufferRef)arg1 avhpEngine:(id)arg2 ;
-(BOOL)usingCoreHaptics;
-(SCD_Struct_Fi17)outputTimeRange;
-(void)setSequence:(AVHapticSequence *)arg1 ;
-(void)dealloc;
@end

