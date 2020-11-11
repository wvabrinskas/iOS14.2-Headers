/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WorkflowUIServices/WorkflowUIServices-Structs.h>
@class INIntent, NSString;

@interface WFWidgetConfigurationOptions : NSObject {

	INIntent* _intent;
	NSString* _widgetExtensionBundleIdentifier;
	unsigned long long _sizeClass;
	NSString* _widgetDisplayName;
	NSString* _widgetDescription;
	CGRect _initialConfigurationCardViewFrame;

}

@property (nonatomic,retain) INIntent * intent;                                       //@synthesize intent=_intent - In the implementation block
@property (nonatomic,retain) NSString * widgetExtensionBundleIdentifier;              //@synthesize widgetExtensionBundleIdentifier=_widgetExtensionBundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long sizeClass;                            //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) CGRect initialConfigurationCardViewFrame;                //@synthesize initialConfigurationCardViewFrame=_initialConfigurationCardViewFrame - In the implementation block
@property (nonatomic,copy) NSString * widgetDisplayName;                              //@synthesize widgetDisplayName=_widgetDisplayName - In the implementation block
@property (nonatomic,copy) NSString * widgetDescription;                              //@synthesize widgetDescription=_widgetDescription - In the implementation block
-(id)init;
-(unsigned long long)sizeClass;
-(INIntent *)intent;
-(void)setWidgetDisplayName:(NSString *)arg1 ;
-(void)setWidgetDescription:(NSString *)arg1 ;
-(void)setSizeClass:(unsigned long long)arg1 ;
-(void)setIntent:(INIntent *)arg1 ;
-(NSString *)widgetDisplayName;
-(NSString *)widgetDescription;
-(NSString *)widgetExtensionBundleIdentifier;
-(void)setWidgetExtensionBundleIdentifier:(NSString *)arg1 ;
-(CGRect)initialConfigurationCardViewFrame;
-(void)setInitialConfigurationCardViewFrame:(CGRect)arg1 ;
@end
