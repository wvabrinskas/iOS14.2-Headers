/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface IMASticker : NSObject {

	NSURL* _fileURL;
	NSString* _stickerName;
	NSString* _accessibilityLabel;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerName;                     //@synthesize stickerName=_stickerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(double)screenScale;
-(NSString *)accessibilityLabel;
-(NSURL *)fileURL;
-(NSString *)stickerName;
-(id)initWithFileURL:(id)arg1 stickerName:(id)arg2 accessibilityLabel:(id)arg3 ;
@end
