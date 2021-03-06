/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CHPhoneBookManagerProtocol.h>

@class CNContactStore, NSString;

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol> {

	CNContactStore* _fContactsStore;

}

@property (nonatomic,retain) CNContactStore * fContactsStore;              //@synthesize fContactsStore=_fContactsStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)get;
-(id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3 ;
-(id)init;
-(BOOL)isABContactASuggestion;
-(id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3 ;
-(id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id*)arg3 ;
-(CNContactStore *)fContactsStore;
-(id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(BOOL)arg2 ;
-(id)fetchContactIdentifiersForHandles:(id)arg1 error:(id*)arg2 ;
-(id)getPersonsNameForContact:(id)arg1 ;
-(void)fetchAndCacheContactIdentifiersForCalls:(id)arg1 ;
-(id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3 ;
-(void)setFContactsStore:(CNContactStore *)arg1 ;
@end

