/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLCacheVersionedFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLCacheBasicFileIdentifier;

@interface QLCacheBasicVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (readonly) QLCacheBasicFileIdentifier * fileIdentifier; 
-(sqlite3_stmtRef)statementToInsertIntoDatabase:(id)arg1 ;
-(sqlite3_stmtRef)statementToUpdateRecordWithCacheIdentifier:(unsigned long long)arg1 inDatabase:(id)arg2 ;
-(id)initWithSteppedStatement:(sqlite3_stmtRef)arg1 database:(id)arg2 ;
-(id)initWithFileIdentifier:(id)arg1 version:(id)arg2 ;
-(id)initWithThumbnailRequest:(id)arg1 ;
@end
