/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary, CNContactStore;

@interface GKContactDataSource : NSObject {

	NSArray* _contacts;
	NSArray* _sectionHeaders;
	NSDictionary* _sectionToContactIndexes;
	NSArray* _skipValues;
	NSDictionary* _skipToContactIndexes;
	CNContactStore* _store;
	NSDictionary* _contactLookup;

}

@property (nonatomic,retain) CNContactStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                  //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSDictionary * contactLookup;                        //@synthesize contactLookup=_contactLookup - In the implementation block
@property (nonatomic,retain) NSArray * sectionHeaders;                            //@synthesize sectionHeaders=_sectionHeaders - In the implementation block
@property (nonatomic,retain) NSDictionary * sectionToContactIndexes;              //@synthesize sectionToContactIndexes=_sectionToContactIndexes - In the implementation block
@property (nonatomic,retain) NSArray * skipValues;                                //@synthesize skipValues=_skipValues - In the implementation block
@property (nonatomic,retain) NSDictionary * skipToContactIndexes;                 //@synthesize skipToContactIndexes=_skipToContactIndexes - In the implementation block
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(id)init;
-(void)setContactLookup:(NSDictionary *)arg1 ;
-(void)setSkipValues:(NSArray *)arg1 ;
-(void)setSectionToContactIndexes:(NSDictionary *)arg1 ;
-(void)setSkipToContactIndexes:(NSDictionary *)arg1 ;
-(NSDictionary *)contactLookup;
-(void)loadContactsWithHandler:(/*^block*/id)arg1 ;
-(id)fullContactWithIdentifier:(id)arg1 ;
-(NSDictionary *)sectionToContactIndexes;
-(NSDictionary *)skipToContactIndexes;
-(void)setSectionHeaders:(NSArray *)arg1 ;
-(NSArray *)sectionHeaders;
-(CNContactStore *)store;
-(NSArray *)skipValues;
-(void)setStore:(CNContactStore *)arg1 ;
@end

