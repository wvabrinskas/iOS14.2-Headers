/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ATXLazyIntentDelegateProtocol;
@class INIntent, NSData;

@interface ATXLazyIntent : NSObject {

	INIntent* _intent;
	NSData* _intentData;
	id<ATXLazyIntentDelegateProtocol> _delegate;

}

@property (nonatomic,readonly) INIntent * intent; 
@property (nonatomic,readonly) NSData * intentData; 
@property (assign,nonatomic,__weak) id<ATXLazyIntentDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<ATXLazyIntentDelegateProtocol>)delegate;
-(INIntent *)intent;
-(void)setDelegate:(id<ATXLazyIntentDelegateProtocol>)arg1 ;
-(void)handleMemoryPressure;
-(NSData *)intentData;
-(BOOL)isDeserialized;
-(id)initWithIntent:(id)arg1 ;
-(id)initWithIntentData:(id)arg1 ;
-(id)initWithIntent:(id)arg1 intentData:(id)arg2 ;
-(id)_deserializeIntent;
@end

