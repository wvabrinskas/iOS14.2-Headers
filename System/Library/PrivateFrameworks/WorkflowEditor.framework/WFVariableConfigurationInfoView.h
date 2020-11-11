/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface WFVariableConfigurationInfoView : UIView {

	NSString* _heading;
	NSString* _subheading;
	UILabel* _textLabel;

}

@property (assign,nonatomic,__weak) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,copy) NSString * heading;                        //@synthesize heading=_heading - In the implementation block
@property (nonatomic,copy) NSString * subheading;                     //@synthesize subheading=_subheading - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)heading;
-(void)setHeading:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)updateLabel;
-(void)setSubheading:(NSString *)arg1 ;
-(NSString *)subheading;
@end
