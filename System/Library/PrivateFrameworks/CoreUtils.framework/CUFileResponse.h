/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUDictionaryCodable.h>

@class NSArray;

@interface CUFileResponse : NSObject <CUDictionaryCodable> {

	unsigned _flags;
	NSArray* _fileItems;

}

@property (nonatomic,copy) NSArray * fileItems;              //@synthesize fileItems=_fileItems - In the implementation block
@property (assign,nonatomic) unsigned flags;                 //@synthesize flags=_flags - In the implementation block
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)encodeWithDictionary:(id)arg1 ;
-(void)setFileItems:(NSArray *)arg1 ;
-(id)description;
-(NSArray *)fileItems;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
@end

