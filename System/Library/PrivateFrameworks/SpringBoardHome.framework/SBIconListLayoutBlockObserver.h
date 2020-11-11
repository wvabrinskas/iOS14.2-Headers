/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/SBIconListLayoutObserver.h>

@class NSString;

@interface SBIconListLayoutBlockObserver : NSObject <BSInvalidatable, SBIconListLayoutObserver> {

	/*^block*/id _didAddIconViewBlock;
	/*^block*/id _didRemoveIconViewBlock;
	/*^block*/id _boundsSizeChangeBlock;

}

@property (nonatomic,copy) id didAddIconViewBlock;                  //@synthesize didAddIconViewBlock=_didAddIconViewBlock - In the implementation block
@property (nonatomic,copy) id didRemoveIconViewBlock;               //@synthesize didRemoveIconViewBlock=_didRemoveIconViewBlock - In the implementation block
@property (nonatomic,copy) id boundsSizeChangeBlock;                //@synthesize boundsSizeChangeBlock=_boundsSizeChangeBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)iconListView:(id)arg1 didRemoveIconView:(id)arg2 ;
-(void)iconListView:(id)arg1 didAddIconView:(id)arg2 ;
-(void)iconListViewDidChangeBoundsSize:(id)arg1 ;
-(id)didAddIconViewBlock;
-(void)setDidAddIconViewBlock:(id)arg1 ;
-(id)didRemoveIconViewBlock;
-(void)setDidRemoveIconViewBlock:(id)arg1 ;
-(id)boundsSizeChangeBlock;
-(void)setBoundsSizeChangeBlock:(id)arg1 ;
-(void)invalidate;
@end
