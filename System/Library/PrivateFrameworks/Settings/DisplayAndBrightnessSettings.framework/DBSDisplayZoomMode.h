/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
@class NSString;

@interface DBSDisplayZoomMode : NSObject {

	unsigned long long _displayZoomOption;
	NSString* _localizedName;
	CGSize _size;

}

@property (nonatomic,readonly) unsigned long long displayZoomOption;              //@synthesize displayZoomOption=_displayZoomOption - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                          //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) CGSize size;                                       //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(NSString *)localizedName;
-(unsigned long long)displayZoomOption;
-(id)initWithDisplayZoomOption:(unsigned long long)arg1 localizedName:(id)arg2 size:(CGSize)arg3 ;
@end

