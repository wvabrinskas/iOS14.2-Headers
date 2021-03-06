/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HRCategoryViewControllerFactory.h>
#import <libobjc.A.dylib/HRConceptViewControllerFactory.h>

@interface HRViewControllerFactory : NSObject <HRCategoryViewControllerFactory, HRConceptViewControllerFactory>
+(id)shared;
-(id)makeViewControllerForCategory:(id)arg1 usingProfile:(id)arg2 ;
-(id)makeTimelineViewControllerForCategory:(id)arg1 showsInitialSearchBar:(BOOL)arg2 usingProfile:(id)arg3 ;
-(id)makeAlphabeticalViewControllerForCategory:(id)arg1 usingProfile:(id)arg2 ;
-(id)makeViewControllerForConcept:(id)arg1 fromCategory:(id)arg2 highlightedRecordId:(id)arg3 usingProfile:(id)arg4 ;
-(id)init;
-(id)makeOnboadingTileViewControllerUsing:(id)arg1 ;
-(id)makeSettingsViewControllerUsing:(id)arg1 ;
-(id)makeDetailViewControllerForRecord:(id)arg1 usingProfile:(id)arg2 ;
-(id)makeViewControllerForRecord:(id)arg1 usingProfile:(id)arg2 ;
@end

