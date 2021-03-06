/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableAttributedString;

@interface EKParticipantForDisplay : NSObject {

	BOOL _optionalParticipant;
	NSMutableAttributedString* _displayString;

}

@property (nonatomic,retain) NSMutableAttributedString * displayString;                          //@synthesize displayString=_displayString - In the implementation block
@property (assign,getter=isOptionalParticipant,nonatomic) BOOL optionalParticipant;              //@synthesize optionalParticipant=_optionalParticipant - In the implementation block
-(void)setDisplayString:(NSMutableAttributedString *)arg1 ;
-(NSMutableAttributedString *)displayString;
-(BOOL)isOptionalParticipant;
-(void)setOptionalParticipant:(BOOL)arg1 ;
@end

