/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFSearchResultHandler.h>
#import <libobjc.A.dylib/_MFFlushableMessageSetIterator.h>
#import <libobjc.A.dylib/EFCancelable.h>

@class NSMutableIndexSet, NSString;

@interface _MFPersistedMessageForwardingIterator : NSObject <MFSearchResultHandler, _MFFlushableMessageSetIterator, EFCancelable> {

	AB _cancelled;
	/*^block*/id _handler;
	NSMutableIndexSet* _messageSet;

}

@property (nonatomic,copy,readonly) id handler;                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * messageSet;              //@synthesize messageSet=_messageSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flush;
-(BOOL)handleMessage:(id)arg1 ;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(NSMutableIndexSet *)messageSet;
-(id)handler;
-(void)cancel;
@end

