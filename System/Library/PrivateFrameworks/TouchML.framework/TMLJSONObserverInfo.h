/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TMLJSONObserverInfo : NSObject {

	unsigned long long _hash;
	NSString* _keyPath;
	id _targetUnsafe;
	id _target;
	/*^block*/id _callback;

}

@property (nonatomic,copy,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) id targetUnsafe;                      //@synthesize targetUnsafe=_targetUnsafe - In the implementation block
@property (nonatomic,__weak,readonly) id target;                     //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) id callback;                          //@synthesize callback=_callback - In the implementation block
-(id)target;
-(NSString *)keyPath;
-(id)callback;
-(unsigned long long)hash;
-(void)notify:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)targetUnsafe;
-(id)initWithObserver:(id)arg1 keyPath:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

