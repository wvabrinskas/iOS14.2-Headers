/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol FCM3U8ParserDelegate;
@class NSData, NSMutableData, NSError, NSString;

@interface FCM3U8Parser : NSObject <NSURLSessionDataDelegate> {

	BOOL _collectForRewrite;
	id<FCM3U8ParserDelegate> _delegate;
	NSData* _data;
	NSMutableData* _bytes;
	NSError* _error;
	NSMutableData* _collectedData;

}

@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableData * bytes;                                 //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableData * collectedData;                         //@synthesize collectedData=_collectedData - In the implementation block
@property (assign,nonatomic,__weak) id<FCM3U8ParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL collectForRewrite;                                //@synthesize collectForRewrite=_collectForRewrite - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id<FCM3U8ParserDelegate>)delegate;
-(NSMutableData *)bytes;
-(NSError *)error;
-(unsigned long long)consumeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)processLine;
-(BOOL)collectForRewrite;
-(id)parseAttributeList:(id)arg1 ;
-(NSMutableData *)collectedData;
-(void)setCollectedData:(NSMutableData *)arg1 ;
-(BOOL)parseWithError:(id*)arg1 ;
-(BOOL)rewriteWithURL:(id)arg1 ;
-(void)setCollectForRewrite:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setDelegate:(id<FCM3U8ParserDelegate>)arg1 ;
-(NSData *)data;
-(void)setBytes:(NSMutableData *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)saveLine:(id)arg1 ;
@end

