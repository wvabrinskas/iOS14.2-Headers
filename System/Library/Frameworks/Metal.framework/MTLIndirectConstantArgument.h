/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLArgumentInternal.h>

@interface MTLIndirectConstantArgument : MTLArgumentInternal {

	unsigned short _dataType;
	unsigned short _alignment;
	unsigned short _dataSize;
	unsigned long long _pixelFormat;
	unsigned long long _aluType;

}
-(unsigned long long)indirectConstantDataSize;
-(unsigned long long)indirectConstantDataType;
-(unsigned long long)bufferPixelFormat;
-(unsigned long long)bufferALUType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)indirectConstantAlignment;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 dataType:(unsigned long long)arg6 pixelFormat:(unsigned long long)arg7 aluType:(unsigned long long)arg8 dataSize:(unsigned long long)arg9 alignment:(unsigned long long)arg10 ;
-(void)dealloc;
@end

