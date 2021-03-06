/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardHIDEventFoundation/BKHIDEventClient.h>

@class NSString, NSArray, NSSet;

@interface BKHIDEventDeliveryClient : BKHIDEventClient {

	NSString* _bundleIdentifier;
	NSArray* _deliveryRoots;
	NSArray* _keyCommandDeliveryRoots;
	NSArray* _deferringRules;
	NSSet* _keyCommandsRegistrations;
	NSSet* _resolutions;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * deliveryRoots;                        //@synthesize deliveryRoots=_deliveryRoots - In the implementation block
@property (nonatomic,retain) NSArray * keyCommandDeliveryRoots;              //@synthesize keyCommandDeliveryRoots=_keyCommandDeliveryRoots - In the implementation block
@property (nonatomic,retain) NSArray * deferringRules;                       //@synthesize deferringRules=_deferringRules - In the implementation block
@property (nonatomic,retain) NSSet * keyCommandsRegistrations;               //@synthesize keyCommandsRegistrations=_keyCommandsRegistrations - In the implementation block
@property (nonatomic,retain) NSSet * resolutions;                            //@synthesize resolutions=_resolutions - In the implementation block
-(NSString *)bundleIdentifier;
-(NSArray *)keyCommandDeliveryRoots;
-(NSSet *)resolutions;
-(void)setKeyCommandsRegistrations:(NSSet *)arg1 ;
-(NSArray *)deliveryRoots;
-(void)setDeferringRules:(NSArray *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSSet *)keyCommandsRegistrations;
-(void)setKeyCommandDeliveryRoots:(NSArray *)arg1 ;
-(void)setResolutions:(NSSet *)arg1 ;
-(void)setDeliveryRoots:(NSArray *)arg1 ;
-(NSArray *)deferringRules;
@end

