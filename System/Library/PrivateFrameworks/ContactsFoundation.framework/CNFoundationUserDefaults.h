/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNFoundationUserDefaults.h>
@class NSDictionary;


@protocol CNFoundationUserDefaults <NSObject>
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) NSDictionary * filteredAccountsAndContainers; 
@required
-(unsigned long long)sortOrder;
-(void)setShortNameFormat:(unsigned long long)arg1;
-(void)setNameOrder:(unsigned long long)arg1;
-(unsigned long long)shortNameFormat;
-(id)countryCode;
-(BOOL)preferNickname;
-(unsigned long long)newContactNameOrder;
-(void)setPreferNickname:(BOOL)arg1;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(id)arg1;
-(void)setShortNameFormatEnabled:(BOOL)arg1;
-(unsigned long long)nameOrder;
-(BOOL)isShortNameFormatEnabled;

@end


@class NSDictionary, CNUserDefaults, NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults> {

	CNUserDefaults* _userDefaults;

}

@property (retain) CNUserDefaults * userDefaults;                                                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) NSDictionary * filteredAccountsAndContainers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeRegisteredDefaults;
+(unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1 ;
+(id)sharedDefaults;
+(id)registeredDefaults;
-(unsigned long long)sortOrder;
-(CNUserDefaults *)userDefaults;
-(void)setShortNameFormat:(unsigned long long)arg1 ;
-(id)init;
-(void)setUserDefaults:(CNUserDefaults *)arg1 ;
-(void)setNameOrder:(unsigned long long)arg1 ;
-(unsigned long long)shortNameFormat;
-(id)countryCode;
-(BOOL)preferNickname;
-(unsigned long long)newContactNameOrder;
-(void)setPreferNickname:(BOOL)arg1 ;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(NSDictionary *)arg1 ;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(unsigned long long)nameOrder;
-(BOOL)isShortNameFormatEnabled;
@end

