/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate, WCUserInfo, NSString, NSNumber, NSURL, NSData;

@interface WCSessionFile : NSObject <NSSecureCoding> {

	NSDictionary* _metadata;
	NSDate* _creationDate;
	WCUserInfo* _userInfoStorage;
	NSString* _relativePath;
	NSString* _fileIdentifier;
	NSNumber* _fileSize;
	NSURL* _fileURL;

}

@property (nonatomic,copy) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) WCUserInfo * userInfoStorage;              //@synthesize userInfoStorage=_userInfoStorage - In the implementation block
@property (nonatomic,copy) NSString * relativePath;                     //@synthesize relativePath=_relativePath - In the implementation block
@property (copy) NSString * fileIdentifier;                             //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * fileSize;                         //@synthesize fileSize=_fileSize - In the implementation block
@property (copy,readonly) NSData * userInfoData; 
@property (nonatomic,retain) NSURL * fileURL;                           //@synthesize fileURL=_fileURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)fileURL;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(void)setFileIdentifier:(NSString *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)relativePath;
-(long long)compare:(id)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDictionary *)metadata;
-(id)description;
-(void)setRelativePath:(NSString *)arg1 ;
-(NSData *)userInfoData;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)fileIdentifier;
-(NSNumber *)fileSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSDate *)creationDate;
-(BOOL)updateUserInfoData:(id)arg1 error:(id*)arg2 ;
-(WCUserInfo *)userInfoStorage;
-(BOOL)updateUserInfo:(id)arg1 error:(id*)arg2 ;
-(void)setUserInfoStorage:(WCUserInfo *)arg1 ;
-(BOOL)verifyMetadata;
-(id)initWithIdentifier:(id)arg1 fileURL:(id)arg2 relativePath:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 relativePath:(id)arg2 ;
@end
