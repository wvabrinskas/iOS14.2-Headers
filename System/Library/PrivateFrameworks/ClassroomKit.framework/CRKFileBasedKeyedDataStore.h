/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKKeyedDataStoreProtocol.h>

@class NSURL, NSFileManager, NSString;

@interface CRKFileBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol> {

	NSURL* _directoryURL;
	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSURL * directoryURL;                     //@synthesize directoryURL=_directoryURL - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)URLForKey:(id)arg1 ;
-(id)init;
-(id)dataForKey:(id)arg1 error:(id*)arg2 ;
-(NSURL *)directoryURL;
-(NSFileManager *)fileManager;
-(id)initWithDirectoryURL:(id)arg1 ;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeDataForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isKeyValid:(id)arg1 ;
-(BOOL)removeAllDataWithError:(id*)arg1 ;
@end

