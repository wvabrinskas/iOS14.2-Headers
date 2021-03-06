/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceMemos/RCCompositionWaveformDataSource.h>

@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource {

	NSURL* _destinationWaveformURL;

}

@property (nonatomic,readonly) NSURL * destinationWaveformURL;              //@synthesize destinationWaveformURL=_destinationWaveformURL - In the implementation block
-(BOOL)preferLoadingFragmentWaveforms;
-(id)generatedWaveformOutputURL;
-(id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2 ;
-(NSURL *)destinationWaveformURL;
@end

