/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RBProcess, NSArray;

@interface RBAssertionBatchContext : NSObject {

	BOOL _allowAbstractTarget;
	BOOL _unitTesting;
	RBProcess* _process;
	NSArray* _descriptorsToAcquire;
	NSArray* _identifiersToInvalidate;
	unsigned long long _acquisitionPolicy;
	id _holdToken;

}

@property (nonatomic,readonly) RBProcess * process;                                 //@synthesize process=_process - In the implementation block
@property (nonatomic,copy,readonly) NSArray * descriptorsToAcquire;                 //@synthesize descriptorsToAcquire=_descriptorsToAcquire - In the implementation block
@property (nonatomic,copy,readonly) NSArray * identifiersToInvalidate;              //@synthesize identifiersToInvalidate=_identifiersToInvalidate - In the implementation block
@property (nonatomic,retain) id holdToken;                                          //@synthesize holdToken=_holdToken - In the implementation block
@property (assign,nonatomic) BOOL unitTesting;                                      //@synthesize unitTesting=_unitTesting - In the implementation block
@property (assign,nonatomic) BOOL allowAbstractTarget;                              //@synthesize allowAbstractTarget=_allowAbstractTarget - In the implementation block
@property (assign,nonatomic) unsigned long long acquisitionPolicy;                  //@synthesize acquisitionPolicy=_acquisitionPolicy - In the implementation block
+(id)contextForProcess:(id)arg1 withDescriptorsToAcquire:(id)arg2 identifiersToInvalidate:(id)arg3 ;
+(id)contextForProcess:(id)arg1 acquisitionCompletionPolicy:(unsigned long long)arg2 withDescriptorsToAcquire:(id)arg3 identifiersToInvalidate:(id)arg4 ;
-(void)setHoldToken:(id)arg1 ;
-(NSArray *)descriptorsToAcquire;
-(id)acquisitionContextForDescriptor:(id)arg1 ;
-(BOOL)allowAbstractTarget;
-(RBProcess *)process;
-(void)setAllowAbstractTarget:(BOOL)arg1 ;
-(void)setUnitTesting:(BOOL)arg1 ;
-(BOOL)unitTesting;
-(id)_init;
-(id)holdToken;
-(unsigned long long)acquisitionPolicy;
-(NSArray *)identifiersToInvalidate;
-(void)setAcquisitionPolicy:(unsigned long long)arg1 ;
@end

