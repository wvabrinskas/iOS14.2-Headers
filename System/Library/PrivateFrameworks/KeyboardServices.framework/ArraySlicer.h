/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface ArraySlicer : NSObject {

	unsigned long long _sliceSize;
	unsigned long long _count;
	unsigned long long _offset;
	NSArray* _array;

}

@property (nonatomic,readonly) unsigned long long remaining; 
-(id)consumed;
-(unsigned long long)remaining;
-(id)initWithArray:(id)arg1 sliceSize:(unsigned long long)arg2 ;
-(id)nextSlice;
-(id)unconsumed;
@end

