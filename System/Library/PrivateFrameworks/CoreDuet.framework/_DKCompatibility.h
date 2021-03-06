/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _DKCompatibility : NSObject {

	long long _min;
	long long _max;

}

@property (assign,nonatomic) long long min;              //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) long long max;              //@synthesize max=_max - In the implementation block
+(id)currentCompatibility;
+(id)compatibilityWithMinVersion:(long long)arg1 maxVersion:(long long)arg2 ;
+(id)compatibilityFromSerializedCompatibility:(id)arg1 ;
-(id)serialize;
-(id)filterIncompatibleEvents:(id)arg1 ;
-(void)setMin:(long long)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)max;
-(id)eventPredicate;
-(long long)min;
-(void)setMax:(long long)arg1 ;
@end

