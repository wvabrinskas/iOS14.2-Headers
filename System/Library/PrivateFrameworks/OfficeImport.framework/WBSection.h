/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBSection : NSObject
+(void)readHeaderFrom:(id)arg1 type:(int)arg2 index:(int)arg3 header:(id)arg4 ;
+(void)mapPrinterSettings:(WrdSectionProperties*)arg1 toSection:(id)arg2 ;
+(void)mapSectionProperties:(WrdSectionProperties*)arg1 toSection:(id)arg2 ;
+(void)readFrom:(id)arg1 textRun:(WrdSectionTextRun*)arg2 document:(id)arg3 index:(int)arg4 section:(id)arg5 ;
+(void)mapSection:(id)arg1 toSectionProperties:(WrdSectionProperties*)arg2 ;
@end

