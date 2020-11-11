/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXGLayout;

@interface PXGFence : NSObject {

	unsigned long long _type;
	PXGLayout* _layout;

}

@property (nonatomic,__weak,readonly) PXGLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
-(id)init;
-(id)initWithLayout:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(PXGLayout *)layout;
@end
