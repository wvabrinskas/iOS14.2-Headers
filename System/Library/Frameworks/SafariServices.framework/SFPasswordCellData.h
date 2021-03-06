/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WBSSavedPassword, WBSPasswordWarning, NSString;

@interface SFPasswordCellData : NSObject {

	BOOL _savedPasswordIsOnlySavedPasswordForHighLevelDomain;
	WBSSavedPassword* _savedPassword;
	WBSPasswordWarning* _warning;

}

@property (nonatomic,readonly) WBSSavedPassword * savedPassword;                                     //@synthesize savedPassword=_savedPassword - In the implementation block
@property (nonatomic,readonly) WBSPasswordWarning * warning;                                         //@synthesize warning=_warning - In the implementation block
@property (nonatomic,copy,readonly) NSString * highLevelDomain; 
@property (nonatomic,readonly) BOOL savedPasswordIsOnlySavedPasswordForHighLevelDomain;              //@synthesize savedPasswordIsOnlySavedPasswordForHighLevelDomain=_savedPasswordIsOnlySavedPasswordForHighLevelDomain - In the implementation block
+(id)passwordCellDataWithSavedPassword:(id)arg1 warning:(id)arg2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)arg3 ;
-(id)initWithSavedPassword:(id)arg1 warning:(id)arg2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)arg3 ;
-(WBSSavedPassword *)savedPassword;
-(BOOL)savedPasswordIsOnlySavedPasswordForHighLevelDomain;
-(NSString *)highLevelDomain;
-(WBSPasswordWarning *)warning;
@end

