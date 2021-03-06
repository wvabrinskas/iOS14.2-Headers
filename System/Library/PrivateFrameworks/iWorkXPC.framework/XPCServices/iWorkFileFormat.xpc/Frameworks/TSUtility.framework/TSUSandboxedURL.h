/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSUtility/TSUURLWrapper.h>

@class NSURL, NSString;

@interface TSUSandboxedURL : NSObject <NSCopying, TSUURLWrapper> {

	NSURL* _URL;
	BOOL _URLStartedAccessingSecurityScopedResource;

}

@property (readonly) BOOL isUbiquitous; 
@property (readonly) BOOL isDocumentUploaded; 
@property (readonly) BOOL isQuotaErrorPreventingUpload; 
@property (readonly) NSURL * URL; 
@property (readonly) BOOL hasSandboxAccess; 
@property (readonly) TSUSandboxedURL * sandboxedURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(BOOL)isUbiquitous;
-(id)normalize;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)dealloc;
-(BOOL)hasUnresolvedConflicts;
-(id)originalSandboxedURLForNormalizing;
-(BOOL)hasSandboxAccess;
-(TSUSandboxedURL *)sandboxedURL;
-(BOOL)isUbiquitousPromised:(BOOL)arg1 ;
-(BOOL)isUbiquitous:(out BOOL*)arg1 promised:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isDocumentUploaded:(out BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)hasUnresolvedConflicts:(out BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)isShared:(out BOOL*)arg1 logContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)isUbiquitous:(out BOOL*)arg1 error:(id*)arg2 ;
-(BOOL)isDocumentUploaded;
-(BOOL)isQuotaErrorPreventingUpload;
-(id)fileProviderBookmarkableStringAndReturnError:(id*)arg1 ;
@end

