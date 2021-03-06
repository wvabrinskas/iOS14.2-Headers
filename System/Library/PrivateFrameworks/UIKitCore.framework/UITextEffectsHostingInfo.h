/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UICanvasBasedObject.h>

@class UIWindowScene, NSDictionary, NSString;

@interface UITextEffectsHostingInfo : NSObject <_UICanvasBasedObject> {

	unsigned long long _hostedUseCount;
	UIWindowScene* _scene;
	NSDictionary* _perSceneOptions;

}

@property (nonatomic,retain) NSDictionary * perSceneOptions;              //@synthesize perSceneOptions=_perSceneOptions - In the implementation block
@property (nonatomic,retain) UIWindowScene * scene;                       //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) BOOL useHostedInstance; 
@property (readonly) UIWindowScene * _intendedCanvas; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostingInfoForWindowScene:(id)arg1 ;
-(BOOL)useHostedInstance;
-(UIWindowScene *)_intendedCanvas;
-(NSDictionary *)_options;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(NSDictionary *)perSceneOptions;
-(void)setUseHostedInstance:(BOOL)arg1 ;
-(void)setScene:(UIWindowScene *)arg1 ;
-(UIWindowScene *)scene;
-(void)setPerSceneOptions:(NSDictionary *)arg1 ;
@end

