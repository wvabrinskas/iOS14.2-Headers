//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBWallpaperObserver-Protocol.h>
#import <SpringBoard/_SBFakeBlurObserver-Protocol.h>

@class NSString, UIColor, UIImage, UIImageView;
@protocol SBWallpaperPresenting><SBWallpaperLegibilityProviding, _SBFakeBlur;

@interface SBWallpaperEffectViewBase : UIView <_SBFakeBlurObserver, SBWallpaperObserver>
{
    long long _variant;
    UIColor *_wallpaperAverageColor;
    long long _startStyle;
    long long _endStyle;
    double _transitionFraction;
    UIView<_SBFakeBlur> *_blurView;
    UIView *_grayscaleTintView;
    UIView *_colorTintView;
    UIView<_SBFakeBlur> *_transitionBlurView;
    UIView *_transitionGrayscaleTintView;
    UIView *_transitionColorTintView;
    UIImageView *_maskImageView;
    UIView *_blurMaskingContainer;
    UIView *_tintMaskingContainer;
    UIImage *_maskImage;
    _Bool _shouldMaskBlur;
    _Bool _shouldMaskTint;
    _Bool _fullscreen;
    _Bool _forcesOpaque;
    unsigned long long _transformOptions;
    _Bool _accessibilityReduceTransparencyEnabled;
    id <SBWallpaperPresenting><SBWallpaperLegibilityProviding> _wallpaperPresenter;
}


// Remaining properties
@property(retain, nonatomic) UIView *blurMaskingContainer; // @synthesize blurMaskingContainer=_blurMaskingContainer;
@property(retain, nonatomic) UIView<_SBFakeBlur> *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *colorTintView; // @synthesize colorTintView=_colorTintView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool forcesOpaque; // @synthesize forcesOpaque=_forcesOpaque;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(retain, nonatomic) UIView *grayscaleTintView; // @synthesize grayscaleTintView=_grayscaleTintView;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *tintMaskingContainer; // @synthesize tintMaskingContainer=_tintMaskingContainer;
@property(nonatomic) unsigned long long transformOptions; // @synthesize transformOptions=_transformOptions;
@property(retain, nonatomic) UIView<_SBFakeBlur> *transitionBlurView; // @synthesize transitionBlurView=_transitionBlurView;
@property(retain, nonatomic) UIView *transitionColorTintView; // @synthesize transitionColorTintView=_transitionColorTintView;
@property(retain, nonatomic) UIView *transitionGrayscaleTintView; // @synthesize transitionGrayscaleTintView=_transitionGrayscaleTintView;
@property(readonly, nonatomic) id <SBWallpaperPresenting><SBWallpaperLegibilityProviding> wallpaperPresenter; // @synthesize wallpaperPresenter=_wallpaperPresenter;
@property(nonatomic) double zoomScale;
@end
