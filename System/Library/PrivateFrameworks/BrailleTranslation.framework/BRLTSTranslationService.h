/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BRLTTranslationServiceInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, BRLTSTranslator;

@interface BRLTSTranslationService : NSObject <BRLTTranslationServiceInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	BRLTSTranslator* _queueTranslator;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BRLTSTranslator * queueTranslator;               //@synthesize queueTranslator=_queueTranslator - In the implementation block
+(id)exportedInterface;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)loadBrailleBundleForIdentifier:(id)arg1 ;
-(void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(BRLTSTranslator *)queueTranslator;
-(void)setQueueTranslator:(BRLTSTranslator *)arg1 ;
@end

