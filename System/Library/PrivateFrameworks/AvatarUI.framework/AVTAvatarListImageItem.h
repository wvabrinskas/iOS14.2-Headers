/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AVTAvatarListItem.h>

@class UIImage, NSString;

@interface AVTAvatarListImageItem : NSObject <AVTAvatarListItem> {

	UIImage* _image;
	NSString* _title;

}

@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)hash;
-(UIImage *)image;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(id)initWithImage:(id)arg1 title:(id)arg2 ;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 imageHandler:(/*^block*/id)arg2 viewHandler:(/*^block*/id)arg3 ;
-(void)downcastWithRecordHandler:(/*^block*/id)arg1 viewHandler:(/*^block*/id)arg2 ;
@end

