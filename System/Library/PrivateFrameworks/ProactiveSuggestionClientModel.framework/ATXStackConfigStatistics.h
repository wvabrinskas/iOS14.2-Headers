/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface ATXStackConfigStatistics : NSObject {

	NSString* _widgetBundleId;
	NSString* _widgetKind;
	NSString* _containerBundleIdentifier;
	long long _widgetFamily;
	NSDate* _timestamp;
	long long _countOfSmartStacksWithWidget;
	long long _countOfNonSmartStacksWithWidget;
	long long _countOfStandaloneWidgets;
	long long _countOfWidgetsWithUnknownStackKind;

}

@property (nonatomic,copy,readonly) NSString * widgetBundleId;                            //@synthesize widgetBundleId=_widgetBundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetKind;                                //@synthesize widgetKind=_widgetKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerBundleIdentifier;                 //@synthesize containerBundleIdentifier=_containerBundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long widgetFamily;                                    //@synthesize widgetFamily=_widgetFamily - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long countOfSmartStacksWithWidget;                    //@synthesize countOfSmartStacksWithWidget=_countOfSmartStacksWithWidget - In the implementation block
@property (nonatomic,readonly) long long countOfNonSmartStacksWithWidget;                 //@synthesize countOfNonSmartStacksWithWidget=_countOfNonSmartStacksWithWidget - In the implementation block
@property (nonatomic,readonly) long long countOfStandaloneWidgets;                        //@synthesize countOfStandaloneWidgets=_countOfStandaloneWidgets - In the implementation block
@property (nonatomic,readonly) long long countOfWidgetsWithUnknownStackKind;              //@synthesize countOfWidgetsWithUnknownStackKind=_countOfWidgetsWithUnknownStackKind - In the implementation block
+(id)stackConfigStatisticsWithWidgetBundleId:(id)arg1 widgetKind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4 withBlock:(/*^block*/id)arg5 ;
-(NSString *)widgetKind;
-(id)initWithBuilder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)description;
-(NSString *)widgetBundleId;
-(long long)countOfSmartStacksWithWidget;
-(long long)countOfNonSmartStacksWithWidget;
-(long long)countOfStandaloneWidgets;
-(long long)countOfWidgetsWithUnknownStackKind;
-(NSString *)containerBundleIdentifier;
-(long long)widgetFamily;
-(NSDate *)timestamp;
@end

