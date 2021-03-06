/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNContactsLoggerProvider.h>

@protocol CNContactsLogger, CNSpotlightIndexingLogger, CNRegulatoryLogger, CNFavoritesLogger, CNGeminiLogger, CNAPITriageLogger;
@class NSString;

@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider> {

	id<CNContactsLogger> _contactsLogger;
	id<CNSpotlightIndexingLogger> _spotlightIndexingLogger;
	id<CNRegulatoryLogger> _regulatoryLogger;
	id<CNFavoritesLogger> _favoritesLogger;
	id<CNGeminiLogger> _geminiLogger;
	id<CNAPITriageLogger> _apiTriageLogger;

}

@property (nonatomic,retain) id<CNContactsLogger> contactsLogger;                                //@synthesize contactsLogger=_contactsLogger - In the implementation block
@property (nonatomic,retain) id<CNSpotlightIndexingLogger> spotlightIndexingLogger;              //@synthesize spotlightIndexingLogger=_spotlightIndexingLogger - In the implementation block
@property (nonatomic,retain) id<CNRegulatoryLogger> regulatoryLogger;                            //@synthesize regulatoryLogger=_regulatoryLogger - In the implementation block
@property (nonatomic,retain) id<CNFavoritesLogger> favoritesLogger;                              //@synthesize favoritesLogger=_favoritesLogger - In the implementation block
@property (nonatomic,retain) id<CNGeminiLogger> geminiLogger;                                    //@synthesize geminiLogger=_geminiLogger - In the implementation block
@property (nonatomic,retain) id<CNAPITriageLogger> apiTriageLogger;                              //@synthesize apiTriageLogger=_apiTriageLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerProvider;
-(id<CNContactsLogger>)contactsLogger;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(void)setContactsLogger:(id<CNContactsLogger>)arg1 ;
-(void)setGeminiLogger:(id<CNGeminiLogger>)arg1 ;
-(void)setSpotlightIndexingLogger:(id<CNSpotlightIndexingLogger>)arg1 ;
-(void)setFavoritesLogger:(id<CNFavoritesLogger>)arg1 ;
-(void)setApiTriageLogger:(id<CNAPITriageLogger>)arg1 ;
-(void)setRegulatoryLogger:(id<CNRegulatoryLogger>)arg1 ;
-(id<CNGeminiLogger>)geminiLogger;
-(id<CNFavoritesLogger>)favoritesLogger;
-(id<CNAPITriageLogger>)apiTriageLogger;
-(id<CNSpotlightIndexingLogger>)spotlightIndexingLogger;
@end

