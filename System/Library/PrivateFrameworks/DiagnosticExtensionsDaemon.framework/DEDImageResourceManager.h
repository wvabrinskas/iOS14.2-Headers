/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ResourceLoader, NSMutableDictionary;

@interface DEDImageResourceManager : NSObject {

	ResourceLoader* _loader;
	NSMutableDictionary* _imageCache;

}

@property (retain) ResourceLoader * loader;                       //@synthesize loader=_loader - In the implementation block
@property (retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedInstance;
-(ResourceLoader *)loader;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)imageCache;
-(void)setLoader:(ResourceLoader *)arg1 ;
-(void)asynchronousDataFromURL:(id)arg1 key:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)cachedImageFromKey:(id)arg1 ;
@end
