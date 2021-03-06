/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GameController/GameController-Structs.h>
@class NSMutableArray;

@interface _GCHapticTokenAndParams : NSObject {

	NSMutableArray* _params;
	unsigned long long _token;

}

@property (nonatomic,retain) NSMutableArray * params;                 //@synthesize params=_params - In the implementation block
@property (nonatomic,readonly) unsigned long long token;              //@synthesize token=_token - In the implementation block
-(void)setParams:(NSMutableArray *)arg1 ;
-(NSMutableArray *)params;
-(unsigned long long)token;
-(id)initWithHapticCommand:(const HapticCommand*)arg1 ;
@end

