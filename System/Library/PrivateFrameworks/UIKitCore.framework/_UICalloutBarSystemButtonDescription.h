/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIImage;

@interface _UICalloutBarSystemButtonDescription : NSObject {

	NSString* m_title;
	UIImage* m_image;
	SEL m_action;
	int m_type;
	BOOL m_requiresAuthenticatedTouch;
	/*^block*/id m_configurationBlock;

}

@property (nonatomic,readonly) SEL action; 
@property (nonatomic,copy) id configurationBlock; 
+(id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 requiresAuthenticatedTouch:(BOOL)arg4 ;
+(id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
+(id)buttonDescriptionWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(id)initWithTitle:(id)arg1 orImage:(id)arg2 action:(SEL)arg3 type:(int)arg4 requiresAuthenticatedTouch:(BOOL)arg5 ;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(id)materializeButtonInView:(id)arg1 ;
-(SEL)action;
@end

