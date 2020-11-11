/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXDOMModifying.h>

@class SXLineBalancingSettings, NSString;

@interface SXLineBalancingComponentTextStyleModifier : NSObject <SXDOMModifying> {

	SXLineBalancingSettings* _settings;

}

@property (nonatomic,readonly) SXLineBalancingSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSettings:(id)arg1 ;
-(void)modifyDOM:(id)arg1 context:(id)arg2 ;
-(void)enableLineBalancingForComponentTextStyleWithIdentifier:(id)arg1 DOM:(id)arg2 context:(id)arg3 ;
-(SXLineBalancingSettings *)settings;
@end
