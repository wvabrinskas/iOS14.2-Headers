/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFDimmableButton.h>

@class NSString, UIImage;

@interface MFConfirmationButton : MFDimmableButton {

	BOOL _hasPresentedConfirmation;
	unsigned long long _confirmationType;
	unsigned long long _confirmationSelectionMode;
	NSString* _confirmationMessage;
	NSString* _confirmationLabel;
	UIImage* _confirmationIcon;
	/*^block*/id _handlerBlock;

}

@property (nonatomic,copy) id handlerBlock;                                             //@synthesize handlerBlock=_handlerBlock - In the implementation block
@property (assign,nonatomic) BOOL hasPresentedConfirmation;                             //@synthesize hasPresentedConfirmation=_hasPresentedConfirmation - In the implementation block
@property (assign,nonatomic) unsigned long long confirmationType;                       //@synthesize confirmationType=_confirmationType - In the implementation block
@property (assign,nonatomic) unsigned long long confirmationSelectionMode;              //@synthesize confirmationSelectionMode=_confirmationSelectionMode - In the implementation block
@property (nonatomic,copy) NSString * confirmationMessage;                              //@synthesize confirmationMessage=_confirmationMessage - In the implementation block
@property (nonatomic,copy) NSString * confirmationLabel;                                //@synthesize confirmationLabel=_confirmationLabel - In the implementation block
@property (nonatomic,retain) UIImage * confirmationIcon;                                //@synthesize confirmationIcon=_confirmationIcon - In the implementation block
+(id)confirmationButtonWithMessage:(id)arg1 confirmationLabel:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setConfirmationIcon:(UIImage *)arg1 ;
-(void)setConfirmationType:(unsigned long long)arg1 ;
-(void)setConfirmationSelectionMode:(unsigned long long)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)setConfirmationMessage:(NSString *)arg1 ;
-(void)setConfirmationLabel:(NSString *)arg1 ;
-(void)setHandlerBlock:(id)arg1 ;
-(void)_updateButtonAction;
-(BOOL)_isInConfirmableState;
-(void)_didConfirm;
-(unsigned long long)confirmationType;
-(BOOL)hasPresentedConfirmation;
-(unsigned long long)confirmationSelectionMode;
-(void)setHasPresentedConfirmation:(BOOL)arg1 ;
-(NSString *)confirmationLabel;
-(UIImage *)confirmationIcon;
-(NSString *)confirmationMessage;
-(id)handlerBlock;
-(void)reset;
-(id)_confirmationMenu;
@end
