/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDescriptor, SUOperationProgress, SUDownloadOptions, SUDownloadMetadata;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying> {

	SUDescriptor* _descriptor;
	SUOperationProgress* _progress;
	SUDownloadOptions* _downloadOptions;
	SUDownloadMetadata* _metadata;

}

@property (nonatomic,retain) SUDescriptor * descriptor;                        //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) SUOperationProgress * progress;                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) SUDownloadOptions * downloadOptions;              //@synthesize downloadOptions=_downloadOptions - In the implementation block
@property (nonatomic,retain) SUDownloadMetadata * metadata;                    //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDescriptor:(SUDescriptor *)arg1 ;
-(id)init;
-(SUDescriptor *)descriptor;
-(void)setMetadata:(SUDownloadMetadata *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SUDownloadMetadata *)metadata;
-(SUOperationProgress *)progress;
-(id)description;
-(void)setDownloadOptions:(SUDownloadOptions *)arg1 ;
-(SUDownloadOptions *)downloadOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)setProgress:(SUOperationProgress *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)allowCellularDownload;
-(unsigned long long)totalSpaceConsumed;
-(BOOL)isValidDownload;
@end
