/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXGIndexSetArray : NSObject {

	long long _capacity;
	long long _count;
	void* _indexSetReferences;

}

@property (assign,nonatomic) long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) void* indexSetReferences;              //@synthesize indexSetReferences=_indexSetReferences - In the implementation block
-(void)setCount:(long long)arg1 ;
-(long long)count;
-(id)description;
-(void)removeAllIndexes;
-(void*)indexSetReferences;
-(void)dealloc;
@end
