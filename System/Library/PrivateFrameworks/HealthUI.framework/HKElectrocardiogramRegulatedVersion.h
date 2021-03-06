/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HKElectrocardiogramRegulatedVersion : NSObject {

	NSString* _updateVersion;
	NSString* _featureVersion;

}

@property (nonatomic,copy,readonly) NSString * updateVersion;               //@synthesize updateVersion=_updateVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureVersion;              //@synthesize featureVersion=_featureVersion - In the implementation block
-(NSString *)updateVersion;
-(NSString *)featureVersion;
-(BOOL)_validateSourceVersion:(id)arg1 algorithmVersion:(long long)arg2 ;
-(id)_updateVersionFromSourceVersion:(id)arg1 algorithmVersion:(long long)arg2 ;
-(id)_featureVersionFromUpdateVersion:(id)arg1 ;
-(id)initWithSourceVersion:(id)arg1 algorithmVersion:(long long)arg2 ;
@end

