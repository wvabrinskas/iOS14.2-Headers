/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CVNLPTextDecodingConfiguration : NSObject {

	/*^block*/id _commitActionBlock;

}

@property (assign,nonatomic) id commitActionBlock;              //@synthesize commitActionBlock=_commitActionBlock - In the implementation block
+(/*^block*/id)defaultWhitespaceCommitActionBehavior;
+(/*^block*/id)defaultCommitActionBehaviorForLocale:(id)arg1 ;
-(id)initWithCommitActionBehavior:(/*^block*/id)arg1 ;
-(id)commitActionBlock;
-(void)setCommitActionBlock:(id)arg1 ;
@end

