/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray, NSString, NSData;

@interface CRKDownloadResourcesRequest : CATTaskRequest {

	BOOL _openAfterDownloadCompletes;
	DMFControlGroupIdentifier* _courseIdentifier;
	NSArray* _resources;
	NSString* _resourcesDescription;
	NSData* _previewImageData;
	NSString* _sourceBundleIdentifier;

}

@property (nonatomic,copy) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * resources;                                       //@synthesize resources=_resources - In the implementation block
@property (nonatomic,copy) NSString * resourcesDescription;                           //@synthesize resourcesDescription=_resourcesDescription - In the implementation block
@property (nonatomic,retain) NSData * previewImageData;                               //@synthesize previewImageData=_previewImageData - In the implementation block
@property (assign,nonatomic) BOOL openAfterDownloadCompletes;                         //@synthesize openAfterDownloadCompletes=_openAfterDownloadCompletes - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleIdentifier;                         //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(NSArray *)resources;
-(NSString *)sourceBundleIdentifier;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(void)setResources:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)resourcesDescription;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(BOOL)openAfterDownloadCompletes;
-(void)setResourcesDescription:(NSString *)arg1 ;
-(void)setOpenAfterDownloadCompletes:(BOOL)arg1 ;
@end
