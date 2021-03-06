/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPEncoder.h>

@class TSPMemoryComponentWriteChannel, NSString;

@interface TSPMemoryEncoder : NSObject <TSPEncoder> {

	BOOL _alwaysDefragmentData;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> metadataDispatchData; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> rootObjectComponentDispatchData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)metadataData;
-(id)encodedData;
-(id)initWithAlwaysDefragmentData:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_data>)metadataDispatchData;
-(NSObject*<OS_dispatch_data>)rootObjectComponentDispatchData;
-(id)newRootObjectComponentWriteChannel;
-(id)newMetadataComponentWriteChannel;
-(id)rootObjectComponentData;
@end

