/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLJournalEntryPayloadID.h>

@class NSUUID, NSString;

@interface PLNSUUIDJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID> {

	NSUUID* _payloadID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)payloadUUIDData;
-(unsigned long long)hash;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(id)payloadIDString;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUIDString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

