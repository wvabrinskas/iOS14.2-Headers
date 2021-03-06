/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface STDelta : NSObject {

	NSString* _uniqueIdentifier;
	long long _changeType;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                          //@synthesize changeType=_changeType - In the implementation block
-(long long)changeType;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(void)deleted;
-(NSDictionary *)dictionary;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)changedWithDictionary:(id)arg1 ;
@end

