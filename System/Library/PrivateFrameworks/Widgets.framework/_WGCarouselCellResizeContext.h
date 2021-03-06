/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewFloatAnimatableProperty;

@interface _WGCarouselCellResizeContext : NSObject {

	BOOL _active;
	double _compactHeight;
	double _expandedHeight;
	UIViewFloatAnimatableProperty* _resizeProgress;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) double compactHeight;                                        //@synthesize compactHeight=_compactHeight - In the implementation block
@property (assign,nonatomic) double expandedHeight;                                       //@synthesize expandedHeight=_expandedHeight - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * resizeProgress;              //@synthesize resizeProgress=_resizeProgress - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(void)setCompactHeight:(double)arg1 ;
-(void)setResizeProgress:(UIViewFloatAnimatableProperty *)arg1 ;
-(double)compactHeight;
-(BOOL)isActive;
-(void)setExpandedHeight:(double)arg1 ;
-(double)expandedHeight;
-(UIViewFloatAnimatableProperty *)resizeProgress;
@end

