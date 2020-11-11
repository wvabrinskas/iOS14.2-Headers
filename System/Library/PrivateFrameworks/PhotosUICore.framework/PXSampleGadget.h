/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSampleGadgetViewDelegate.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, NSString, UIColor;

@interface PXSampleGadget : NSObject <PXSampleGadgetViewDelegate, PXGadget> {

	BOOL _expanded;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	unsigned long long _accessoryButtonType;
	PXGadgetSpec* _gadgetSpec;
	NSString* _gadgetTitle;
	unsigned long long _preferredHeight;
	unsigned long long _preferredExpandedHeight;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic) unsigned long long preferredHeight;                      //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,nonatomic) unsigned long long preferredExpandedHeight;              //@synthesize preferredExpandedHeight=_preferredExpandedHeight - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                           //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,copy) NSString * gadgetTitle;                                    //@synthesize gadgetTitle=_gadgetTitle - In the implementation block
@property (assign,nonatomic) unsigned long long accessoryButtonType;                  //@synthesize accessoryButtonType=_accessoryButtonType - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                               //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(NSString *)localizedTitle;
-(id)init;
-(BOOL)expanded;
-(id<PXGadgetDelegate>)delegate;
-(unsigned long long)preferredHeight;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)gadgetTitle;
-(CGRect)view:(id)arg1 colorFrameForBounds:(CGRect)arg2 ;
-(id)initWithMininumHeight:(double)arg1 ;
-(void)setAccessoryButtonType:(unsigned long long)arg1 ;
-(void)_prepareView:(id)arg1 ;
-(void)setGadgetTitle:(NSString *)arg1 ;
-(unsigned long long)preferredExpandedHeight;
-(void)setPreferredExpandedHeight:(unsigned long long)arg1 ;
-(unsigned long long)accessoryButtonType;
-(long long)priority;
-(void)userDidSelectAccessoryButton:(id)arg1 ;
-(void)prepareCollectionViewItem:(id)arg1 ;
-(Class)collectionViewItemClass;
-(void)setPriority:(long long)arg1 ;
-(void)setPreferredHeight:(unsigned long long)arg1 ;
@end
