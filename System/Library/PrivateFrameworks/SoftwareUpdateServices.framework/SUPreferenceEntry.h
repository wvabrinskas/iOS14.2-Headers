/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SUPreferenceEntry : NSObject {

	NSString* _preferenceKey;
	long long _type;
	NSString* _description;

}

@property (nonatomic,retain,readonly) NSString * preferenceKey;              //@synthesize preferenceKey=_preferenceKey - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSString * description;                //@synthesize description=_description - In the implementation block
-(NSString *)preferenceKey;
-(NSString *)description;
-(long long)type;
-(id)initWithKey:(id)arg1 type:(long long)arg2 description:(id)arg3 ;
@end

