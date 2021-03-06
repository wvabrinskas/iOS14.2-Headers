/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface UIKBDerivedKeyboard : NSObject {

	BOOL _addsSupplementaryControlKeys;
	NSString* _derivedKBStarPrefixName;
	CGSize _keyboardSize;

}

@property (assign,nonatomic) CGSize keyboardSize;                            //@synthesize keyboardSize=_keyboardSize - In the implementation block
@property (nonatomic,copy) NSString * derivedKBStarPrefixName;               //@synthesize derivedKBStarPrefixName=_derivedKBStarPrefixName - In the implementation block
@property (assign,nonatomic) BOOL addsSupplementaryControlKeys;              //@synthesize addsSupplementaryControlKeys=_addsSupplementaryControlKeys - In the implementation block
-(BOOL)addsSupplementaryControlKeys;
-(CGSize)keyboardSize;
-(void)setKeyboardSize:(CGSize)arg1 ;
-(void)setDerivedKBStarPrefixName:(NSString *)arg1 ;
-(void)setAddsSupplementaryControlKeys:(BOOL)arg1 ;
-(NSString *)derivedKBStarPrefixName;
@end

