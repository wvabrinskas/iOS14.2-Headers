/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBGraphic : NSObject
+(id)readGraphicWithDictionary:(id)arg1 state:(id)arg2 ;
+(void)readNotesWithDictionary:(id)arg1 state:(id)arg2 ;
+(void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3 ;
+(void)readGraphicsInChart:(id)arg1 state:(id)arg2 ;
+(id)readMainChartWithState:(id)arg1 ;
+(void)readOle:(id)arg1 xlGraphicsInfo:(XlGraphicsInfo*)arg2 state:(id)arg3 ;
+(void)readImage:(id)arg1 xlGraphicsInfo:(XlGraphicsInfo*)arg2 state:(id)arg3 ;
+(int)objectTypeForShape:(id)arg1 ;
+(void)readGraphicsWithState:(id)arg1 ;
@end

