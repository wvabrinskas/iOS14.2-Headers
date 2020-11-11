/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VUIBookmarkKey : NSObject {

	NSString* _identifier;
	long long _keyType;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long keyType;                  //@synthesize keyType=_keyType - In the implementation block
-(long long)keyType;
-(id)init;
-(NSString *)identifier;
-(id)description;
-(id)initWithIdentifier:(id)arg1 keyType:(long long)arg2 ;
@end
