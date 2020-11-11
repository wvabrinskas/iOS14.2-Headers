/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/WFRemoteFile.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDate, NSDictionary;

@interface WFDropboxMetadata : MTLModel <WFRemoteFile, WFNaming, MTLJSONSerializing, NSSecureCoding> {

	NSString* _name;
	NSString* _path;
	NSString* _identifier;
	NSString* _revision;
	NSString* _contentHash;
	NSNumber* _fileSize;
	NSDate* _clientModifiedDate;
	NSDate* _serverModifiedDate;
	NSString* _itemKind;

}

@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * itemKind;                                //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * revision;                         //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentHash;                      //@synthesize contentHash=_contentHash - In the implementation block
@property (nonatomic,readonly) NSNumber * fileSize;                              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) NSDate * clientModifiedDate;                      //@synthesize clientModifiedDate=_clientModifiedDate - In the implementation block
@property (nonatomic,readonly) NSDate * serverModifiedDate;                      //@synthesize serverModifiedDate=_serverModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)clientModifiedDateJSONTransformer;
+(id)serverModifiedDateJSONTransformer;
-(unsigned long long)hash;
-(NSString *)contentHash;
-(BOOL)isDirectory;
-(NSString *)revision;
-(NSString *)identifier;
-(NSString *)itemKind;
-(NSString *)name;
-(NSString *)wfName;
-(id)wfPath;
-(BOOL)isEqual:(id)arg1 ;
-(void)setItemKind:(NSString *)arg1 ;
-(NSNumber *)fileSize;
-(NSString *)path;
-(id)wfFileType;
-(BOOL)wfIsDirectory;
-(id)wfFileSize;
-(id)wfLastModifiedDate;
-(BOOL)wfIsEqualToFile:(id)arg1 ;
-(NSDate *)clientModifiedDate;
-(NSDate *)serverModifiedDate;
@end
