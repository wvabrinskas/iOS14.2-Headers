/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface SUControlAppearance : NSObject <NSCopying> {

	NSMutableDictionary* _images;
	NSMutableDictionary* _textAttributes;
	NSMutableDictionary* _titlePositions;

}

@property (nonatomic,readonly) long long numberOfImages; 
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)textAttributesForState:(unsigned long long)arg1 ;
-(UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(long long)numberOfImages;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)styleBarButtonItem:(id)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)enumerateImagesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateTextAttributesUsingBlock:(/*^block*/id)arg1 ;
-(id)imageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)_copyKeyForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)enumerateTitlePositionsUsingBlock:(/*^block*/id)arg1 ;
-(void)styleButton:(id)arg1 ;
@end

