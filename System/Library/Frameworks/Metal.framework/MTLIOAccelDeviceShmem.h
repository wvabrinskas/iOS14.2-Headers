/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Metal/Metal-Structs.h>
@class MTLIOAccelDevice;

@interface MTLIOAccelDeviceShmem : NSObject {

	MTLIOAccelDeviceShmemPrivate* _priv;
	MTLIOAccelDevice* _device;
	unsigned _shmemID;
	unsigned _shmemSize;
	void* _virtualAddress;
	BOOL purgeable;

}

@property (readonly) void* virtualAddress;              //@synthesize virtualAddress=_virtualAddress - In the implementation block
@property (readonly) unsigned shmemID;                  //@synthesize shmemID=_shmemID - In the implementation block
@property (readonly) unsigned shmemSize;                //@synthesize shmemSize=_shmemSize - In the implementation block
-(unsigned)shmemSize;
-(id)initWithDevice:(id)arg1 shmemSize:(unsigned)arg2 ;
-(unsigned)shmemID;
-(void)dealloc;
-(void*)virtualAddress;
@end

