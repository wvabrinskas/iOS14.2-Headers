/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSupport/_PASSqliteCollectionsCursor.h>

@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor
+(const char*)sqliteCreateTableStatement;
+(BOOL)hasRowId;
-(unsigned long long)outputRowId;
-(BOOL)currentIndexEof;
-(unsigned long long)currentIndexedRowId;
@end
