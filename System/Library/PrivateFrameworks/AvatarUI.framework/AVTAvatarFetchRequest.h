/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface AVTAvatarFetchRequest : NSObject {

	NSArray* _identifiers;
	NSArray* _excludingIdentifiers;
	long long _criteria;
	long long _fetchLimit;

}

@property (nonatomic,copy,readonly) NSArray * identifiers;                       //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * excludingIdentifiers;              //@synthesize excludingIdentifiers=_excludingIdentifiers - In the implementation block
@property (nonatomic,readonly) long long criteria;                               //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,readonly) long long fetchLimit;                             //@synthesize fetchLimit=_fetchLimit - In the implementation block
+(id)requestForAllAvatars;
+(id)requestForAllAvatarsExcluding:(id)arg1 ;
+(id)requestForAvatarWithIdentifier:(id)arg1 ;
+(id)requestForAvatarsWithIdentifiers:(id)arg1 ;
+(id)requestForStorePrimaryAvatar;
+(id)requestForCustomAvatarsWithLimit:(long long)arg1 ;
+(id)requestForCustomAvatars;
+(id)requestForPredefinedAvatars;
-(long long)criteria;
-(NSArray *)identifiers;
-(id)initWithCriteria:(long long)arg1 ;
-(id)initWithCriteria:(long long)arg1 identifiers:(id)arg2 excludedIdentifiers:(id)arg3 fetchLimit:(long long)arg4 ;
-(id)initWithCriteria:(long long)arg1 identifier:(id)arg2 ;
-(NSArray *)excludingIdentifiers;
-(unsigned long long)hash;
-(long long)fetchLimit;
-(BOOL)isEqual:(id)arg1 ;
@end
