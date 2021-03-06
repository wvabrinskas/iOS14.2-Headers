/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface OITSURangeList : NSObject {

	vector<_NSRange, std::__1::allocator<_NSRange> >* mRangeList;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)initWithRange:(NSRange)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)stringValue;
-(unsigned long long)count;
-(void)removeRangeAtIndex:(unsigned long long)arg1 ;
-(void)reverse;
-(void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(void)addRange:(NSRange)arg1 ;
-(id)initWithRangeList:(id)arg1 ;
-(void)replaceWithRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)consolidate;
@end

