/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PKPaletteBaseColorPickerController.h>
#import <UIKit/UIColorPickerViewControllerDelegate.h>

@class UIColorPickerViewController, NSString;

@interface PKPaletteSystemColorPickerController : PKPaletteBaseColorPickerController <UIColorPickerViewControllerDelegate> {

	UIColorPickerViewController* _colorPickerViewController;

}

@property (nonatomic,retain) UIColorPickerViewController * colorPickerViewController;              //@synthesize colorPickerViewController=_colorPickerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)viewController;
-(void)colorPickerViewControllerDidSelectColor:(id)arg1 ;
-(id)selectedColor;
-(void)setSelectedColor:(id)arg1 ;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(UIColorPickerViewController *)colorPickerViewController;
-(void)setColorPickerViewController:(UIColorPickerViewController *)arg1 ;
-(BOOL)_shouldConvertColorPickerColorFromDarkToLight;
@end

