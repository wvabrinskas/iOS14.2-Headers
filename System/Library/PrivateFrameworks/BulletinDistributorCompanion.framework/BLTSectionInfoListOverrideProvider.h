/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BLTSectionInfoListOverrideProvider <BLTSectionInfoListProvider>
@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate; 
@required
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)reloadWithCompletion:(/*^block*/id)arg1;

@end

