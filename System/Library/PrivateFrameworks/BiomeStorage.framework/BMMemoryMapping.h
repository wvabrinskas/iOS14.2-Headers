/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BMMemoryMapping : NSObject {

	int _protection;
	int _advice;
	void* _start;
	void* _end;
	unsigned long long _currentOffset;
	unsigned long long _size;
	long long _offset;
	void* _mappedAddress;
	unsigned long long _pageAlignedSize;
	unsigned long long _offsetSpace;

}
-(id)init;
-(BOOL)canAtomicallyAccessOffset:(unsigned long long)arg1 ;
-(void)dealloc;
@end
