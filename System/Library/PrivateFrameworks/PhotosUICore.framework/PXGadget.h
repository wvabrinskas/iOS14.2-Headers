/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXGadgetSpec, NSString;


@protocol PXGadget <NSObject>
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@optional
-(void)contentViewWillAppear;
-(void)contentViewDidDisappear;
-(NSString *)localizedTitle;
-(void)commitPreviewViewController:(id)arg1;
-(CGRect)visibleContentRect;
-(unsigned long long)headerStyle;
-(unsigned long long)accessoryButtonType;
-(void)setVisibleContentRect:(CGRect)arg1;
-(long long)priority;
-(void)userDidSelectGadget;
-(void)userDidSelectAccessoryButton:(id)arg1;
-(void)prepareCollectionViewItem:(id)arg1;
-(void)removeCollectionViewItem:(id)arg1;
-(id)debugURLsForDiagnostics;
-(id)uniqueGadgetIdentifier;
-(void)contentHasBeenSeen;
-(void)gadgetControllerHasAppeared;
-(void)gadgetControllerHasDisappeared;
-(void)prefetchDuringScrollingForWidth:(double)arg1;
-(id)targetPreviewViewForLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2;
-(Class)collectionViewItemClass;
-(void)preloadResources;
-(void)setPriority:(long long)arg1;
-(NSString *)accessoryButtonTitle;
-(id)contentView;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(id)contentViewController;

@required
-(void)setGadgetSpec:(id)arg1;
-(unsigned long long)gadgetType;
-(unsigned long long)gadgetCapabilities;
-(PXGadgetSpec *)gadgetSpec;
-(id<PXGadgetDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CGSize*)sizeThatFits:(CGSize)arg1;

@end

