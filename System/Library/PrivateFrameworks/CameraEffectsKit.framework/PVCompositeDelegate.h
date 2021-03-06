/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PVCompositeDelegate <NSObject>
@optional
-(id)renderWithInputs:(id)arg1 time:(SCD_Struct_JF3)arg2 metadata:(id)arg3;
-(id)renderWithInputs:(id)arg1 time:(SCD_Struct_JF3)arg2 userContext:(id)arg3 compositeContext:(id)arg4;
-(id)preprocessWithInputs:(id)arg1 time:(SCD_Struct_JF3)arg2 userContext:(id)arg3 compositeContext:(id)arg4;
-(void)loadWithUserContext:(id)arg1;
-(void)unloadWithUserContext:(id)arg1;

@end

