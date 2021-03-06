/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNContactsUserDefaults.h>

@class NSMutableDictionary, NSCache, CNiOSABContactsUserDefaultsABWrapper;

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults {

	NSMutableDictionary* _observerCountPerKey;
	NSCache* _valueCache;
	CNiOSABContactsUserDefaultsABWrapper* _abWrapper;

}

@property (nonatomic,retain) NSMutableDictionary * observerCountPerKey;                       //@synthesize observerCountPerKey=_observerCountPerKey - In the implementation block
@property (nonatomic,retain) NSCache * valueCache;                                            //@synthesize valueCache=_valueCache - In the implementation block
@property (nonatomic,readonly) CNiOSABContactsUserDefaultsABWrapper * abWrapper;              //@synthesize abWrapper=_abWrapper - In the implementation block
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(long long)sortOrder;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg1 ;
-(void)setShortNameFormat:(long long)arg1 ;
-(id)init;
-(long long)newContactDisplayNameOrder;
-(void)_unregisterObserverForKey:(id)arg1 ;
-(void)setDisplayNameOrder:(long long)arg1 ;
-(void)setObserverCountPerKey:(NSMutableDictionary *)arg1 ;
-(long long)shortNameFormat;
-(id)countryCode;
-(NSMutableDictionary *)observerCountPerKey;
-(CNiOSABContactsUserDefaultsABWrapper *)abWrapper;
-(id)filteredGroupAndContainerIDs;
-(id)initWithABWrapper:(id)arg1 ;
-(void)_registerObserverForKey:(id)arg1 ;
-(void)setValueCache:(NSCache *)arg1 ;
-(void)flushCache;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(void)setFilteredGroupAndContainerIDs:(id)arg1 ;
-(NSCache *)valueCache;
-(long long)displayNameOrder;
-(BOOL)isShortNameFormatEnabled;
-(BOOL)shortNameFormatPrefersNicknames;
-(void)dealloc;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
@end

