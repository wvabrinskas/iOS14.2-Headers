/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface CKDDirectoryPurger : NSObject {

	/*^block*/id _shouldSkipFileBlock;
	/*^block*/id _shouldRemoveFileBlock;
	NSArray* _paths;

}

@property (nonatomic,retain) NSArray * paths;                     //@synthesize paths=_paths - In the implementation block
@property (nonatomic,copy) id shouldSkipFileBlock;                //@synthesize shouldSkipFileBlock=_shouldSkipFileBlock - In the implementation block
@property (nonatomic,copy) id shouldRemoveFileBlock;              //@synthesize shouldRemoveFileBlock=_shouldRemoveFileBlock - In the implementation block
+(void)purgeDirectoryAtPath:(id)arg1 ;
-(void)purge;
-(NSArray *)paths;
-(void)setPaths:(NSArray *)arg1 ;
-(id)shouldSkipFileBlock;
-(id)shouldRemoveFileBlock;
-(void)setShouldRemoveFileBlock:(id)arg1 ;
-(id)initWithPaths:(id)arg1 ;
-(void)setShouldSkipFileBlock:(id)arg1 ;
@end
