/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNContact, CNContactStore, NSURL;

@interface CNDraggingContact : NSObject {

	CNContact* _contact;
	CNContactStore* _contactStore;
	NSURL* _cachedFileURLRepresentation;

}

@property (nonatomic,retain) CNContact * contact;                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSURL * cachedFileURLRepresentation;              //@synthesize cachedFileURLRepresentation=_cachedFileURLRepresentation - In the implementation block
+(id)availableDataRepresentationTypes;
+(id)os_log;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(CNContactStore *)contactStore;
-(id)dataRepresentationForType:(id)arg1 ;
-(id)fetchContactWithKeys:(id)arg1 ;
-(id)initWithContact:(id)arg1 contactStore:(id)arg2 ;
-(id)fileURLRepresentation;
-(id)serializeContactToVCard:(id)arg1 ;
-(NSURL *)cachedFileURLRepresentation;
-(void)setCachedFileURLRepresentation:(NSURL *)arg1 ;
-(void)cleanupFileURLRepresentation;
-(id)fileNameForContact:(id)arg1 ;
@end
