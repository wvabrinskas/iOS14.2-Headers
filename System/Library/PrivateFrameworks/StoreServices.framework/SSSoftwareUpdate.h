/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSDate, NSString;

@interface SSSoftwareUpdate : NSObject {

	NSDictionary* _dictionary;
	NSDate* _installDate;
	long long _updateState;

}

@property (nonatomic,readonly) NSDictionary * updateDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSDate * installDate;                             //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,readonly) long long parentalControlsRank; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (assign,nonatomic) long long updateState;                          //@synthesize updateState=_updateState - In the implementation block
-(long long)updateState;
-(NSString *)bundleIdentifier;
-(NSDate *)installDate;
-(long long)storeItemIdentifier;
-(void)setInstallDate:(NSDate *)arg1 ;
-(void)dealloc;
-(id)initWithUpdateDictionary:(id)arg1 ;
-(long long)parentalControlsRank;
-(NSDictionary *)updateDictionary;
-(void)setUpdateState:(long long)arg1 ;
@end
