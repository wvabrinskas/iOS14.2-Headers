/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FCForYouCatchUpCondition : NSObject {

	long long _contentTypes;
	/*^block*/id _testBlock;

}

@property (assign,nonatomic) long long contentTypes;              //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,copy) id testBlock;                          //@synthesize testBlock=_testBlock - In the implementation block
+(id)caughtUpWithContentTypes:(long long)arg1 orPassingTestBlock:(/*^block*/id)arg2 ;
+(id)caughtUpWithContentTypes:(long long)arg1 ;
-(id)testBlock;
-(void)setTestBlock:(id)arg1 ;
-(long long)contentTypes;
-(BOOL)isSatisfiedWithCatchUpOperation:(id)arg1 ;
-(void)setContentTypes:(long long)arg1 ;
@end

