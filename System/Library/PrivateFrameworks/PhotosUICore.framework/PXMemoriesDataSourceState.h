/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXMemoriesDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _memories;
	NSDictionary* _infosByMemory;

}

@property (nonatomic,readonly) PHFetchResult * memories;                  //@synthesize memories=_memories - In the implementation block
@property (nonatomic,readonly) NSDictionary * infosByMemory;              //@synthesize infosByMemory=_infosByMemory - In the implementation block
-(NSDictionary *)infosByMemory;
-(id)initWithMemories:(id)arg1 infosByMemory:(id)arg2 ;
-(id)stateUpdatedWithChange:(id)arg1 outMemoriesChangeDetails:(out id*)arg2 ;
-(PHFetchResult *)memories;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
