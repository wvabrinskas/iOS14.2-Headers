/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIPageComponent.h>

@class UIColor, NSArray, SKUIRowViewElement;

@interface SKUIRowComponent : SKUIPageComponent {

	UIColor* _backgroundColor;
	NSArray* _childComponents;
	NSArray* _columnWidths;
	long long _missingItemCount;
	long long _numberOfColumns;
	BOOL _shouldAutoFlow;

}

@property (nonatomic,readonly) SKUIRowViewElement * viewElement; 
@property (nonatomic,readonly) UIColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) NSArray * childComponents;                     //@synthesize childComponents=_childComponents - In the implementation block
@property (nonatomic,readonly) NSArray * columnWidths;                        //@synthesize columnWidths=_columnWidths - In the implementation block
@property (nonatomic,readonly) long long numberOfColumns;                     //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutoFlow;                           //@synthesize shouldAutoFlow=_shouldAutoFlow - In the implementation block
-(long long)componentType;
-(NSArray *)columnWidths;
-(long long)numberOfColumns;
-(UIColor *)backgroundColor;
-(id)description;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithCustomPageContext:(id)arg1 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(id)_updateWithMissingItems:(id)arg1 ;
-(id)_childComponentWithContext:(id)arg1 ;
-(BOOL)_isChildMissingItemData:(id)arg1 ;
-(NSArray *)childComponents;
-(BOOL)shouldAutoFlow;
@end
