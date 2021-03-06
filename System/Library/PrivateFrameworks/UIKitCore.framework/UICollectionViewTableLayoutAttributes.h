/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>
#import <UIKit/UICollectionViewTableSectionHeaderFooterAttributes.h>
#import <UIKit/UICollectionViewTableAllRowAttributes.h>

@class UIColor, UIVisualEffect;

@interface UICollectionViewTableLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewTableSectionHeaderFooterAttributes, UICollectionViewTableAllRowAttributes> {

	BOOL _separatorInsetIsRelativeToCellEdges;
	BOOL _shouldIndentWhileEditing;
	BOOL _showsReorderControl;
	BOOL _layoutMarginsFollowReadableWidth;
	BOOL _insetsContentViewsToSafeArea;
	BOOL _drawsSeparatorAtTopOfSection;
	BOOL _drawsSeparatorAtBottomOfSection;
	BOOL _preferredAttributesCached;
	BOOL _isHeader;
	BOOL _floating;
	int _sectionLocation;
	long long _separatorStyle;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UIColor* _backgroundColor;
	long long _accessoryType;
	long long _editingStyle;
	double _defaultLeadingCellMarginWidth;
	double _defaultTrailingCellMarginWidth;
	double _indexBarExtentFromEdge;
	long long _indentationLevel;
	double _maxTitleWidth;
	long long _textAlignment;
	UIEdgeInsets _separatorInset;
	UIEdgeInsets _backgroundInset;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) BOOL preferredAttributesCached;                        //@synthesize preferredAttributesCached=_preferredAttributesCached - In the implementation block
@property (assign,nonatomic) BOOL isHeader;                                         //@synthesize isHeader=_isHeader - In the implementation block
@property (assign,nonatomic) double maxTitleWidth;                                  //@synthesize maxTitleWidth=_maxTitleWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                  //@synthesize margins=_margins - In the implementation block
@property (assign,nonatomic) long long textAlignment;                               //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL floating;                                         //@synthesize floating=_floating - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;                           //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges;              //@synthesize separatorInsetIsRelativeToCellEdges=_separatorInsetIsRelativeToCellEdges - In the implementation block
@property (nonatomic,copy) UIColor * separatorColor;                                //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                      //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (assign,nonatomic) int sectionLocation;                                   //@synthesize sectionLocation=_sectionLocation - In the implementation block
@property (assign,nonatomic) BOOL layoutMarginsFollowReadableWidth;                 //@synthesize layoutMarginsFollowReadableWidth=_layoutMarginsFollowReadableWidth - In the implementation block
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea;                     //@synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea - In the implementation block
@property (assign,nonatomic) double defaultLeadingCellMarginWidth;                  //@synthesize defaultLeadingCellMarginWidth=_defaultLeadingCellMarginWidth - In the implementation block
@property (assign,nonatomic) double defaultTrailingCellMarginWidth;                 //@synthesize defaultTrailingCellMarginWidth=_defaultTrailingCellMarginWidth - In the implementation block
@property (assign,nonatomic) double indexBarExtentFromEdge;                         //@synthesize indexBarExtentFromEdge=_indexBarExtentFromEdge - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundInset;                          //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                            //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (assign,nonatomic) BOOL drawsSeparatorAtTopOfSection;                     //@synthesize drawsSeparatorAtTopOfSection=_drawsSeparatorAtTopOfSection - In the implementation block
@property (assign,nonatomic) BOOL drawsSeparatorAtBottomOfSection;                  //@synthesize drawsSeparatorAtBottomOfSection=_drawsSeparatorAtBottomOfSection - In the implementation block
@property (assign,nonatomic) long long accessoryType;                               //@synthesize accessoryType=_accessoryType - In the implementation block
@property (assign,nonatomic) long long editingStyle;                                //@synthesize editingStyle=_editingStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldIndentWhileEditing;                         //@synthesize shouldIndentWhileEditing=_shouldIndentWhileEditing - In the implementation block
@property (assign,nonatomic) BOOL showsReorderControl;                              //@synthesize showsReorderControl=_showsReorderControl - In the implementation block
+(void)applyValuesFromAttributes:(id)arg1 toAttributes:(id)arg2 valueOptions:(long long)arg3 ;
+(long long)automaticValueOptionsForRepresentedElementCategory:(unsigned long long)arg1 ;
-(double)defaultTrailingCellMarginWidth;
-(UIEdgeInsets)margins;
-(void)setBackgroundInset:(UIEdgeInsets)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(void)setIndexBarExtentFromEdge:(double)arg1 ;
-(BOOL)drawsSeparatorAtTopOfSection;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)editingStyle;
-(BOOL)drawsSeparatorAtBottomOfSection;
-(long long)separatorStyle;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setFloating:(BOOL)arg1 ;
-(BOOL)floating;
-(UIColor *)separatorColor;
-(double)maxTitleWidth;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(double)indexBarExtentFromEdge;
-(void)setSectionLocation:(int)arg1 ;
-(void)setLayoutMarginsFollowReadableWidth:(BOOL)arg1 ;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(BOOL)isHeader;
-(void)setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
-(long long)accessoryType;
-(long long)textAlignment;
-(BOOL)layoutMarginsFollowReadableWidth;
-(void)setMaxTitleWidth:(double)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDefaultLeadingCellMarginWidth:(double)arg1 ;
-(BOOL)insetsContentViewsToSafeArea;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(long long)indentationLevel;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(BOOL)shouldIndentWhileEditing;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(BOOL)showsReorderControl;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(void)setIsHeader:(BOOL)arg1 ;
-(void)setDefaultTrailingCellMarginWidth:(double)arg1 ;
-(double)defaultLeadingCellMarginWidth;
-(UIEdgeInsets)separatorInset;
-(UIEdgeInsets)backgroundInset;
-(void)setEditingStyle:(long long)arg1 ;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)setPreferredAttributesCached:(BOOL)arg1 ;
-(void)setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(BOOL)preferredAttributesCached;
-(int)sectionLocation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

