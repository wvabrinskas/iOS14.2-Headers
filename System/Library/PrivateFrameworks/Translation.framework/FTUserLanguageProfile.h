/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTUserLanguageProfile : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const UserLanguageProfile* _root;

}

@property (nonatomic,readonly) NSData * profile_blob; 
@property (nonatomic,readonly) NSString * profile_blob_version; 
@property (nonatomic,readonly) NSString * profile_checksum; 
-(id)initWithFlatbuffData:(id)arg1 root:(const UserLanguageProfile*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::UserLanguageProfile>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const UserLanguageProfile*)arg2 ;
-(NSData *)profile_blob;
-(void)profile_blob:(/*^block*/id)arg1 ;
-(NSString *)profile_blob_version;
-(NSString *)profile_checksum;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

