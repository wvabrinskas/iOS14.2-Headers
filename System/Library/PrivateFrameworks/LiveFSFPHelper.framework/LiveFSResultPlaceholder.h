/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSDictionary;

@interface LiveFSResultPlaceholder : NSObject {

	NSString* _path;
	NSString* _filename;
	NSNumber* _modTime;
	NSDictionary* _xattrs;

}

@property (retain) NSString * path;                    //@synthesize path=_path - In the implementation block
@property (retain) NSString * filename;                //@synthesize filename=_filename - In the implementation block
@property (retain) NSNumber * modTime;                 //@synthesize modTime=_modTime - In the implementation block
@property (retain) NSDictionary * xattrs;              //@synthesize xattrs=_xattrs - In the implementation block
-(void)setPath:(NSString *)arg1 ;
-(NSDictionary *)xattrs;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSNumber *)modTime;
-(NSString *)path;
-(void)setModTime:(NSNumber *)arg1 ;
-(void)setXattrs:(NSDictionary *)arg1 ;
@end

