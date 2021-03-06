/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PKPaletteToolView.h>
#import <libobjc.A.dylib/PKPaletteErasingTool.h>
#import <libobjc.A.dylib/PKPaletteErasingAttributesViewControllerDelegate.h>

@class PKPaletteAttributeViewController, NSString;

@interface PKPaletteErasingToolView : PKPaletteToolView <PKPaletteErasingTool, PKPaletteErasingAttributesViewControllerDelegate> {

	BOOL _bitmapEraser;
	PKPaletteAttributeViewController* _attributeViewController;

}

@property (assign,getter=isBitmapEraser,nonatomic) BOOL bitmapEraser;              //@synthesize bitmapEraser=_bitmapEraser - In the implementation block
@property (nonatomic,readonly) NSString * toolIdentifier; 
@property (nonatomic,readonly) id<PKPaletteInkingTool> inkingTool; 
@property (nonatomic,readonly) id<PKPaletteErasingTool> erasingTool; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)erasingAttributesViewControllerDidChangeErasingType:(id)arg1 ;
-(NSString *)toolIdentifier;
-(id)initWithToolIdentifier:(id)arg1 ;
-(id)attributeViewController;
-(void)setBitmapEraser:(BOOL)arg1 ;
-(BOOL)isBitmapEraser;
-(void)_updateAttributesViewController;
@end

