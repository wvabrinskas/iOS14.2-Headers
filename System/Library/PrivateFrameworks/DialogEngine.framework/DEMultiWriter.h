/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DEWriter.h>

@class NSMutableData, NSArray;

@interface DEMultiWriter : NSObject <DEWriter> {

	NSMutableData* _data;
	NSArray* _writers;

}

@property (nonatomic,retain) NSArray * writers;                 //@synthesize writers=_writers - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
-(void)close;
-(void)setData:(NSMutableData *)arg1 ;
-(id)init;
-(NSArray *)writers;
-(NSMutableData *)data;
-(id)initWithWriters:(id)arg1 ;
-(void)setWriters:(NSArray *)arg1 ;
-(void)writeData:(id)arg1 ;
@end
