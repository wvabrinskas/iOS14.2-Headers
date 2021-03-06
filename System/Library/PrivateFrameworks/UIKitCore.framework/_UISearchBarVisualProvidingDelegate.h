/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UISearchBarTextField, UIView, _UINavigationControllerPalette, UISearchController;


@protocol _UISearchBarVisualProvidingDelegate <NSObject>
@property (assign,nonatomic,__weak) id<UISearchBarDelegate><UISearchBarDelegate_Private> delegate; 
@property (getter=_searchBarTextField,nonatomic,readonly) UISearchBarTextField * searchBarTextField; 
@property (nonatomic,readonly) UIView * _viewForChildViews; 
@property (nonatomic,readonly) _UINavigationControllerPalette * _containingNavigationPalette; 
@property (nonatomic,readonly) long long barPosition; 
@property (nonatomic,readonly) UISearchController * _searchController; 
@property (nonatomic,readonly) long long _expectedInterfaceOrientation; 
@property (nonatomic,readonly) BOOL _effectivelySupportsDynamicType; 
@property (nonatomic,readonly) Class _classForSearchTextField; 
@required
-(id)textInputTraits;
-(id<UISearchBarDelegate><UISearchBarDelegate_Private>)delegate;
-(long long)barPosition;
-(void)setDelegate:(id)arg1;
-(id)_searchBarTextField;
-(Class)_classForSearchTextField;
-(long long)_expectedInterfaceOrientation;
-(BOOL)_effectivelySupportsDynamicType;
-(UIView *)_viewForChildViews;
-(_UINavigationControllerPalette *)_containingNavigationPalette;
-(UISearchController *)_searchController;

@end

