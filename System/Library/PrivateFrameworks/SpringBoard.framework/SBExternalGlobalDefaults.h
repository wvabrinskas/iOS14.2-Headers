/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString, NSArray;

@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSString * locale; 
@property (nonatomic,retain) NSArray * languages; 
@property (nonatomic,retain) NSArray * keyboards; 
+(BOOL)__useDynamicMethodResolution;
-(NSString *)locale;
-(id)init;
-(void)setLocale:(NSString *)arg1 ;
-(void)setKeyboards:(NSArray *)arg1 ;
-(NSArray *)languages;
-(NSArray *)keyboards;
-(void)setLanguages:(NSArray *)arg1 ;
-(void)removeFormattedPhoneNumberFromGlobalPreferences;
-(void)flushExternalCaches;
@end
