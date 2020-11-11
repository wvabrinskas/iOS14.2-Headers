/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/_LTTranslationRequest.h>

@class NSString;

@interface _LTSpeakRequest : _LTTranslationRequest {

	NSString* _text;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setText:(NSString *)arg1 ;
-(id)requestContext;
-(void)_startTranslationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(NSString *)text;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end
