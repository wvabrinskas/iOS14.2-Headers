/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PencilKit/PencilKit-Structs.h>
@interface PKDrawingReplayPoint : NSObject {

	unsigned long long _type;
	double _delay;
	CGPoint _point;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) CGPoint point;                        //@synthesize point=_point - In the implementation block
@property (assign,nonatomic) double delay;                         //@synthesize delay=_delay - In the implementation block
-(void)setDelay:(double)arg1 ;
-(double)delay;
-(void)setType:(unsigned long long)arg1 ;
-(CGPoint)point;
-(unsigned long long)type;
-(void)setPoint:(CGPoint)arg1 ;
-(SCD_Struct_PK6)pkInputPointWithOffset:(CGPoint)arg1 ;
@end
