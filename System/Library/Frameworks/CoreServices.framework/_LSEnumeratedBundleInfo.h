/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _LSEnumeratedBundleInfo : NSObject {

	BOOL _isPlaceholder;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL isPlaceholder;               //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
-(BOOL)isPlaceholder;
-(id)initWithBundleID:(id)arg1 isPlaceholder:(BOOL)arg2 ;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

