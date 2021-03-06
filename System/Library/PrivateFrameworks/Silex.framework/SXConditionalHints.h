/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXConditionalHints.h>

@protocol SXConditionalHints <NSObject>
@property (nonatomic,readonly) long long autoplacement; 
@property (nonatomic,readonly) long long components; 
@property (nonatomic,readonly) long long componentLayouts; 
@property (nonatomic,readonly) long long componentStyles; 
@property (nonatomic,readonly) long long componentTextStyles; 
@property (nonatomic,readonly) long long documentStyle; 
@property (nonatomic,readonly) long long textStyles; 
@required
-(long long)components;
-(long long)documentStyle;
-(long long)componentStyles;
-(long long)componentTextStyles;
-(long long)componentLayouts;
-(long long)textStyles;
-(long long)autoplacement;

@end


@class NSString;

@interface SXConditionalHints : SXJSONObject <SXConditionalHints>

@property (nonatomic,readonly) long long autoplacement; 
@property (nonatomic,readonly) long long components; 
@property (nonatomic,readonly) long long componentLayouts; 
@property (nonatomic,readonly) long long componentStyles; 
@property (nonatomic,readonly) long long componentTextStyles; 
@property (nonatomic,readonly) long long documentStyle; 
@property (nonatomic,readonly) long long textStyles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)textStyles;
-(long long)documentStyle;
-(long long)componentTextStyles;
-(long long)componentStyles;
-(long long)componentLayouts;
-(long long)components;
-(long long)autoplacement;
-(long long)ternaryValueForJSONValue:(id)arg1 type:(int)arg2 ;
-(long long)autoplacementWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)componentsWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)componentLayoutsWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)componentStylesWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)componentTextStylesWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)documentStyleWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)textStylesWithValue:(id)arg1 withType:(int)arg2 ;
@end

