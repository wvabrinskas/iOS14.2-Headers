/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface SXLayoutParametersManager : NSObject {

	NSMutableDictionary* _durations;

}

@property (nonatomic,readonly) NSMutableDictionary * durations;              //@synthesize durations=_durations - In the implementation block
-(id)init;
-(id)layoutParametersForTask:(id)arg1 previousLayoutOptions:(id)arg2 ;
-(NSMutableDictionary *)durations;
-(void)layoutFinishedForTask:(id)arg1 result:(id)arg2 ;
@end

