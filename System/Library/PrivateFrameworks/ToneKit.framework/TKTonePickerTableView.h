/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableView.h>

@protocol TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver;
@interface TKTonePickerTableView : UITableView {

	id<TKTonePickerTableViewLayoutMarginsObserver> _layoutMarginsObserver;
	id<TKTonePickerTableViewSeparatorObserver> _separatorObserver;

}

@property (assign,nonatomic,__weak) id<TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver;              //@synthesize layoutMarginsObserver=_layoutMarginsObserver - In the implementation block
@property (assign,nonatomic,__weak) id<TKTonePickerTableViewSeparatorObserver> separatorObserver;                      //@synthesize separatorObserver=_separatorObserver - In the implementation block
-(void)setSeparatorColor:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(id<TKTonePickerTableViewLayoutMarginsObserver>)layoutMarginsObserver;
-(id<TKTonePickerTableViewSeparatorObserver>)separatorObserver;
-(void)_handleSeparatorColorDidChange;
-(void)setLayoutMarginsObserver:(id<TKTonePickerTableViewLayoutMarginsObserver>)arg1 ;
-(void)setSeparatorObserver:(id<TKTonePickerTableViewSeparatorObserver>)arg1 ;
@end
