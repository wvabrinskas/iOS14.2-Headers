/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISCreateAccountPromptOperation : ISOperation {

	long long _responseType;
	NSString* _reason;

}

@property (assign,nonatomic) long long responseType;              //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,retain) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(NSString *)reason;
-(void)run;
-(id)init;
-(void)setResponseType:(long long)arg1 ;
-(long long)responseType;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(id)_newCreateAccountDialog;
-(long long)_mapCorrectSelectedButtonWithDialog:(id)arg1 ;
-(BOOL)_hasActiveICloudAccount;
@end

