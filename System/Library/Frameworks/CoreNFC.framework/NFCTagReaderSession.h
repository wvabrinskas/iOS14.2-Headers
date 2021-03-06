/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreNFC/NFCReaderSession.h>

@protocol NFCTag;
@interface NFCTagReaderSession : NFCReaderSession {

	id<NFCTag> _connectedTag;
	id _swiftDelegateWrapper;

}

@property (nonatomic,retain,readonly) id<NFCTag> connectedTag; 
+(BOOL)readingAvailable;
-(void)didDetectTags:(id)arg1 ;
-(id<NFCTag>)connectedTag;
-(id)initWithDelegate:(id)arg1 sessionDelegateType:(long long)arg2 queue:(id)arg3 pollMethod:(unsigned long long)arg4 sessionConfig:(unsigned long long)arg5 ;
-(void)restartPolling;
-(void)connectToTag:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_callbackDidInvalidateWithError:(id)arg1 ;
-(void)_callbackDidBecomeActive;
-(id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 delegateType:(long long)arg3 queue:(id)arg4 ;
-(id)initWithPollingOption:(long long)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(id)initWithPollingOption:(long long)arg1 swiftDelegate:(id)arg2 queue:(id)arg3 ;
@end

