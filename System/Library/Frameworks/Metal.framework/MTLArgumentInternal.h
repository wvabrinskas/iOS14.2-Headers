/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLArgument.h>

@class NSString, MTLType, MTLStructType;

@interface MTLArgumentInternal : MTLArgument {

	NSString* _name;
	unsigned long long _type;
	unsigned long long _access;
	unsigned long long _index;
	BOOL _active;
	unsigned long long _arrayLength;
	MTLType* _typeInfo;

}

@property (readonly) unsigned long long bufferPixelFormat; 
@property (readonly) unsigned long long bufferALUType; 
@property (readonly) MTLStructType * structType; 
-(id)bufferPointerType;
-(unsigned long long)bufferAlignment;
-(unsigned long long)threadgroupMemoryDataSize;
-(unsigned long long)indirectConstantDataSize;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(BOOL)arg5 arrayLength:(unsigned long long)arg6 ;
-(unsigned long long)indirectConstantDataType;
-(unsigned long long)bufferDataSize;
-(unsigned long long)arrayLength;
-(unsigned long long)textureType;
-(unsigned long long)bufferDataType;
-(unsigned long long)access;
-(MTLStructType *)structType;
-(id)bufferIndirectArgumentType;
-(unsigned long long)threadgroupMemoryAlignment;
-(id)bufferStructType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)indirectConstantAlignment;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(BOOL)arg5 arrayLength:(unsigned long long)arg6 typeDescription:(id)arg7 ;
-(id)name;
-(id)description;
-(unsigned long long)textureDataType;
-(BOOL)isActive;
-(id)dataTypeDescription;
-(unsigned long long)index;
-(unsigned long long)type;
-(void)dealloc;
@end

