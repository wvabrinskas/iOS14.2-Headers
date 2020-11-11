/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PKSandboxExtension : NSObject {

	long long _handle;
	NSString* _token;

}

@property (nonatomic,readonly) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign) long long handle;                          //@synthesize handle=_handle - In the implementation block
-(id)initWithExtension:(id)arg1 ;
-(void)setHandle:(long long)arg1 ;
-(long long)handle;
-(void)consume;
-(NSString *)token;
-(BOOL)isEqual:(id)arg1 ;
-(void)expel;
-(void)dealloc;
@end
