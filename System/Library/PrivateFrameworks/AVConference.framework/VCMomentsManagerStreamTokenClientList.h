/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCMomentsMessenger;
@class NSMutableArray, NSArray;

@interface VCMomentsManagerStreamTokenClientList : NSObject {

	long long _streamToken;
	id<VCMomentsMessenger> _messenger;
	NSMutableArray* _clientContextList;

}

@property (nonatomic,readonly) id<VCMomentsMessenger> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (nonatomic,readonly) NSArray * clientContextList;                   //@synthesize clientContextList=_clientContextList - In the implementation block
+(BOOL)isValidContext:(id)arg1 ;
+(long long)streamTokenFromClientContext:(id)arg1 ;
-(void)dealloc;
-(void)removeContext:(id)arg1 ;
-(id<VCMomentsMessenger>)messenger;
-(id)newContext;
-(NSArray *)clientContextList;
-(id)initWithStreamToken:(long long)arg1 messenger:(id)arg2 ;
@end
