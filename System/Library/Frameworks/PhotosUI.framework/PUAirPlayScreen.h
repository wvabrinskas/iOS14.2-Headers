/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class UIScreen, NSString, UIViewController, UIWindow;

@interface PUAirPlayScreen : NSObject <PXSettingsKeyObserver> {

	UIScreen* _screen;
	NSString* _identifier;
	unsigned long long _type;
	UIViewController* _rootViewController;
	UIWindow* __window;
	CGSize _size;

}

@property (setter=_setScreen:,nonatomic,retain) UIScreen * screen;                      //@synthesize screen=_screen - In the implementation block
@property (setter=_setIdentifier:,nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,setter=_setType:,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (setter=_setWindow:,nonatomic,retain) UIWindow * _window;                     //@synthesize _window=__window - In the implementation block
@property (nonatomic,readonly) NSString * _typeName; 
@property (nonatomic,readonly) unsigned long long placeholderType; 
@property (nonatomic,retain) UIViewController * rootViewController;                     //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRootViewController:(UIViewController *)arg1 ;
-(UIViewController *)rootViewController;
-(id)init;
-(unsigned long long)hash;
-(void)_setSize:(CGSize)arg1 ;
-(NSString *)debugDescription;
-(UIWindow *)_window;
-(NSString *)identifier;
-(UIScreen *)screen;
-(CGSize)size;
-(id)initWithScreen:(id)arg1 ;
-(NSString *)description;
-(void)_setIdentifier:(id)arg1 ;
-(NSString *)_typeName;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setWindow:(id)arg1 ;
-(unsigned long long)type;
-(void)_updateWindow;
-(BOOL)isEqualToAirPlayScreen:(id)arg1 ;
-(void)_setType:(unsigned long long)arg1 ;
-(void)_setScreen:(id)arg1 ;
-(unsigned long long)placeholderType;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)dealloc;
@end
