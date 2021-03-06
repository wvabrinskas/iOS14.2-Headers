/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, JFXEffect;

@interface CFXEffect : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _localizedTitle;
	JFXEffect* _jtEffect;

}

@property (nonatomic,readonly) BOOL isNone; 
@property (nonatomic,retain) JFXEffect * jtEffect;                          //@synthesize jtEffect=_jtEffect - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(void)setupFactoryDelegate;
+(void)initEffectRegistry;
+(id)effectIdentifiersForEffectType:(id)arg1 ;
+(void)preWarmShaderCache;
+(id)effectWithIdentifier:(id)arg1 forEffectType:(id)arg2 ;
+(id)effectWithJTEffect:(id)arg1 ;
-(BOOL)isNone;
-(NSString *)localizedTitle;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(JFXEffect *)jtEffect;
-(id)initWithJTEffect:(id)arg1 ;
-(void)setJtEffect:(JFXEffect *)arg1 ;
@end

