/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Metal/Metal-Structs.h>
@class NSData;

@interface MTLLoadedFile : NSObject {

	NSData* _fileData;
	LoaderGlobalState* _parent;
	long long _modifiedTimeWhenCached;
	FileIdentifier _identity;
	BOOL _isCached;

}

@property (readonly) NSData * contents;              //@synthesize fileData=_fileData - In the implementation block
-(NSData *)contents;
-(id)initWithData:(id)arg1 parent:(LoaderGlobalState*)arg2 ;
-(void)dealloc;
@end

