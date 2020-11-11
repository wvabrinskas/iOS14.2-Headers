/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@interface _NSDataCompressor : NSObject {

	SCD_Struct_NS14* _stream;
	int _operation;
	int _status;
	void* _originalDstBuffer;
	/*^block*/id _dataHandler;

}
-(id)initWithAlgorithm:(long long)arg1 operation:(int)arg2 dataHandler:(/*^block*/id)arg3 ;
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)finishProcessing;
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 flags:(int)arg3 ;
-(void)dealloc;
@end
