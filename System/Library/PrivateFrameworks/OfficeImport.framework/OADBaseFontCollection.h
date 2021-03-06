/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface OADBaseFontCollection : NSObject {

	NSString* _latinFont;
	NSString* _eastAsianFont;
	NSString* _complexScriptFont;

}

@property (nonatomic,copy) NSString * latinFont;                      //@synthesize latinFont=_latinFont - In the implementation block
@property (nonatomic,copy) NSString * eastAsianFont;                  //@synthesize eastAsianFont=_eastAsianFont - In the implementation block
@property (nonatomic,copy) NSString * complexScriptFont;              //@synthesize complexScriptFont=_complexScriptFont - In the implementation block
-(BOOL)isEmpty;
-(NSString *)latinFont;
-(id)baseFontForId:(int)arg1 ;
-(NSString *)eastAsianFont;
-(void)setLatinFont:(NSString *)arg1 ;
-(void)setEastAsianFont:(NSString *)arg1 ;
-(NSString *)complexScriptFont;
-(void)setComplexScriptFont:(NSString *)arg1 ;
-(void)setBaseFont:(id)arg1 forId:(int)arg2 ;
-(BOOL)isEqualToBaseFontCollection:(id)arg1 ;
@end

