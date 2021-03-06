/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface RUIActionSignal : NSObject {

	unsigned long long _topSignal;
	NSMutableArray* _subActions;

}

@property (assign,nonatomic) unsigned long long topSignal;              //@synthesize topSignal=_topSignal - In the implementation block
@property (nonatomic,retain) NSMutableArray * subActions;               //@synthesize subActions=_subActions - In the implementation block
+(id)stringForActionSignal:(unsigned long long)arg1 ;
+(id)signalWithType:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTopSignal:(unsigned long long)arg1 ;
-(void)setSubActions:(NSMutableArray *)arg1 ;
-(unsigned long long)topSignal;
-(NSMutableArray *)subActions;
@end

