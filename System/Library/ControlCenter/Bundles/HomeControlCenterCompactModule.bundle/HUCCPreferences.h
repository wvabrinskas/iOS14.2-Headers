/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterCompactModule.bundle/HomeControlCenterCompactModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HUCCPreferences : NSObject

@property (assign,nonatomic) unsigned long long preferredPage; 
+(id)sharedInstance;
+(id)pageNumberByPageString;
+(id)pageStringByPageNumber;
-(unsigned long long)preferredPage;
-(void)setPreferredPage:(unsigned long long)arg1 ;
@end

