/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class UIView, PXViewSpec, NSString;

@interface PXUIGenericViewTile : NSObject <PXUIViewBasicTile> {

	UIView* _view;
	PXViewSpec* __spec;

}

@property (setter=_setSpec:,nonatomic,retain) PXViewSpec * _spec;              //@synthesize _spec=__spec - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXViewSpec *)_spec;
-(void)becomeReusable;
-(void)_setSpec:(id)arg1 ;
-(UIView *)view;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)prepareForReuse;
@end

