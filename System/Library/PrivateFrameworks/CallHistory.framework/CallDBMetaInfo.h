/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL;

@interface CallDBMetaInfo : NSObject {

	NSURL* _dbInfoPrefFile;

}

@property (retain) NSURL * dbInfoPrefFile;              //@synthesize dbInfoPrefFile=_dbInfoPrefFile - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)setDbInfoPrefFile:(NSURL *)arg1 ;
-(NSURL *)dbInfoPrefFile;
-(BOOL)validateInfo:(BOOL)arg1 ;
-(long long)readDatabaseVersion:(BOOL)arg1 ;
-(void)writeDatabaseVersion:(long long)arg1 isTemp:(BOOL)arg2 ;
@end
