/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXUISettingsEditableTableCellWithStepperDelegate <NSObject>
@optional
-(id)unitsStringForSpecifier:(id)arg1;
-(long long)keyboardTypeForSpecifier:(id)arg1;

@required
-(id)stringValueForSpecifier:(id)arg1;
-(double)valueForSpecifier:(id)arg1;
-(void)specifier:(id)arg1 setValue:(double)arg2;
-(double)stepValueForSpecifier:(id)arg1;
-(double)minimumValueForSpecifier:(id)arg1;
-(double)maximumValueForSpecifier:(id)arg1;

@end
