/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SMBSearch/SMBSearch-Structs.h>
@interface wspFreeCursorIn : NSObject {

	SCD_Struct_ws1 msghdr;
	unsigned _cursorToFree;

}

@property (assign) unsigned cursorToFree;              //@synthesize cursorToFree=_cursorToFree - In the implementation block
-(id)initWithCursor:(unsigned)arg1 ;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(unsigned)cursorToFree;
-(void)setCursorToFree:(unsigned)arg1 ;
@end
