/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, OADBaseStyles, OADDrawableDefaults;

@interface OADTheme : NSObject {

	NSString* mName;
	OADBaseStyles* mBaseStyles;
	OADDrawableDefaults* mDrawableDefaults;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) OADBaseStyles * baseStyles; 
@property (nonatomic,readonly) OADDrawableDefaults * drawableDefaults; 
-(id)init;
-(BOOL)isEmpty;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(OADBaseStyles *)baseStyles;
-(OADDrawableDefaults *)drawableDefaults;
-(void)validateTheme;
-(void)setBaseStyles:(OADBaseStyles *)arg1 ;
@end

