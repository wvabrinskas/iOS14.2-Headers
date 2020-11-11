/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSData, NSObject, AVURLAsset, LPAudioProperties, NSURL, NSString, AVAsset;

@interface LPAudio : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding> {

	NSData* _data;
	NSObject*<OS_dispatch_queue> _mediaLoadingQueue;
	AVURLAsset* _asset;
	LPAudioProperties* _properties;
	NSURL* _fileURL;
	NSURL* _streamingURL;
	NSString* _MIMEType;

}

@property (nonatomic,readonly) unsigned long long _encodedSize; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * MIMEType;                         //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) AVAsset * _asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * streamingURL;                      //@synthesize streamingURL=_streamingURL - In the implementation block
@property (nonatomic,copy,readonly) LPAudioProperties * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(AVAsset *)_asset;
-(NSURL *)fileURL;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithAudio:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSString *)MIMEType;
-(LPAudioProperties *)properties;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)data;
-(id)initWithStreamingURL:(id)arg1 properties:(id)arg2 ;
-(NSURL *)streamingURL;
-(id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldEncodeData;
-(void)_mapDataFromFileURL;
-(unsigned long long)_encodedSize;
@end
