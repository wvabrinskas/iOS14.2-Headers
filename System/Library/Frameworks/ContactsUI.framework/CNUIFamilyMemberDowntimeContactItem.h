/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNContact, NSString;

@interface CNUIFamilyMemberDowntimeContactItem : NSObject {

	BOOL _selected;
	CNContact* _contact;
	NSString* _label;

}

@property (nonatomic,readonly) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * label;                 //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL selected;                      //@synthesize selected=_selected - In the implementation block
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)label;
-(CNContact *)contact;
-(BOOL)selected;
-(id)initWithContact:(id)arg1 label:(id)arg2 ;
@end
