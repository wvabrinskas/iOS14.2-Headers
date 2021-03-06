/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ATXAppDirectoryCategory : NSObject <NSSecureCoding> {

	unsigned long long _categoryID;
	NSArray* _appBundleIDs;
	NSString* _localizedName;

}

@property (nonatomic,readonly) unsigned long long categoryID;              //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,readonly) NSArray * appBundleIDs;                     //@synthesize appBundleIDs=_appBundleIDs - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
+(BOOL)isCategoryiTunesGenre:(unsigned long long)arg1 ;
+(id)localizedStringForCategoryID:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)categoryIdentifierForScreenTimeCategoryID:(unsigned long long)arg1 ;
+(BOOL)_instanceSpecificLocalizedStringExistsForCategory:(unsigned long long)arg1 ;
+(BOOL)isCategoryScreenTime:(unsigned long long)arg1 ;
+(id)localizedStringForNonScreenTimeCategoryID:(unsigned long long)arg1 ;
+(BOOL)isCategorySpecial:(unsigned long long)arg1 ;
+(unsigned long long)screenTimeCategoryIDForCategoryIdentifier:(id)arg1 ;
-(id)initWithCategoryID:(unsigned long long)arg1 appBundleIDs:(id)arg2 localizedName:(id)arg3 ;
-(id)localizedStringForCategoryID:(unsigned long long)arg1 ;
-(void)updateCategoryLocalizedNameWithName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)categoryID;
-(id)initWithCategoryID:(unsigned long long)arg1 appBundleIDs:(id)arg2 ;
-(id)description;
-(void)updateAppBundleIDs:(id)arg1 ;
-(NSArray *)appBundleIDs;
-(NSString *)localizedName;
-(id)initWithCoder:(id)arg1 ;
@end

