/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MPCFWrapper : NSObject {

	BOOL _nullRef;
	const void* _refValue;

}

@property (assign,getter=isNullRef,nonatomic) BOOL nullRef;              //@synthesize nullRef=_nullRef - In the implementation block
@property (nonatomic,readonly) const void* refValue;                     //@synthesize refValue=_refValue - In the implementation block
-(id)description;
-(const void*)refValue;
-(BOOL)isNullRef;
-(id)initWithCFType:(void*)arg1 ;
-(void)setNullRef:(BOOL)arg1 ;
-(void)dealloc;
@end
