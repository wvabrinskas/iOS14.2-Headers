/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _PFWeakContainerSentenal;

@interface PFWeakContainer : NSObject {

	_PFWeakContainerSentenal* _sentenal;
	id _nilNotificationDelegate;

}
-(id)init;
-(void)weakReferenceBecameNil;
-(BOOL)isTrackingWeakObjectDealloc:(id)arg1 ;
-(void)trackWeakObjectDealloc:(id)arg1 ;
-(void)stopTrackingWeakObjectDealloc:(id)arg1 ;
-(void)setNilNotificationDelegate:(id)arg1 ;
-(void)dealloc;
@end

