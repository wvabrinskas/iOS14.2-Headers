/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _CSIRenditionBlockData : NSObject {

	unsigned _dataPixelFormat;
	int _pixelFormat;
	char* _data;
	unsigned _nrows;
	unsigned long long _rowbytes;
	AQ _imageBytes;
	char _name[128];
	unsigned char _imageBlockReleaseCount;
	unsigned long long _sourceRowbytes;
	unsigned long long _allocationSize;
	unsigned _allocateMemory : 1;
	unsigned _mmappedData : 1;

}
-(void)dealloc;
@end

