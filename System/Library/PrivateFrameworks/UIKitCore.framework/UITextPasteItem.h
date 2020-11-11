/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITextPasteItem.h>
@class NSItemProvider, NSDictionary;


@protocol UITextPasteItem <NSObject>
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,readonly) id localObject; 
@property (nonatomic,readonly) NSDictionary * defaultAttributes; 
@required
-(NSItemProvider *)itemProvider;
-(id)localObject;
-(void)setNoResult;
-(NSDictionary *)defaultAttributes;
-(void)setStringResult:(id)arg1;
-(void)setAttributedStringResult:(id)arg1;
-(void)setAttachmentResult:(id)arg1;
-(void)setDefaultResult;

@end


@class NSItemProvider, NSDictionary, UITextPasteCoordinator, NSArray, NSString;

@interface UITextPasteItem : NSObject <UITextPasteItem> {

	BOOL _forcesDefaultAttributes;
	NSItemProvider* _itemProvider;
	id _localObject;
	NSDictionary* _defaultAttributes;
	UITextPasteCoordinator* _coordinator;
	NSArray* _supportedPasteConfigurationClasses;
	NSDictionary* _documentOptions;

}

@property (nonatomic,retain) NSItemProvider * itemProvider;                             //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) id localObject;                                            //@synthesize localObject=_localObject - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultAttributes;                          //@synthesize defaultAttributes=_defaultAttributes - In the implementation block
@property (nonatomic,readonly) UITextPasteCoordinator * coordinator;                    //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) NSArray * supportedPasteConfigurationClasses;              //@synthesize supportedPasteConfigurationClasses=_supportedPasteConfigurationClasses - In the implementation block
@property (assign,nonatomic) BOOL forcesDefaultAttributes;                              //@synthesize forcesDefaultAttributes=_forcesDefaultAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * documentOptions;                              //@synthesize documentOptions=_documentOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSItemProvider *)itemProvider;
-(id)localObject;
-(void)setNoResult;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(id)initWithTextPasteCoordinator:(id)arg1 ;
-(void)setSupportedPasteConfigurationClasses:(NSArray *)arg1 ;
-(void)setForcesDefaultAttributes:(BOOL)arg1 ;
-(void)setDocumentOptions:(NSDictionary *)arg1 ;
-(BOOL)forcesDefaultAttributes;
-(NSArray *)supportedPasteConfigurationClasses;
-(NSDictionary *)documentOptions;
-(NSDictionary *)defaultAttributes;
-(void)setStringResult:(id)arg1 ;
-(void)setAttributedStringResult:(id)arg1 ;
-(void)setAttachmentResult:(id)arg1 ;
-(void)setDefaultResult;
-(UITextPasteCoordinator *)coordinator;
-(void)setDefaultAttributes:(NSDictionary *)arg1 ;
-(void)setLocalObject:(id)arg1 ;
@end
