//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHIconViewConfigurationInteraction-Protocol.h>
#import <SpringBoardHome/SBHStackConfigurationViewControllerDelegate-Protocol.h>
#import <SpringBoardHome/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class CHSAvocadoDescriptorProvider, NSString, SBHStackConfiguration, SBHStackConfigurationViewController, SBIconView, UIViewController;
@protocol SBHIconViewConfigurationInteractionDelegate, SBHStackConfigurationInteractionDelegate;

@interface SBHStackConfigurationInteraction : NSObject <SBHStackConfigurationViewControllerDelegate, UIAdaptivePresentationControllerDelegate, SBHIconViewConfigurationInteraction>
{
    SBHStackConfiguration *_configuration;
    id <SBHIconViewConfigurationInteractionDelegate> _delegate;
    id <SBHStackConfigurationInteractionDelegate> _stackConfigurationDelegate;
    SBIconView *_iconView;
    SBHStackConfigurationViewController *_configurationViewController;
    UIViewController *_containerViewController;
    CHSAvocadoDescriptorProvider *_descriptorProvider;
}


// Remaining properties
@property(copy, nonatomic) SBHStackConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SBHStackConfigurationViewController *configurationViewController; // @synthesize configurationViewController=_configurationViewController;
@property(retain, nonatomic) UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBHIconViewConfigurationInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) CHSAvocadoDescriptorProvider *descriptorProvider; // @synthesize descriptorProvider=_descriptorProvider;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <SBHStackConfigurationInteractionDelegate> stackConfigurationDelegate; // @synthesize stackConfigurationDelegate=_stackConfigurationDelegate;
@property(readonly) Class superclass;
@end
