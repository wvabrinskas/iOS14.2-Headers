/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationPartOfDayTrait : PGCurationTrait {

	unsigned long long _value;

}

@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
-(id)niceDescription;
-(id)debugDescription;
-(BOOL)isActive;
-(unsigned long long)value;
-(id)initWithPartOfDay:(unsigned long long)arg1 ;
@end
