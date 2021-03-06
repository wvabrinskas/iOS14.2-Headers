/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, PXGSpriteReference, PXGLayout;

@interface PXGHitTestResult : NSObject {

	/*^block*/id _userDataProvider;
	id _userData;
	NSString* _identifier;
	BOOL _isDecorated;
	PXGSpriteReference* _spriteReference;
	PXGLayout* _layout;

}

@property (nonatomic,readonly) PXGSpriteReference * spriteReference;              //@synthesize spriteReference=_spriteReference - In the implementation block
@property (nonatomic,readonly) PXGLayout * layout;                                //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) id userData; 
@property (nonatomic,readonly) BOOL isDecorated;                                  //@synthesize isDecorated=_isDecorated - In the implementation block
-(id)userData;
-(id)init;
-(NSString *)identifier;
-(id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userDataProvider:(/*^block*/id)arg4 ;
-(id)description;
-(BOOL)isDecorated;
-(id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4 ;
-(PXGLayout *)layout;
-(PXGSpriteReference *)spriteReference;
@end

