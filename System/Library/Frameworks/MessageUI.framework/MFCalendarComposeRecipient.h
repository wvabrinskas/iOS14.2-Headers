/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MFComposeRecipient.h>

@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient {

	NSString* _calAttendeeName;
	id _participant;

}

@property (nonatomic,retain) id participant; 
-(unsigned long long)hash;
-(id)displayString;
-(id)initWithComposeRecipient:(id)arg1 ;
-(void)setCalAttendeeName:(id)arg1 ;
-(void)setParticipant:(id)arg1 ;
-(id)participant;
-(BOOL)isEqual:(id)arg1 ;
@end

