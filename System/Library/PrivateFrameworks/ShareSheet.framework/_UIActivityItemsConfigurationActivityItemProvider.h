/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivityItemProvider.h>

@protocol UIActivityItemsConfigurationReading;
@interface _UIActivityItemsConfigurationActivityItemProvider : UIActivityItemProvider {

	id<UIActivityItemsConfigurationReading> _activityItemsConfiguration;
	id _item;
	long long _index;

}
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)_title;
-(id)initWithActivityItemsConfiguration:(id)arg1 itemAtIndex:(long long)arg2 ;
@end

