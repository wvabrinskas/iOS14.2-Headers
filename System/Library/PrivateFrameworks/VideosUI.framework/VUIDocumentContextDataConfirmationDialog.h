/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataConfirmationDialog : VUIDocumentContextData {

	NSString* _confirmationDialogType;
	NSString* _name;

}

@property (nonatomic,copy) NSString * confirmationDialogType;              //@synthesize confirmationDialogType=_confirmationDialogType - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
-(id)jsonData;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setConfirmationDialogType:(NSString *)arg1 ;
-(NSString *)confirmationDialogType;
@end

