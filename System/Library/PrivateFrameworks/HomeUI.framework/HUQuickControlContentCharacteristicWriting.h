/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet;


@protocol HUQuickControlContentCharacteristicWriting <NSObject>
@property (assign,nonatomic,__weak) id<HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate; 
@property (nonatomic,copy,readonly) NSSet * affectedCharacteristics; 
@required
-(id)overrideValueForCharacteristic:(id)arg1;
-(NSSet *)affectedCharacteristics;
-(void)setCharacteristicWritingDelegate:(id)arg1;
-(id<HUQuickControlContentCharacteristicWritingDelegate>)characteristicWritingDelegate;

@end
