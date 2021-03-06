/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CCUIMenuModuleItem : NSObject {

	BOOL _busy;
	BOOL _selected;
	BOOL _placeholder;
	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,getter=isBusy,nonatomic) BOOL busy;                            //@synthesize busy=_busy - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
-(BOOL)isBusy;
-(void)setBusy:(BOOL)arg1 ;
-(BOOL)isPlaceholder;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(unsigned long long)hash;
-(NSString *)subtitle;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)performAction;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)handler;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

