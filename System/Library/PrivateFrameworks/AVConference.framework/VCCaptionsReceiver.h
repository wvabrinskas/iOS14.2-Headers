/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class VCCaptionsTranscription;

@interface VCCaptionsReceiver : NSObject {

	unsigned _captionsLastUtteranceNumber;
	unsigned _captionsLastUpdateNumber;
	id _delegate;
	VCCaptionsTranscription* _currentTranscription;
	opaqueVCCaptionsDecoderRef _captionsDecoder;

}

@property (readonly) id<VCCaptionsReceiverDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VCCaptionsTranscription * currentTranscription;              //@synthesize currentTranscription=_currentTranscription - In the implementation block
-(id<VCCaptionsReceiverDelegate>)delegate;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)processCaptionsData:(id)arg1 ;
-(void)setCurrentTranscription:(VCCaptionsTranscription *)arg1 ;
-(VCCaptionsTranscription *)currentTranscription;
@end
