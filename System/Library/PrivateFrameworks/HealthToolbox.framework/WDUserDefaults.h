/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKKeyValueDomain;

@interface WDUserDefaults : NSObject {

	HKKeyValueDomain* _keyValueDomain;

}

@property (nonatomic,retain) HKKeyValueDomain * keyValueDomain;              //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
-(id)initWithHealthStore:(id)arg1 ;
-(HKKeyValueDomain *)keyValueDomain;
-(void)setKeyValueDomain:(HKKeyValueDomain *)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)valueForKey:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

