/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VLLocalizationDataProvider <NSObject>
@property (assign,nonatomic,__weak) id<VLLocalizationDataProviderDelegate> delegate; 
@required
-(id<VLLocalizationDataProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)fileURLForKey:(const SCD_Struct_VL8*)arg1 error:(id*)arg2;
-(void)determineAvailabilityForCoordinate:(const SCD_Struct_VL6*)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3;

@end
