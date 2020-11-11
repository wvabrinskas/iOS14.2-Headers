/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DEReader.h>

@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader> {

	NSURL* _src;
	NSFileHandle* _file;

}

@property (nonatomic,retain) NSURL * src;                      //@synthesize src=_src - In the implementation block
@property (nonatomic,retain) NSFileHandle * file;              //@synthesize file=_file - In the implementation block
-(NSFileHandle *)file;
-(NSURL *)src;
-(void)close;
-(id)initWithURL:(id)arg1 ;
-(id)init;
-(void)setFile:(NSFileHandle *)arg1 ;
-(id)readData;
-(void)setSrc:(NSURL *)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)dealloc;
@end
