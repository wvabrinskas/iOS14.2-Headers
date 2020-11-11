/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString;

@interface ATXFeedbackStateReader : NSObject {

	NSData* _data;
	const char* _perPredictionDataStart;
	int _predictionCount;
	Class _predictedItemKeyClass;
	NSString* _abGroup;
	long long _assetVersion;

}

@property (nonatomic,readonly) NSString * abGroup;                  //@synthesize abGroup=_abGroup - In the implementation block
@property (nonatomic,readonly) long long assetVersion;              //@synthesize assetVersion=_assetVersion - In the implementation block
+(id)stringKeyWithData:(id)arg1 ;
+(id)numberKeyWithData:(id)arg1 ;
-(id)init;
-(long long)assetVersion;
-(void)enumerateApps:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 predictedItemKeyClass:(Class)arg2 ;
-(NSString *)abGroup;
@end
