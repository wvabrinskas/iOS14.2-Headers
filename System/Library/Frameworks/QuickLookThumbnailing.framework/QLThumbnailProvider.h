/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface QLThumbnailProvider : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)provideThumbnailForFileRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

